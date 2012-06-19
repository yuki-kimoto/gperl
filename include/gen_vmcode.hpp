typedef enum {
	UNDEF,
	MOV,
	vMOV,
	gMOV,
	ARGMOV,
	ADD,
	dADD,
	iADD,
	sADD,
	oADD,
	dADDC,
	iADDC,
	SUB,
	dSUB,
	iSUB,
	oSUB,
	dSUBC,
	iSUBC,
	MUL,
	dMUL,
	iMUL,
	sMUL,
	oMUL,
	dMULC,
	iMULC,
	DIV,
	dDIV,
	iDIV,
	oDIV,
	dDIVC,
	iDIVC,
	JG,
	dJG,
	iJG,
	sJG,
	oJG,
	dJGC,
	iJGC,
	JL,
	dJL,
	iJL,
	sJL,
	oJL,
	dJLC,
	iJLC,
	JGE,
	dJGE,
	iJGE,
	sJGE,
	oJGE,
	dJGEC,
	iJGEC,
	JLE,
	dJLE,
	iJLE,
	sJLE,
	oJLE,
	dJLEC,
	iJLEC,
	JE,
	dJE,
	iJE,
	sJE,
	oJE,
	dJEC,
	iJEC,
	JNE,
	dJNE,
	iJNE,
	sJNE,
	oJNE,
	dJNEC,
	iJNEC,
	INC,
	dINC,
	iINC,
	sINC,
	oINC,
	gINC,
	dgINC,
	igINC,
	sgINC,
	ogINC,
	DEC,
	dDEC,
	iDEC,
	sDEC,
	oDEC,
	gDEC,
	dgDEC,
	igDEC,
	sgDEC,
	ogDEC,
	RET,
	THCODE,
	NOP,
	WRITE,
	dWRITE,
	iWRITE,
	sWRITE,
	oWRITE,
	FLUSH,
	JMP,
	LET,
	gLET,
	SETv,
	FUNCSET,
	CALL,
	SELFCALL,
	SHIFT,
	dSHIFT,
	iSHIFT,
	sSHIFT,
	oSHIFT,
	PUSH,
	NEW,
	ARRAY_PUSH,
	ARRAY_AT,
	ARRAY_gAT,
	ARRAY_DREF,
	A_MOV,
	B_MOV,
	C_MOV,
	D_MOV,
	A_vMOV,
	B_vMOV,
	C_vMOV,
	D_vMOV,
	A_gMOV,
	B_gMOV,
	C_gMOV,
	D_gMOV,
	A_ARGMOV,
	B_ARGMOV,
	C_ARGMOV,
	D_ARGMOV,
	AB_ADD,
	AB_dADD,
	AB_iADD,
	AB_sADD,
	AB_oADD,
	AC_ADD,
	AC_dADD,
	AC_iADD,
	AC_sADD,
	AC_oADD,
	AD_ADD,
	AD_dADD,
	AD_iADD,
	AD_sADD,
	AD_oADD,
	BC_ADD,
	BC_dADD,
	BC_iADD,
	BC_sADD,
	BC_oADD,
	BD_ADD,
	BD_dADD,
	BD_iADD,
	BD_sADD,
	BD_oADD,
	CD_ADD,
	CD_dADD,
	CD_iADD,
	CD_sADD,
	CD_oADD,
	A_ADDC,
	A_dADDC,
	A_iADDC,
	A_sADDC,
	B_ADDC,
	B_dADDC,
	B_iADDC,
	B_sADDC,
	C_ADDC,
	C_dADDC,
	C_iADDC,
	C_sADDC,
	D_ADDC,
	D_dADDC,
	D_iADDC,
	D_sADDC,
	AB_SUB,
	AB_dSUB,
	AB_iSUB,
	AB_oSUB,
	AC_SUB,
	AC_dSUB,
	AC_iSUB,
	AC_oSUB,
	AD_SUB,
	AD_dSUB,
	AD_iSUB,
	AD_oSUB,
	BC_SUB,
	BC_dSUB,
	BC_iSUB,
	BC_oSUB,
	BD_SUB,
	BD_dSUB,
	BD_iSUB,
	BD_oSUB,
	CD_SUB,
	CD_dSUB,
	CD_iSUB,
	CD_oSUB,
	A_SUBC,
	A_dSUBC,
	A_iSUBC,
	B_SUBC,
	B_dSUBC,
	B_iSUBC,
	C_SUBC,
	C_dSUBC,
	C_iSUBC,
	D_SUBC,
	D_dSUBC,
	D_iSUBC,
	AB_MUL,
	AB_dMUL,
	AB_iMUL,
	AB_sMUL,
	AB_oMUL,
	AC_MUL,
	AC_dMUL,
	AC_iMUL,
	AC_sMUL,
	AC_oMUL,
	AD_MUL,
	AD_dMUL,
	AD_iMUL,
	AD_sMUL,
	AD_oMUL,
	BC_MUL,
	BC_dMUL,
	BC_iMUL,
	BC_sMUL,
	BC_oMUL,
	BD_MUL,
	BD_dMUL,
	BD_iMUL,
	BD_sMUL,
	BD_oMUL,
	CD_MUL,
	CD_dMUL,
	CD_iMUL,
	CD_sMUL,
	CD_oMUL,
	A_MULC,
	A_dMULC,
	A_iMULC,
	A_sMULC,
	B_MULC,
	B_dMULC,
	B_iMULC,
	B_sMULC,
	C_MULC,
	C_dMULC,
	C_iMULC,
	C_sMULC,
	D_MULC,
	D_dMULC,
	D_iMULC,
	D_sMULC,
	AB_DIV,
	AB_dDIV,
	AB_iDIV,
	AB_oDIV,
	AC_DIV,
	AC_dDIV,
	AC_iDIV,
	AC_oDIV,
	AD_DIV,
	AD_dDIV,
	AD_iDIV,
	AD_oDIV,
	BC_DIV,
	BC_dDIV,
	BC_iDIV,
	BC_oDIV,
	BD_DIV,
	BD_dDIV,
	BD_iDIV,
	BD_oDIV,
	CD_DIV,
	CD_dDIV,
	CD_iDIV,
	CD_oDIV,
	A_DIVC,
	A_dDIVC,
	A_iDIVC,
	B_DIVC,
	B_dDIVC,
	B_iDIVC,
	C_DIVC,
	C_dDIVC,
	C_iDIVC,
	D_DIVC,
	D_dDIVC,
	D_iDIVC,
	A_JG,
	A_dJG,
	A_iJG,
	A_sJG,
	A_oJG,
	B_JG,
	B_dJG,
	B_iJG,
	B_sJG,
	B_oJG,
	C_JG,
	C_dJG,
	C_iJG,
	C_sJG,
	C_oJG,
	D_JG,
	D_dJG,
	D_iJG,
	D_sJG,
	D_oJG,
	A_JGC,
	A_dJGC,
	A_iJGC,
	A_sJGC,
	A_oJGC,
	B_JGC,
	B_dJGC,
	B_iJGC,
	B_sJGC,
	B_oJGC,
	C_JGC,
	C_dJGC,
	C_iJGC,
	C_sJGC,
	C_oJGC,
	D_JGC,
	D_dJGC,
	D_iJGC,
	D_sJGC,
	D_oJGC,
	A_JL,
	A_dJL,
	A_iJL,
	A_sJL,
	A_oJL,
	B_JL,
	B_dJL,
	B_iJL,
	B_sJL,
	B_oJL,
	C_JL,
	C_dJL,
	C_iJL,
	C_sJL,
	C_oJL,
	D_JL,
	D_dJL,
	D_iJL,
	D_sJL,
	D_oJL,
	A_JLC,
	A_dJLC,
	A_iJLC,
	A_sJLC,
	A_oJLC,
	B_JLC,
	B_dJLC,
	B_iJLC,
	B_sJLC,
	B_oJLC,
	C_JLC,
	C_dJLC,
	C_iJLC,
	C_sJLC,
	C_oJLC,
	D_JLC,
	D_dJLC,
	D_iJLC,
	D_sJLC,
	D_oJLC,
	A_JGE,
	A_dJGE,
	A_iJGE,
	A_sJGE,
	A_oJGE,
	B_JGE,
	B_dJGE,
	B_iJGE,
	B_sJGE,
	B_oJGE,
	C_JGE,
	C_dJGE,
	C_iJGE,
	C_sJGE,
	C_oJGE,
	D_JGE,
	D_dJGE,
	D_iJGE,
	D_sJGE,
	D_oJGE,
	A_JGEC,
	A_dJGEC,
	A_iJGEC,
	A_sJGEC,
	A_oJGEC,
	B_JGEC,
	B_dJGEC,
	B_iJGEC,
	B_sJGEC,
	B_oJGEC,
	C_JGEC,
	C_dJGEC,
	C_iJGEC,
	C_sJGEC,
	C_oJGEC,
	D_JGEC,
	D_dJGEC,
	D_iJGEC,
	D_sJGEC,
	D_oJGEC,
	A_JLE,
	A_dJLE,
	A_iJLE,
	A_sJLE,
	A_oJLE,
	B_JLE,
	B_dJLE,
	B_iJLE,
	B_sJLE,
	B_oJLE,
	C_JLE,
	C_dJLE,
	C_iJLE,
	C_sJLE,
	C_oJLE,
	D_JLE,
	D_dJLE,
	D_iJLE,
	D_sJLE,
	D_oJLE,
	A_JLEC,
	A_dJLEC,
	A_iJLEC,
	A_sJLEC,
	A_oJLEC,
	B_JLEC,
	B_dJLEC,
	B_iJLEC,
	B_sJLEC,
	B_oJLEC,
	C_JLEC,
	C_dJLEC,
	C_iJLEC,
	C_sJLEC,
	C_oJLEC,
	D_JLEC,
	D_dJLEC,
	D_iJLEC,
	D_sJLEC,
	D_oJLEC,
	A_JE,
	A_dJE,
	A_iJE,
	A_sJE,
	A_oJE,
	B_JE,
	B_dJE,
	B_iJE,
	B_sJE,
	B_oJE,
	C_JE,
	C_dJE,
	C_iJE,
	C_sJE,
	C_oJE,
	D_JE,
	D_dJE,
	D_iJE,
	D_sJE,
	D_oJE,
	A_JEC,
	A_dJEC,
	A_iJEC,
	A_sJEC,
	A_oJEC,
	B_JEC,
	B_dJEC,
	B_iJEC,
	B_sJEC,
	B_oJEC,
	C_JEC,
	C_dJEC,
	C_iJEC,
	C_sJEC,
	C_oJEC,
	D_JEC,
	D_dJEC,
	D_iJEC,
	D_sJEC,
	D_oJEC,
	A_JNE,
	A_dJNE,
	A_iJNE,
	A_sJNE,
	A_oJNE,
	B_JNE,
	B_dJNE,
	B_iJNE,
	B_sJNE,
	B_oJNE,
	C_JNE,
	C_dJNE,
	C_iJNE,
	C_sJNE,
	C_oJNE,
	D_JNE,
	D_dJNE,
	D_iJNE,
	D_sJNE,
	D_oJNE,
	A_JNEC,
	A_dJNEC,
	A_iJNEC,
	A_sJNEC,
	A_oJNEC,
	B_JNEC,
	B_dJNEC,
	B_iJNEC,
	B_sJNEC,
	B_oJNEC,
	C_JNEC,
	C_dJNEC,
	C_iJNEC,
	C_sJNEC,
	C_oJNEC,
	D_JNEC,
	D_dJNEC,
	D_iJNEC,
	D_sJNEC,
	D_oJNEC,
	A_RET,
	B_RET,
	C_RET,
	D_RET,
	A_WRITE,
	A_dWRITE,
	A_iWRITE,
	A_sWRITE,
	A_oWRITE,
	B_WRITE,
	B_dWRITE,
	B_iWRITE,
	B_sWRITE,
	B_oWRITE,
	C_WRITE,
	C_dWRITE,
	C_iWRITE,
	C_sWRITE,
	C_oWRITE,
	D_WRITE,
	D_dWRITE,
	D_iWRITE,
	D_sWRITE,
	D_oWRITE,
	A_LET,
	B_LET,
	C_LET,
	D_LET,
	A_CALL,
	B_CALL,
	C_CALL,
	D_CALL,
	A_SELFCALL,
	B_SELFCALL,
	C_SELFCALL,
	D_SELFCALL,
	A_SHIFT,
	A_dSHIFT,
	A_iSHIFT,
	A_sSHIFT,
	A_oSHIFT,
	B_SHIFT,
	B_dSHIFT,
	B_iSHIFT,
	B_sSHIFT,
	B_oSHIFT,
	C_SHIFT,
	C_dSHIFT,
	C_iSHIFT,
	C_sSHIFT,
	C_oSHIFT,
	D_SHIFT,
	D_dSHIFT,
	D_iSHIFT,
	D_sSHIFT,
	D_oSHIFT,
	A_PUSH,
	B_PUSH,
	C_PUSH,
	D_PUSH,
} GPerlOpCode;

typedef struct _GPerlCodeInfo {
	GPerlOpCode code;
	const char *name;
} GPerlCodeInfo;

