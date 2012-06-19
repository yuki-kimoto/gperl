int callstack_count = 0;

#define L(op) L_##op
#define DISPATCH_START() {						\
		callstack->ret_addr = &&L_RETURN;		\
		(callstack+1)->ret_addr = &&L_RETURN;	\
		goto *jmp_table[pc->op];				\
	}

#define DISPATCH_END() L_RETURN:
#define GOTO_NEXTOP() goto *(pc->opnext)

#define B(op) {&&L(op##_START), &&L(op##_END)}
#define START(op) L_##op##_START:
#define END(op) L_##op##_END:

#define BREAK() GOTO_NEXTOP()
#define _CASE(op) L(op) : { DBG_PL(#op); }
#define CASE(op, block) _CASE(op) { START(op); block; END(op); }
#define RETURN() { goto *callstack->ret_addr; }

#define I(idx) callstack->reg[idx].ivalue
#define D(idx) callstack->reg[idx].dvalue
#define S(idx) callstack->reg[idx].svalue
#define O(idx) callstack->reg[idx].ovalue

#define GPERL_UNDEF()
#define GPERL_LET(dst, src) stack[ebp + dst] = callstack->reg[src];
#define GPERL_gLET(dst, src) global_vmemory[dst] = callstack->reg[src]
#define GPERL_MOV(dst, v) callstack->reg[dst] = v
#define GPERL_vMOV(dst, src) callstack->reg[dst] = stack[ebp + src]
#define GPERL_gMOV(dst, src) callstack->reg[dst] = global_vmemory[src];
#define GPERL_ARGMOV(dst, src) callstack->reg[dst] = callstack->argstack[src]

#define GPERL_iADD(dst, src) I(dst) += I(src)
#define GPERL_dADD(dst, src) D(dst) += D(src)
#define GPERL_sADD(dst, src)
#define GPERL_oADD(dst, src)
#define GPERL_ADDC(dst, src)
#define GPERL_iADDC(dst, v) I(dst) += v.ivalue
#define GPERL_dADDC(dst, v) D(dst) += v.dvalue
#define GPERL_sADDC(dst, src)

#define GPERL_iSUB(dst, src) I(dst) -= I(src)
#define GPERL_dSUB(dst, src) D(dst) -= D(src)
#define GPERL_oSUB(dst, src)
#define GPERL_SUBC(dst, src)
#define GPERL_iSUBC(dst, v) I(dst) -= v.ivalue
#define GPERL_dSUBC(dst, v) D(dst) -= v.dvalue

#define GPERL_iMUL(dst, src) I(dst) *= I(src)
#define GPERL_dMUL(dst, src) D(dst) *= D(src)
#define GPERL_sMUL(dst, src)
#define GPERL_oMUL(dst, src)
#define GPERL_MULC(dst, src)
#define GPERL_iMULC(dst, v) I(dst) *= v.ivalue
#define GPERL_dMULC(dst, v) D(dst) *= v.dvalue
#define GPERL_sMULC(dst, src)

#define GPERL_iDIV(dst, src) I(dst) /= I(src)
#define GPERL_dDIV(dst, src) D(dst) /= D(src)
#define GPERL_oDIV(dst, src)
#define GPERL_DIVC(dst, src)
#define GPERL_iDIVC(dst, v) I(dst) /= v.ivalue
#define GPERL_dDIVC(dst, v) D(dst) /= v.dvalue

#define GPERL_iCMP_JMP(op, dst, src) {				\
		if (I(dst) op I(src)) {						\
			pc++;									\
		} else {									\
			pc += pc->jmp;							\
		}											\
	}
#define GPERL_dCMP_JMP(op, dst, src) {				\
		if (D(dst) op D(src)) {						\
			pc++;									\
		} else {									\
			pc += pc->jmp;							\
		}											\
	}
#define GPERL_sCMP_JMP(op, dst, src) {}
#define GPERL_oCMP_JMP(op, dst, src) {}
#define GPERL_CMP_JMPC(op, dst, src)
#define GPERL_iCMP_JMPC(op, dst, v) {			\
		if (I(dst) op v.ivalue) {				\
			pc++;								\
		} else {								\
			pc += pc->jmp;						\
		}										\
	}
#define GPERL_dCMP_JMPC(op, dst, v) {			\
		if (D(dst) op v.dvalue) {				\
			pc++;								\
		} else {								\
			pc += pc->jmp;						\
		}										\
	}
#define GPERL_sCMP_JMPC(op, dst, src) {}
#define GPERL_oCMP_JMPC(op, dst, src) {}

#define GPERL_iINC(dst) stack[ebp + dst].ivalue++
#define GPERL_dINC(dst) stack[ebp + dst].dvalue++
#define GPERL_sINC(dst)
#define GPERL_oINC(dst)
#define GPERL_igINC(dst) global_vmemory[dst].ivalue++
#define GPERL_dgINC(dst) global_vmemory[dst].dvalue++
#define GPERL_sgINC(dst)
#define GPERL_ogINC(dst)

#define GPERL_iDEC(dst) stack[ebp + dst].ivalue--
#define GPERL_dDEC(dst) stack[ebp + dst].dvalue--
#define GPERL_sDEC(dst)
#define GPERL_oDEC(dst)
#define GPERL_igDEC(dst) global_vmemory[dst].ivalue--
#define GPERL_dgDEC(dst) global_vmemory[dst].dvalue--
#define GPERL_sgDEC(dst)
#define GPERL_ogDEC(dst)

#define GPERL_RET(src) callstack->reg[0] = callstack->reg[src]; RETURN();
#define GPERL_NOP()

#define GPERL_WRITE(dst)
#define GPERL_iWRITE(dst) {								\
		sprintf(shared_buf, "%d", I(dst));				\
		outbuf += string(shared_buf);					\
	}
#define GPERL_dWRITE(dst) {								\
		sprintf(shared_buf, "%f", D(dst));				\
		outbuf += string(shared_buf);					\
	}
#define GPERL_sWRITE(dst) outbuf += string(getString(callstack->reg[dst]))
#define GPERL_oWRITE(dst) {									\
		GPerlObject *o = (GPerlObject *)getObject(callstack->reg[dst]);	\
		o->write(callstack->reg[dst]);						\
	}

#define GPERL_FLUSH() {												\
		fprintf(stderr, "%s", cstr(outbuf));						\
		outbuf = "";												\
	}
#define GPERL_JMP() pc += pc->jmp
#define GPERL_FUNCSET(func, dst) setToFuncMemory(func, dst)
#define GPERL_SETv(name, dst)

#define GPERL_CALL(dst, src, NAME) {								\
		code_ = func_memory[src];									\
		top   = code_;												\
		esp += pc->ebp;												\
		callstack->ebp = ebp;									\
		ebp = esp;												\
		callstack++;											\
		callstack->ret_addr = &&L_##NAME##AFTER;				\
		callstack->pc = pc;										\
		pc = top;												\
		GOTO_NEXTOP();											\
	L_##NAME##AFTER:											\
		pc = callstack->pc;										\
		(callstack-1)->reg[dst] = callstack->reg[0];			\
		callstack--;											\
		ebp = callstack->ebp;									\
		esp = ebp;												\
	}

#define GPERL_SELFCALL(dst, NAME) {								\
		esp += pc->ebp;											\
		callstack->ebp = ebp;									\
		ebp = esp;												\
		callstack++;											\
		callstack_count++;										\
		callstack->ret_addr = &&L_##NAME##AFTER;				\
		callstack->pc = pc;										\
		pc = top;												\
		GOTO_NEXTOP();											\
	L_##NAME##AFTER:											\
		pc = callstack->pc;										\
		(callstack-1)->reg[dst] = callstack->reg[0];			\
		callstack--;											\
		callstack_count--;										\
		ebp = callstack->ebp;									\
		esp = ebp;												\
	}

#define GPERL_SHIFT(src)
#define GPERL_iSHIFT(src)
#define GPERL_dSHIFT(src)
#define GPERL_sSHIFT(src)
#define GPERL_oSHIFT(src)
#define GPERL_PUSH(dst, src) (callstack+1)->argstack[src] = callstack->reg[dst]
#define GPERL_NEW()
#define GPERL_ARRAY_PUSH(argstack) callstack++; pc->push(argstack);
#define GPERL_ARRAY_AT(dst, src, idx) do {								\
		GPerlArray *a = (GPerlArray *)getObject(stack[ebp + src]);		\
		callstack->reg[dst] = a->list[I(idx)];							\
	} while (0);

#define GPERL_ARRAY_gAT(dst, src, idx) do {								\
		GPerlArray *a = (GPerlArray *)getObject(global_vmemory[src]);	\
		callstack->reg[dst] = a->list[I(idx)];							\
	} while (0);


#define GPERL_ARRAY_DREF(dst, src) do {									\
		GPerlArray *a = (GPerlArray *)getObject(callstack->reg[src]);	\
		GPerlArray *deref_a = new_GPerlArray(a->list, a->size);			\
		OBJECT_init(callstack->reg[dst], deref_a);						\
	} while (0);