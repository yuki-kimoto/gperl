GPerlCodeInfo decl_codes[] = {
	{UNDEF, "UNDEF"},
	{MOV, "MOV"},
	{vMOV, "vMOV"},
	{gMOV, "gMOV"},
	{ARGMOV, "ARGMOV"},
	{ArrayARGMOV, "ArrayARGMOV"},
	{ADD, "ADD"},
	{STATIC_ADD, "STATIC_ADD"},
	{dADD, "dADD"},
	{iADD, "iADD"},
	{sADD, "sADD"},
	{oADD, "oADD"},
	{dADDC, "dADDC"},
	{iADDC, "iADDC"},
	{SUB, "SUB"},
	{STATIC_SUB, "STATIC_SUB"},
	{dSUB, "dSUB"},
	{iSUB, "iSUB"},
	{oSUB, "oSUB"},
	{dSUBC, "dSUBC"},
	{iSUBC, "iSUBC"},
	{MUL, "MUL"},
	{STATIC_MUL, "STATIC_MUL"},
	{dMUL, "dMUL"},
	{iMUL, "iMUL"},
	{sMUL, "sMUL"},
	{oMUL, "oMUL"},
	{dMULC, "dMULC"},
	{iMULC, "iMULC"},
	{DIV, "DIV"},
	{STATIC_DIV, "STATIC_DIV"},
	{dDIV, "dDIV"},
	{iDIV, "iDIV"},
	{oDIV, "oDIV"},
	{dDIVC, "dDIVC"},
	{iDIVC, "iDIVC"},
	{LSHIFT, "LSHIFT"},
	{STATIC_LSHIFT, "STATIC_LSHIFT"},
	{dLSHIFT, "dLSHIFT"},
	{iLSHIFT, "iLSHIFT"},
	{sLSHIFT, "sLSHIFT"},
	{oLSHIFT, "oLSHIFT"},
	{dLSHIFTC, "dLSHIFTC"},
	{iLSHIFTC, "iLSHIFTC"},
	{RSHIFT, "RSHIFT"},
	{STATIC_RSHIFT, "STATIC_RSHIFT"},
	{dRSHIFT, "dRSHIFT"},
	{iRSHIFT, "iRSHIFT"},
	{sRSHIFT, "sRSHIFT"},
	{oRSHIFT, "oRSHIFT"},
	{dRSHIFTC, "dRSHIFTC"},
	{iRSHIFTC, "iRSHIFTC"},
	{JG, "JG"},
	{STATIC_JG, "STATIC_JG"},
	{dJG, "dJG"},
	{iJG, "iJG"},
	{sJG, "sJG"},
	{oJG, "oJG"},
	{dJGC, "dJGC"},
	{iJGC, "iJGC"},
	{JL, "JL"},
	{STATIC_JL, "STATIC_JL"},
	{dJL, "dJL"},
	{iJL, "iJL"},
	{sJL, "sJL"},
	{oJL, "oJL"},
	{dJLC, "dJLC"},
	{iJLC, "iJLC"},
	{JGE, "JGE"},
	{STATIC_JGE, "STATIC_JGE"},
	{dJGE, "dJGE"},
	{iJGE, "iJGE"},
	{sJGE, "sJGE"},
	{oJGE, "oJGE"},
	{dJGEC, "dJGEC"},
	{iJGEC, "iJGEC"},
	{JLE, "JLE"},
	{STATIC_JLE, "STATIC_JLE"},
	{dJLE, "dJLE"},
	{iJLE, "iJLE"},
	{sJLE, "sJLE"},
	{oJLE, "oJLE"},
	{dJLEC, "dJLEC"},
	{iJLEC, "iJLEC"},
	{JE, "JE"},
	{STATIC_JE, "STATIC_JE"},
	{dJE, "dJE"},
	{iJE, "iJE"},
	{sJE, "sJE"},
	{oJE, "oJE"},
	{dJEC, "dJEC"},
	{iJEC, "iJEC"},
	{JNE, "JNE"},
	{STATIC_JNE, "STATIC_JNE"},
	{dJNE, "dJNE"},
	{iJNE, "iJNE"},
	{sJNE, "sJNE"},
	{oJNE, "oJNE"},
	{dJNEC, "dJNEC"},
	{iJNEC, "iJNEC"},
	{IS, "IS"},
	{STATIC_IS, "STATIC_IS"},
	{dIS, "dIS"},
	{iIS, "iIS"},
	{sIS, "sIS"},
	{oIS, "oIS"},
	{dISC, "dISC"},
	{iISC, "iISC"},
	{ISNOT, "ISNOT"},
	{STATIC_ISNOT, "STATIC_ISNOT"},
	{dISNOT, "dISNOT"},
	{iISNOT, "iISNOT"},
	{sISNOT, "sISNOT"},
	{oISNOT, "oISNOT"},
	{dISNOTC, "dISNOTC"},
	{iISNOTC, "iISNOTC"},
	{StringADD, "StringADD"},
	{STATIC_StringADD, "STATIC_StringADD"},
	{dStringADD, "dStringADD"},
	{iStringADD, "iStringADD"},
	{sStringADD, "sStringADD"},
	{oStringADD, "oStringADD"},
	{dStringADDC, "dStringADDC"},
	{iStringADDC, "iStringADDC"},
	{INC, "INC"},
	{STATIC_INC, "STATIC_INC"},
	{dINC, "dINC"},
	{iINC, "iINC"},
	{sINC, "sINC"},
	{oINC, "oINC"},
	{gINC, "gINC"},
	{STATIC_gINC, "STATIC_gINC"},
	{dgINC, "dgINC"},
	{igINC, "igINC"},
	{sgINC, "sgINC"},
	{ogINC, "ogINC"},
	{DEC, "DEC"},
	{STATIC_DEC, "STATIC_DEC"},
	{dDEC, "dDEC"},
	{iDEC, "iDEC"},
	{sDEC, "sDEC"},
	{oDEC, "oDEC"},
	{gDEC, "gDEC"},
	{STATIC_gDEC, "STATIC_gDEC"},
	{dgDEC, "dgDEC"},
	{igDEC, "igDEC"},
	{sgDEC, "sgDEC"},
	{ogDEC, "ogDEC"},
	{RET, "RET"},
	{JIT_COUNTDOWN_RET, "JIT_COUNTDOWN_RET"},
	{THCODE, "THCODE"},
	{NOP, "NOP"},
	{WRITE, "WRITE"},
	{STATIC_WRITE, "STATIC_WRITE"},
	{dWRITE, "dWRITE"},
	{iWRITE, "iWRITE"},
	{sWRITE, "sWRITE"},
	{oWRITE, "oWRITE"},
	{FLUSH, "FLUSH"},
	{REF, "REF"},
	{KEYS, "KEYS"},
	{VALUES, "VALUES"},
	{BLESS, "BLESS"},
	{JMP, "JMP"},
	{LET, "LET"},
	{gLET, "gLET"},
	{MLET, "MLET"},
	{gMLET, "gMLET"},
	{SETv, "SETv"},
	{FUNCSET, "FUNCSET"},
	{CLOSURE, "CLOSURE"},
	{STATIC_CALL, "STATIC_CALL"},
	{DYNAMIC_CALL, "DYNAMIC_CALL"},
	{CALL, "CALL"},
	{JIT_CALL, "JIT_CALL"},
	{JIT_COUNTDOWN_CALL, "JIT_COUNTDOWN_CALL"},
	{FASTCALL0, "FASTCALL0"},
	{JIT_COUNTDOWN_FASTCALL0, "JIT_COUNTDOWN_FASTCALL0"},
	{FASTCALL1, "FASTCALL1"},
	{JIT_COUNTDOWN_FASTCALL1, "JIT_COUNTDOWN_FASTCALL1"},
	{FASTCALL2, "FASTCALL2"},
	{JIT_COUNTDOWN_FASTCALL2, "JIT_COUNTDOWN_FASTCALL2"},
	{FASTCALL3, "FASTCALL3"},
	{JIT_COUNTDOWN_FASTCALL3, "JIT_COUNTDOWN_FASTCALL3"},
	{SELFCALL, "SELFCALL"},
	{JIT_SELFCALL, "JIT_SELFCALL"},
	{JIT_COUNTDOWN_SELFCALL, "JIT_COUNTDOWN_SELFCALL"},
	{SELF_FASTCALL0, "SELF_FASTCALL0"},
	{JIT_COUNTDOWN_SELF_FASTCALL0, "JIT_COUNTDOWN_SELF_FASTCALL0"},
	{SELF_FASTCALL1, "SELF_FASTCALL1"},
	{JIT_COUNTDOWN_SELF_FASTCALL1, "JIT_COUNTDOWN_SELF_FASTCALL1"},
	{SELF_FASTCALL2, "SELF_FASTCALL2"},
	{JIT_COUNTDOWN_SELF_FASTCALL2, "JIT_COUNTDOWN_SELF_FASTCALL2"},
	{SELF_FASTCALL3, "SELF_FASTCALL3"},
	{JIT_COUNTDOWN_SELF_FASTCALL3, "JIT_COUNTDOWN_SELF_FASTCALL3"},
	{SHIFT, "SHIFT"},
	{STATIC_SHIFT, "STATIC_SHIFT"},
	{dSHIFT, "dSHIFT"},
	{iSHIFT, "iSHIFT"},
	{sSHIFT, "sSHIFT"},
	{oSHIFT, "oSHIFT"},
	{PUSH, "PUSH"},
	{aPUSH, "aPUSH"},
	{NEW, "NEW"},
	{NEW_STRING, "NEW_STRING"},
	{ARRAY_PUSH, "ARRAY_PUSH"},
	{ARRAY_AT, "ARRAY_AT"},
	{ARRAY_ATC, "ARRAY_ATC"},
	{ARRAY_gAT, "ARRAY_gAT"},
	{ARRAY_gATC, "ARRAY_gATC"},
	{ARRAY_SET, "ARRAY_SET"},
	{ARRAY_gSET, "ARRAY_gSET"},
	{ARRAY_DREF, "ARRAY_DREF"},
	{HASH_AT, "HASH_AT"},
	{HASH_ATC, "HASH_ATC"},
	{HASH_gAT, "HASH_gAT"},
	{HASH_gATC, "HASH_gATC"},
	{HASH_SET, "HASH_SET"},
	{HASH_gSET, "HASH_gSET"},
	{HASH_DREF, "HASH_DREF"},
	{CODE_REF, "CODE_REF"},
	{EACH_INIT, "EACH_INIT"},
	{EACH_gINIT, "EACH_gINIT"},
	{EACH_LET, "EACH_LET"},
	{EACH_STEP, "EACH_STEP"},
	{A_MOV, "A_MOV"},
	{B_MOV, "B_MOV"},
	{C_MOV, "C_MOV"},
	{D_MOV, "D_MOV"},
	{A_vMOV, "A_vMOV"},
	{B_vMOV, "B_vMOV"},
	{C_vMOV, "C_vMOV"},
	{D_vMOV, "D_vMOV"},
	{A_gMOV, "A_gMOV"},
	{B_gMOV, "B_gMOV"},
	{C_gMOV, "C_gMOV"},
	{D_gMOV, "D_gMOV"},
	{A_ARGMOV, "A_ARGMOV"},
	{B_ARGMOV, "B_ARGMOV"},
	{C_ARGMOV, "C_ARGMOV"},
	{D_ARGMOV, "D_ARGMOV"},
	{A_ArrayARGMOV, "A_ArrayARGMOV"},
	{B_ArrayARGMOV, "B_ArrayARGMOV"},
	{C_ArrayARGMOV, "C_ArrayARGMOV"},
	{D_ArrayARGMOV, "D_ArrayARGMOV"},
	{AB_ADD, "AB_ADD"},
	{AB_STATIC_ADD, "AB_STATIC_ADD"},
	{AB_dADD, "AB_dADD"},
	{AB_iADD, "AB_iADD"},
	{AB_sADD, "AB_sADD"},
	{AB_oADD, "AB_oADD"},
	{AC_ADD, "AC_ADD"},
	{AC_STATIC_ADD, "AC_STATIC_ADD"},
	{AC_dADD, "AC_dADD"},
	{AC_iADD, "AC_iADD"},
	{AC_sADD, "AC_sADD"},
	{AC_oADD, "AC_oADD"},
	{AD_ADD, "AD_ADD"},
	{AD_STATIC_ADD, "AD_STATIC_ADD"},
	{AD_dADD, "AD_dADD"},
	{AD_iADD, "AD_iADD"},
	{AD_sADD, "AD_sADD"},
	{AD_oADD, "AD_oADD"},
	{BC_ADD, "BC_ADD"},
	{BC_STATIC_ADD, "BC_STATIC_ADD"},
	{BC_dADD, "BC_dADD"},
	{BC_iADD, "BC_iADD"},
	{BC_sADD, "BC_sADD"},
	{BC_oADD, "BC_oADD"},
	{BD_ADD, "BD_ADD"},
	{BD_STATIC_ADD, "BD_STATIC_ADD"},
	{BD_dADD, "BD_dADD"},
	{BD_iADD, "BD_iADD"},
	{BD_sADD, "BD_sADD"},
	{BD_oADD, "BD_oADD"},
	{CD_ADD, "CD_ADD"},
	{CD_STATIC_ADD, "CD_STATIC_ADD"},
	{CD_dADD, "CD_dADD"},
	{CD_iADD, "CD_iADD"},
	{CD_sADD, "CD_sADD"},
	{CD_oADD, "CD_oADD"},
	{A_ADDC, "A_ADDC"},
	{A_dADDC, "A_dADDC"},
	{A_iADDC, "A_iADDC"},
	{A_sADDC, "A_sADDC"},
	{B_ADDC, "B_ADDC"},
	{B_dADDC, "B_dADDC"},
	{B_iADDC, "B_iADDC"},
	{B_sADDC, "B_sADDC"},
	{C_ADDC, "C_ADDC"},
	{C_dADDC, "C_dADDC"},
	{C_iADDC, "C_iADDC"},
	{C_sADDC, "C_sADDC"},
	{D_ADDC, "D_ADDC"},
	{D_dADDC, "D_dADDC"},
	{D_iADDC, "D_iADDC"},
	{D_sADDC, "D_sADDC"},
	{AB_SUB, "AB_SUB"},
	{AB_STATIC_SUB, "AB_STATIC_SUB"},
	{AB_dSUB, "AB_dSUB"},
	{AB_iSUB, "AB_iSUB"},
	{AB_oSUB, "AB_oSUB"},
	{AC_SUB, "AC_SUB"},
	{AC_STATIC_SUB, "AC_STATIC_SUB"},
	{AC_dSUB, "AC_dSUB"},
	{AC_iSUB, "AC_iSUB"},
	{AC_oSUB, "AC_oSUB"},
	{AD_SUB, "AD_SUB"},
	{AD_STATIC_SUB, "AD_STATIC_SUB"},
	{AD_dSUB, "AD_dSUB"},
	{AD_iSUB, "AD_iSUB"},
	{AD_oSUB, "AD_oSUB"},
	{BC_SUB, "BC_SUB"},
	{BC_STATIC_SUB, "BC_STATIC_SUB"},
	{BC_dSUB, "BC_dSUB"},
	{BC_iSUB, "BC_iSUB"},
	{BC_oSUB, "BC_oSUB"},
	{BD_SUB, "BD_SUB"},
	{BD_STATIC_SUB, "BD_STATIC_SUB"},
	{BD_dSUB, "BD_dSUB"},
	{BD_iSUB, "BD_iSUB"},
	{BD_oSUB, "BD_oSUB"},
	{CD_SUB, "CD_SUB"},
	{CD_STATIC_SUB, "CD_STATIC_SUB"},
	{CD_dSUB, "CD_dSUB"},
	{CD_iSUB, "CD_iSUB"},
	{CD_oSUB, "CD_oSUB"},
	{A_SUBC, "A_SUBC"},
	{A_dSUBC, "A_dSUBC"},
	{A_iSUBC, "A_iSUBC"},
	{B_SUBC, "B_SUBC"},
	{B_dSUBC, "B_dSUBC"},
	{B_iSUBC, "B_iSUBC"},
	{C_SUBC, "C_SUBC"},
	{C_dSUBC, "C_dSUBC"},
	{C_iSUBC, "C_iSUBC"},
	{D_SUBC, "D_SUBC"},
	{D_dSUBC, "D_dSUBC"},
	{D_iSUBC, "D_iSUBC"},
	{AB_MUL, "AB_MUL"},
	{AB_STATIC_MUL, "AB_STATIC_MUL"},
	{AB_dMUL, "AB_dMUL"},
	{AB_iMUL, "AB_iMUL"},
	{AB_sMUL, "AB_sMUL"},
	{AB_oMUL, "AB_oMUL"},
	{AC_MUL, "AC_MUL"},
	{AC_STATIC_MUL, "AC_STATIC_MUL"},
	{AC_dMUL, "AC_dMUL"},
	{AC_iMUL, "AC_iMUL"},
	{AC_sMUL, "AC_sMUL"},
	{AC_oMUL, "AC_oMUL"},
	{AD_MUL, "AD_MUL"},
	{AD_STATIC_MUL, "AD_STATIC_MUL"},
	{AD_dMUL, "AD_dMUL"},
	{AD_iMUL, "AD_iMUL"},
	{AD_sMUL, "AD_sMUL"},
	{AD_oMUL, "AD_oMUL"},
	{BC_MUL, "BC_MUL"},
	{BC_STATIC_MUL, "BC_STATIC_MUL"},
	{BC_dMUL, "BC_dMUL"},
	{BC_iMUL, "BC_iMUL"},
	{BC_sMUL, "BC_sMUL"},
	{BC_oMUL, "BC_oMUL"},
	{BD_MUL, "BD_MUL"},
	{BD_STATIC_MUL, "BD_STATIC_MUL"},
	{BD_dMUL, "BD_dMUL"},
	{BD_iMUL, "BD_iMUL"},
	{BD_sMUL, "BD_sMUL"},
	{BD_oMUL, "BD_oMUL"},
	{CD_MUL, "CD_MUL"},
	{CD_STATIC_MUL, "CD_STATIC_MUL"},
	{CD_dMUL, "CD_dMUL"},
	{CD_iMUL, "CD_iMUL"},
	{CD_sMUL, "CD_sMUL"},
	{CD_oMUL, "CD_oMUL"},
	{A_MULC, "A_MULC"},
	{A_dMULC, "A_dMULC"},
	{A_iMULC, "A_iMULC"},
	{A_sMULC, "A_sMULC"},
	{B_MULC, "B_MULC"},
	{B_dMULC, "B_dMULC"},
	{B_iMULC, "B_iMULC"},
	{B_sMULC, "B_sMULC"},
	{C_MULC, "C_MULC"},
	{C_dMULC, "C_dMULC"},
	{C_iMULC, "C_iMULC"},
	{C_sMULC, "C_sMULC"},
	{D_MULC, "D_MULC"},
	{D_dMULC, "D_dMULC"},
	{D_iMULC, "D_iMULC"},
	{D_sMULC, "D_sMULC"},
	{AB_DIV, "AB_DIV"},
	{AB_STATIC_DIV, "AB_STATIC_DIV"},
	{AB_dDIV, "AB_dDIV"},
	{AB_iDIV, "AB_iDIV"},
	{AB_oDIV, "AB_oDIV"},
	{AC_DIV, "AC_DIV"},
	{AC_STATIC_DIV, "AC_STATIC_DIV"},
	{AC_dDIV, "AC_dDIV"},
	{AC_iDIV, "AC_iDIV"},
	{AC_oDIV, "AC_oDIV"},
	{AD_DIV, "AD_DIV"},
	{AD_STATIC_DIV, "AD_STATIC_DIV"},
	{AD_dDIV, "AD_dDIV"},
	{AD_iDIV, "AD_iDIV"},
	{AD_oDIV, "AD_oDIV"},
	{BC_DIV, "BC_DIV"},
	{BC_STATIC_DIV, "BC_STATIC_DIV"},
	{BC_dDIV, "BC_dDIV"},
	{BC_iDIV, "BC_iDIV"},
	{BC_oDIV, "BC_oDIV"},
	{BD_DIV, "BD_DIV"},
	{BD_STATIC_DIV, "BD_STATIC_DIV"},
	{BD_dDIV, "BD_dDIV"},
	{BD_iDIV, "BD_iDIV"},
	{BD_oDIV, "BD_oDIV"},
	{CD_DIV, "CD_DIV"},
	{CD_STATIC_DIV, "CD_STATIC_DIV"},
	{CD_dDIV, "CD_dDIV"},
	{CD_iDIV, "CD_iDIV"},
	{CD_oDIV, "CD_oDIV"},
	{A_DIVC, "A_DIVC"},
	{A_dDIVC, "A_dDIVC"},
	{A_iDIVC, "A_iDIVC"},
	{B_DIVC, "B_DIVC"},
	{B_dDIVC, "B_dDIVC"},
	{B_iDIVC, "B_iDIVC"},
	{C_DIVC, "C_DIVC"},
	{C_dDIVC, "C_dDIVC"},
	{C_iDIVC, "C_iDIVC"},
	{D_DIVC, "D_DIVC"},
	{D_dDIVC, "D_dDIVC"},
	{D_iDIVC, "D_iDIVC"},
	{AB_LSHIFT, "AB_LSHIFT"},
	{AB_STATIC_LSHIFT, "AB_STATIC_LSHIFT"},
	{AB_dLSHIFT, "AB_dLSHIFT"},
	{AB_iLSHIFT, "AB_iLSHIFT"},
	{AB_sLSHIFT, "AB_sLSHIFT"},
	{AB_oLSHIFT, "AB_oLSHIFT"},
	{AC_LSHIFT, "AC_LSHIFT"},
	{AC_STATIC_LSHIFT, "AC_STATIC_LSHIFT"},
	{AC_dLSHIFT, "AC_dLSHIFT"},
	{AC_iLSHIFT, "AC_iLSHIFT"},
	{AC_sLSHIFT, "AC_sLSHIFT"},
	{AC_oLSHIFT, "AC_oLSHIFT"},
	{AD_LSHIFT, "AD_LSHIFT"},
	{AD_STATIC_LSHIFT, "AD_STATIC_LSHIFT"},
	{AD_dLSHIFT, "AD_dLSHIFT"},
	{AD_iLSHIFT, "AD_iLSHIFT"},
	{AD_sLSHIFT, "AD_sLSHIFT"},
	{AD_oLSHIFT, "AD_oLSHIFT"},
	{BC_LSHIFT, "BC_LSHIFT"},
	{BC_STATIC_LSHIFT, "BC_STATIC_LSHIFT"},
	{BC_dLSHIFT, "BC_dLSHIFT"},
	{BC_iLSHIFT, "BC_iLSHIFT"},
	{BC_sLSHIFT, "BC_sLSHIFT"},
	{BC_oLSHIFT, "BC_oLSHIFT"},
	{BD_LSHIFT, "BD_LSHIFT"},
	{BD_STATIC_LSHIFT, "BD_STATIC_LSHIFT"},
	{BD_dLSHIFT, "BD_dLSHIFT"},
	{BD_iLSHIFT, "BD_iLSHIFT"},
	{BD_sLSHIFT, "BD_sLSHIFT"},
	{BD_oLSHIFT, "BD_oLSHIFT"},
	{CD_LSHIFT, "CD_LSHIFT"},
	{CD_STATIC_LSHIFT, "CD_STATIC_LSHIFT"},
	{CD_dLSHIFT, "CD_dLSHIFT"},
	{CD_iLSHIFT, "CD_iLSHIFT"},
	{CD_sLSHIFT, "CD_sLSHIFT"},
	{CD_oLSHIFT, "CD_oLSHIFT"},
	{A_LSHIFTC, "A_LSHIFTC"},
	{A_dLSHIFTC, "A_dLSHIFTC"},
	{A_iLSHIFTC, "A_iLSHIFTC"},
	{A_sLSHIFTC, "A_sLSHIFTC"},
	{A_oLSHIFTC, "A_oLSHIFTC"},
	{B_LSHIFTC, "B_LSHIFTC"},
	{B_dLSHIFTC, "B_dLSHIFTC"},
	{B_iLSHIFTC, "B_iLSHIFTC"},
	{B_sLSHIFTC, "B_sLSHIFTC"},
	{B_oLSHIFTC, "B_oLSHIFTC"},
	{C_LSHIFTC, "C_LSHIFTC"},
	{C_dLSHIFTC, "C_dLSHIFTC"},
	{C_iLSHIFTC, "C_iLSHIFTC"},
	{C_sLSHIFTC, "C_sLSHIFTC"},
	{C_oLSHIFTC, "C_oLSHIFTC"},
	{D_LSHIFTC, "D_LSHIFTC"},
	{D_dLSHIFTC, "D_dLSHIFTC"},
	{D_iLSHIFTC, "D_iLSHIFTC"},
	{D_sLSHIFTC, "D_sLSHIFTC"},
	{D_oLSHIFTC, "D_oLSHIFTC"},
	{AB_RSHIFT, "AB_RSHIFT"},
	{AB_STATIC_RSHIFT, "AB_STATIC_RSHIFT"},
	{AB_dRSHIFT, "AB_dRSHIFT"},
	{AB_iRSHIFT, "AB_iRSHIFT"},
	{AB_sRSHIFT, "AB_sRSHIFT"},
	{AB_oRSHIFT, "AB_oRSHIFT"},
	{AC_RSHIFT, "AC_RSHIFT"},
	{AC_STATIC_RSHIFT, "AC_STATIC_RSHIFT"},
	{AC_dRSHIFT, "AC_dRSHIFT"},
	{AC_iRSHIFT, "AC_iRSHIFT"},
	{AC_sRSHIFT, "AC_sRSHIFT"},
	{AC_oRSHIFT, "AC_oRSHIFT"},
	{AD_RSHIFT, "AD_RSHIFT"},
	{AD_STATIC_RSHIFT, "AD_STATIC_RSHIFT"},
	{AD_dRSHIFT, "AD_dRSHIFT"},
	{AD_iRSHIFT, "AD_iRSHIFT"},
	{AD_sRSHIFT, "AD_sRSHIFT"},
	{AD_oRSHIFT, "AD_oRSHIFT"},
	{BC_RSHIFT, "BC_RSHIFT"},
	{BC_STATIC_RSHIFT, "BC_STATIC_RSHIFT"},
	{BC_dRSHIFT, "BC_dRSHIFT"},
	{BC_iRSHIFT, "BC_iRSHIFT"},
	{BC_sRSHIFT, "BC_sRSHIFT"},
	{BC_oRSHIFT, "BC_oRSHIFT"},
	{BD_RSHIFT, "BD_RSHIFT"},
	{BD_STATIC_RSHIFT, "BD_STATIC_RSHIFT"},
	{BD_dRSHIFT, "BD_dRSHIFT"},
	{BD_iRSHIFT, "BD_iRSHIFT"},
	{BD_sRSHIFT, "BD_sRSHIFT"},
	{BD_oRSHIFT, "BD_oRSHIFT"},
	{CD_RSHIFT, "CD_RSHIFT"},
	{CD_STATIC_RSHIFT, "CD_STATIC_RSHIFT"},
	{CD_dRSHIFT, "CD_dRSHIFT"},
	{CD_iRSHIFT, "CD_iRSHIFT"},
	{CD_sRSHIFT, "CD_sRSHIFT"},
	{CD_oRSHIFT, "CD_oRSHIFT"},
	{A_RSHIFTC, "A_RSHIFTC"},
	{A_dRSHIFTC, "A_dRSHIFTC"},
	{A_iRSHIFTC, "A_iRSHIFTC"},
	{A_sRSHIFTC, "A_sRSHIFTC"},
	{A_oRSHIFTC, "A_oRSHIFTC"},
	{B_RSHIFTC, "B_RSHIFTC"},
	{B_dRSHIFTC, "B_dRSHIFTC"},
	{B_iRSHIFTC, "B_iRSHIFTC"},
	{B_sRSHIFTC, "B_sRSHIFTC"},
	{B_oRSHIFTC, "B_oRSHIFTC"},
	{C_RSHIFTC, "C_RSHIFTC"},
	{C_dRSHIFTC, "C_dRSHIFTC"},
	{C_iRSHIFTC, "C_iRSHIFTC"},
	{C_sRSHIFTC, "C_sRSHIFTC"},
	{C_oRSHIFTC, "C_oRSHIFTC"},
	{D_RSHIFTC, "D_RSHIFTC"},
	{D_dRSHIFTC, "D_dRSHIFTC"},
	{D_iRSHIFTC, "D_iRSHIFTC"},
	{D_sRSHIFTC, "D_sRSHIFTC"},
	{D_oRSHIFTC, "D_oRSHIFTC"},
	{A_JG, "A_JG"},
	{A_STATIC_JG, "A_STATIC_JG"},
	{A_dJG, "A_dJG"},
	{A_iJG, "A_iJG"},
	{A_sJG, "A_sJG"},
	{A_oJG, "A_oJG"},
	{B_JG, "B_JG"},
	{B_STATIC_JG, "B_STATIC_JG"},
	{B_dJG, "B_dJG"},
	{B_iJG, "B_iJG"},
	{B_sJG, "B_sJG"},
	{B_oJG, "B_oJG"},
	{C_JG, "C_JG"},
	{C_STATIC_JG, "C_STATIC_JG"},
	{C_dJG, "C_dJG"},
	{C_iJG, "C_iJG"},
	{C_sJG, "C_sJG"},
	{C_oJG, "C_oJG"},
	{D_JG, "D_JG"},
	{D_STATIC_JG, "D_STATIC_JG"},
	{D_dJG, "D_dJG"},
	{D_iJG, "D_iJG"},
	{D_sJG, "D_sJG"},
	{D_oJG, "D_oJG"},
	{A_JGC, "A_JGC"},
	{A_dJGC, "A_dJGC"},
	{A_iJGC, "A_iJGC"},
	{A_sJGC, "A_sJGC"},
	{A_oJGC, "A_oJGC"},
	{B_JGC, "B_JGC"},
	{B_dJGC, "B_dJGC"},
	{B_iJGC, "B_iJGC"},
	{B_sJGC, "B_sJGC"},
	{B_oJGC, "B_oJGC"},
	{C_JGC, "C_JGC"},
	{C_dJGC, "C_dJGC"},
	{C_iJGC, "C_iJGC"},
	{C_sJGC, "C_sJGC"},
	{C_oJGC, "C_oJGC"},
	{D_JGC, "D_JGC"},
	{D_dJGC, "D_dJGC"},
	{D_iJGC, "D_iJGC"},
	{D_sJGC, "D_sJGC"},
	{D_oJGC, "D_oJGC"},
	{A_JL, "A_JL"},
	{A_STATIC_JL, "A_STATIC_JL"},
	{A_dJL, "A_dJL"},
	{A_iJL, "A_iJL"},
	{A_sJL, "A_sJL"},
	{A_oJL, "A_oJL"},
	{B_JL, "B_JL"},
	{B_STATIC_JL, "B_STATIC_JL"},
	{B_dJL, "B_dJL"},
	{B_iJL, "B_iJL"},
	{B_sJL, "B_sJL"},
	{B_oJL, "B_oJL"},
	{C_JL, "C_JL"},
	{C_STATIC_JL, "C_STATIC_JL"},
	{C_dJL, "C_dJL"},
	{C_iJL, "C_iJL"},
	{C_sJL, "C_sJL"},
	{C_oJL, "C_oJL"},
	{D_JL, "D_JL"},
	{D_STATIC_JL, "D_STATIC_JL"},
	{D_dJL, "D_dJL"},
	{D_iJL, "D_iJL"},
	{D_sJL, "D_sJL"},
	{D_oJL, "D_oJL"},
	{A_JLC, "A_JLC"},
	{A_dJLC, "A_dJLC"},
	{A_iJLC, "A_iJLC"},
	{A_sJLC, "A_sJLC"},
	{A_oJLC, "A_oJLC"},
	{B_JLC, "B_JLC"},
	{B_dJLC, "B_dJLC"},
	{B_iJLC, "B_iJLC"},
	{B_sJLC, "B_sJLC"},
	{B_oJLC, "B_oJLC"},
	{C_JLC, "C_JLC"},
	{C_dJLC, "C_dJLC"},
	{C_iJLC, "C_iJLC"},
	{C_sJLC, "C_sJLC"},
	{C_oJLC, "C_oJLC"},
	{D_JLC, "D_JLC"},
	{D_dJLC, "D_dJLC"},
	{D_iJLC, "D_iJLC"},
	{D_sJLC, "D_sJLC"},
	{D_oJLC, "D_oJLC"},
	{A_JGE, "A_JGE"},
	{A_STATIC_JGE, "A_STATIC_JGE"},
	{A_dJGE, "A_dJGE"},
	{A_iJGE, "A_iJGE"},
	{A_sJGE, "A_sJGE"},
	{A_oJGE, "A_oJGE"},
	{B_JGE, "B_JGE"},
	{B_STATIC_JGE, "B_STATIC_JGE"},
	{B_dJGE, "B_dJGE"},
	{B_iJGE, "B_iJGE"},
	{B_sJGE, "B_sJGE"},
	{B_oJGE, "B_oJGE"},
	{C_JGE, "C_JGE"},
	{C_STATIC_JGE, "C_STATIC_JGE"},
	{C_dJGE, "C_dJGE"},
	{C_iJGE, "C_iJGE"},
	{C_sJGE, "C_sJGE"},
	{C_oJGE, "C_oJGE"},
	{D_JGE, "D_JGE"},
	{D_STATIC_JGE, "D_STATIC_JGE"},
	{D_dJGE, "D_dJGE"},
	{D_iJGE, "D_iJGE"},
	{D_sJGE, "D_sJGE"},
	{D_oJGE, "D_oJGE"},
	{A_JGEC, "A_JGEC"},
	{A_dJGEC, "A_dJGEC"},
	{A_iJGEC, "A_iJGEC"},
	{A_sJGEC, "A_sJGEC"},
	{A_oJGEC, "A_oJGEC"},
	{B_JGEC, "B_JGEC"},
	{B_dJGEC, "B_dJGEC"},
	{B_iJGEC, "B_iJGEC"},
	{B_sJGEC, "B_sJGEC"},
	{B_oJGEC, "B_oJGEC"},
	{C_JGEC, "C_JGEC"},
	{C_dJGEC, "C_dJGEC"},
	{C_iJGEC, "C_iJGEC"},
	{C_sJGEC, "C_sJGEC"},
	{C_oJGEC, "C_oJGEC"},
	{D_JGEC, "D_JGEC"},
	{D_dJGEC, "D_dJGEC"},
	{D_iJGEC, "D_iJGEC"},
	{D_sJGEC, "D_sJGEC"},
	{D_oJGEC, "D_oJGEC"},
	{A_JLE, "A_JLE"},
	{A_STATIC_JLE, "A_STATIC_JLE"},
	{A_dJLE, "A_dJLE"},
	{A_iJLE, "A_iJLE"},
	{A_sJLE, "A_sJLE"},
	{A_oJLE, "A_oJLE"},
	{B_JLE, "B_JLE"},
	{B_STATIC_JLE, "B_STATIC_JLE"},
	{B_dJLE, "B_dJLE"},
	{B_iJLE, "B_iJLE"},
	{B_sJLE, "B_sJLE"},
	{B_oJLE, "B_oJLE"},
	{C_JLE, "C_JLE"},
	{C_STATIC_JLE, "C_STATIC_JLE"},
	{C_dJLE, "C_dJLE"},
	{C_iJLE, "C_iJLE"},
	{C_sJLE, "C_sJLE"},
	{C_oJLE, "C_oJLE"},
	{D_JLE, "D_JLE"},
	{D_STATIC_JLE, "D_STATIC_JLE"},
	{D_dJLE, "D_dJLE"},
	{D_iJLE, "D_iJLE"},
	{D_sJLE, "D_sJLE"},
	{D_oJLE, "D_oJLE"},
	{A_JLEC, "A_JLEC"},
	{A_dJLEC, "A_dJLEC"},
	{A_iJLEC, "A_iJLEC"},
	{A_sJLEC, "A_sJLEC"},
	{A_oJLEC, "A_oJLEC"},
	{B_JLEC, "B_JLEC"},
	{B_dJLEC, "B_dJLEC"},
	{B_iJLEC, "B_iJLEC"},
	{B_sJLEC, "B_sJLEC"},
	{B_oJLEC, "B_oJLEC"},
	{C_JLEC, "C_JLEC"},
	{C_dJLEC, "C_dJLEC"},
	{C_iJLEC, "C_iJLEC"},
	{C_sJLEC, "C_sJLEC"},
	{C_oJLEC, "C_oJLEC"},
	{D_JLEC, "D_JLEC"},
	{D_dJLEC, "D_dJLEC"},
	{D_iJLEC, "D_iJLEC"},
	{D_sJLEC, "D_sJLEC"},
	{D_oJLEC, "D_oJLEC"},
	{A_JE, "A_JE"},
	{A_STATIC_JE, "A_STATIC_JE"},
	{A_dJE, "A_dJE"},
	{A_iJE, "A_iJE"},
	{A_sJE, "A_sJE"},
	{A_oJE, "A_oJE"},
	{B_JE, "B_JE"},
	{B_STATIC_JE, "B_STATIC_JE"},
	{B_dJE, "B_dJE"},
	{B_iJE, "B_iJE"},
	{B_sJE, "B_sJE"},
	{B_oJE, "B_oJE"},
	{C_JE, "C_JE"},
	{C_STATIC_JE, "C_STATIC_JE"},
	{C_dJE, "C_dJE"},
	{C_iJE, "C_iJE"},
	{C_sJE, "C_sJE"},
	{C_oJE, "C_oJE"},
	{D_JE, "D_JE"},
	{D_STATIC_JE, "D_STATIC_JE"},
	{D_dJE, "D_dJE"},
	{D_iJE, "D_iJE"},
	{D_sJE, "D_sJE"},
	{D_oJE, "D_oJE"},
	{A_JEC, "A_JEC"},
	{A_dJEC, "A_dJEC"},
	{A_iJEC, "A_iJEC"},
	{A_sJEC, "A_sJEC"},
	{A_oJEC, "A_oJEC"},
	{B_JEC, "B_JEC"},
	{B_dJEC, "B_dJEC"},
	{B_iJEC, "B_iJEC"},
	{B_sJEC, "B_sJEC"},
	{B_oJEC, "B_oJEC"},
	{C_JEC, "C_JEC"},
	{C_dJEC, "C_dJEC"},
	{C_iJEC, "C_iJEC"},
	{C_sJEC, "C_sJEC"},
	{C_oJEC, "C_oJEC"},
	{D_JEC, "D_JEC"},
	{D_dJEC, "D_dJEC"},
	{D_iJEC, "D_iJEC"},
	{D_sJEC, "D_sJEC"},
	{D_oJEC, "D_oJEC"},
	{A_JNE, "A_JNE"},
	{A_STATIC_JNE, "A_STATIC_JNE"},
	{A_dJNE, "A_dJNE"},
	{A_iJNE, "A_iJNE"},
	{A_sJNE, "A_sJNE"},
	{A_oJNE, "A_oJNE"},
	{B_JNE, "B_JNE"},
	{B_STATIC_JNE, "B_STATIC_JNE"},
	{B_dJNE, "B_dJNE"},
	{B_iJNE, "B_iJNE"},
	{B_sJNE, "B_sJNE"},
	{B_oJNE, "B_oJNE"},
	{C_JNE, "C_JNE"},
	{C_STATIC_JNE, "C_STATIC_JNE"},
	{C_dJNE, "C_dJNE"},
	{C_iJNE, "C_iJNE"},
	{C_sJNE, "C_sJNE"},
	{C_oJNE, "C_oJNE"},
	{D_JNE, "D_JNE"},
	{D_STATIC_JNE, "D_STATIC_JNE"},
	{D_dJNE, "D_dJNE"},
	{D_iJNE, "D_iJNE"},
	{D_sJNE, "D_sJNE"},
	{D_oJNE, "D_oJNE"},
	{A_JNEC, "A_JNEC"},
	{A_dJNEC, "A_dJNEC"},
	{A_iJNEC, "A_iJNEC"},
	{A_sJNEC, "A_sJNEC"},
	{A_oJNEC, "A_oJNEC"},
	{B_JNEC, "B_JNEC"},
	{B_dJNEC, "B_dJNEC"},
	{B_iJNEC, "B_iJNEC"},
	{B_sJNEC, "B_sJNEC"},
	{B_oJNEC, "B_oJNEC"},
	{C_JNEC, "C_JNEC"},
	{C_dJNEC, "C_dJNEC"},
	{C_iJNEC, "C_iJNEC"},
	{C_sJNEC, "C_sJNEC"},
	{C_oJNEC, "C_oJNEC"},
	{D_JNEC, "D_JNEC"},
	{D_dJNEC, "D_dJNEC"},
	{D_iJNEC, "D_iJNEC"},
	{D_sJNEC, "D_sJNEC"},
	{D_oJNEC, "D_oJNEC"},
	{A_StringADD, "A_StringADD"},
	{A_STATIC_StringADD, "A_STATIC_StringADD"},
	{A_dStringADD, "A_dStringADD"},
	{A_iStringADD, "A_iStringADD"},
	{A_sStringADD, "A_sStringADD"},
	{A_oStringADD, "A_oStringADD"},
	{B_StringADD, "B_StringADD"},
	{B_STATIC_StringADD, "B_STATIC_StringADD"},
	{B_dStringADD, "B_dStringADD"},
	{B_iStringADD, "B_iStringADD"},
	{B_sStringADD, "B_sStringADD"},
	{B_oStringADD, "B_oStringADD"},
	{C_StringADD, "C_StringADD"},
	{C_STATIC_StringADD, "C_STATIC_StringADD"},
	{C_dStringADD, "C_dStringADD"},
	{C_iStringADD, "C_iStringADD"},
	{C_sStringADD, "C_sStringADD"},
	{C_oStringADD, "C_oStringADD"},
	{D_StringADD, "D_StringADD"},
	{D_STATIC_StringADD, "D_STATIC_StringADD"},
	{D_dStringADD, "D_dStringADD"},
	{D_iStringADD, "D_iStringADD"},
	{D_sStringADD, "D_sStringADD"},
	{D_oStringADD, "D_oStringADD"},
	{A_StringADDC, "A_StringADDC"},
	{A_dStringADDC, "A_dStringADDC"},
	{A_iStringADDC, "A_iStringADDC"},
	{A_sStringADDC, "A_sStringADDC"},
	{B_StringADDC, "B_StringADDC"},
	{B_dStringADDC, "B_dStringADDC"},
	{B_iStringADDC, "B_iStringADDC"},
	{B_sStringADDC, "B_sStringADDC"},
	{C_StringADDC, "C_StringADDC"},
	{C_dStringADDC, "C_dStringADDC"},
	{C_iStringADDC, "C_iStringADDC"},
	{C_sStringADDC, "C_sStringADDC"},
	{D_StringADDC, "D_StringADDC"},
	{D_dStringADDC, "D_dStringADDC"},
	{D_iStringADDC, "D_iStringADDC"},
	{D_sStringADDC, "D_sStringADDC"},
	{A_RET, "A_RET"},
	{B_RET, "B_RET"},
	{C_RET, "C_RET"},
	{D_RET, "D_RET"},
	{A_JIT_COUNTDOWN_RET, "A_JIT_COUNTDOWN_RET"},
	{B_JIT_COUNTDOWN_RET, "B_JIT_COUNTDOWN_RET"},
	{C_JIT_COUNTDOWN_RET, "C_JIT_COUNTDOWN_RET"},
	{D_JIT_COUNTDOWN_RET, "D_JIT_COUNTDOWN_RET"},
	{A_WRITE, "A_WRITE"},
	{A_STATIC_WRITE, "A_STATIC_WRITE"},
	{A_dWRITE, "A_dWRITE"},
	{A_iWRITE, "A_iWRITE"},
	{A_sWRITE, "A_sWRITE"},
	{A_oWRITE, "A_oWRITE"},
	{B_WRITE, "B_WRITE"},
	{B_STATIC_WRITE, "B_STATIC_WRITE"},
	{B_dWRITE, "B_dWRITE"},
	{B_iWRITE, "B_iWRITE"},
	{B_sWRITE, "B_sWRITE"},
	{B_oWRITE, "B_oWRITE"},
	{C_WRITE, "C_WRITE"},
	{C_STATIC_WRITE, "C_STATIC_WRITE"},
	{C_dWRITE, "C_dWRITE"},
	{C_iWRITE, "C_iWRITE"},
	{C_sWRITE, "C_sWRITE"},
	{C_oWRITE, "C_oWRITE"},
	{D_WRITE, "D_WRITE"},
	{D_STATIC_WRITE, "D_STATIC_WRITE"},
	{D_dWRITE, "D_dWRITE"},
	{D_iWRITE, "D_iWRITE"},
	{D_sWRITE, "D_sWRITE"},
	{D_oWRITE, "D_oWRITE"},
	{A_LET, "A_LET"},
	{B_LET, "B_LET"},
	{C_LET, "C_LET"},
	{D_LET, "D_LET"},
	{A_MLET, "A_MLET"},
	{B_MLET, "B_MLET"},
	{C_MLET, "C_MLET"},
	{D_MLET, "D_MLET"},
	{A_CLOSURE, "A_CLOSURE"},
	{B_CLOSURE, "B_CLOSURE"},
	{C_CLOSURE, "C_CLOSURE"},
	{D_CLOSURE, "D_CLOSURE"},
	{A_STATIC_CALL, "A_STATIC_CALL"},
	{B_STATIC_CALL, "B_STATIC_CALL"},
	{C_STATIC_CALL, "C_STATIC_CALL"},
	{D_STATIC_CALL, "D_STATIC_CALL"},
	{A_DYNAMIC_CALL, "A_DYNAMIC_CALL"},
	{B_DYNAMIC_CALL, "B_DYNAMIC_CALL"},
	{C_DYNAMIC_CALL, "C_DYNAMIC_CALL"},
	{D_DYNAMIC_CALL, "D_DYNAMIC_CALL"},
	{A_CALL, "A_CALL"},
	{B_CALL, "B_CALL"},
	{C_CALL, "C_CALL"},
	{D_CALL, "D_CALL"},
	{A_JIT_CALL, "A_JIT_CALL"},
	{B_JIT_CALL, "B_JIT_CALL"},
	{C_JIT_CALL, "C_JIT_CALL"},
	{D_JIT_CALL, "D_JIT_CALL"},
	{A_JIT_COUNTDOWN_CALL, "A_JIT_COUNTDOWN_CALL"},
	{B_JIT_COUNTDOWN_CALL, "B_JIT_COUNTDOWN_CALL"},
	{C_JIT_COUNTDOWN_CALL, "C_JIT_COUNTDOWN_CALL"},
	{D_JIT_COUNTDOWN_CALL, "D_JIT_COUNTDOWN_CALL"},
	{A_FASTCALL0, "A_FASTCALL0"},
	{B_FASTCALL0, "B_FASTCALL0"},
	{C_FASTCALL0, "C_FASTCALL0"},
	{D_FASTCALL0, "D_FASTCALL0"},
	{A_JIT_COUNTDOWN_FASTCALL0, "A_JIT_COUNTDOWN_FASTCALL0"},
	{B_JIT_COUNTDOWN_FASTCALL0, "B_JIT_COUNTDOWN_FASTCALL0"},
	{C_JIT_COUNTDOWN_FASTCALL0, "C_JIT_COUNTDOWN_FASTCALL0"},
	{D_JIT_COUNTDOWN_FASTCALL0, "D_JIT_COUNTDOWN_FASTCALL0"},
	{A_FASTCALL1, "A_FASTCALL1"},
	{B_FASTCALL1, "B_FASTCALL1"},
	{C_FASTCALL1, "C_FASTCALL1"},
	{D_FASTCALL1, "D_FASTCALL1"},
	{A_JIT_COUNTDOWN_FASTCALL1, "A_JIT_COUNTDOWN_FASTCALL1"},
	{B_JIT_COUNTDOWN_FASTCALL1, "B_JIT_COUNTDOWN_FASTCALL1"},
	{C_JIT_COUNTDOWN_FASTCALL1, "C_JIT_COUNTDOWN_FASTCALL1"},
	{D_JIT_COUNTDOWN_FASTCALL1, "D_JIT_COUNTDOWN_FASTCALL1"},
	{A_FASTCALL2, "A_FASTCALL2"},
	{B_FASTCALL2, "B_FASTCALL2"},
	{C_FASTCALL2, "C_FASTCALL2"},
	{D_FASTCALL2, "D_FASTCALL2"},
	{A_JIT_COUNTDOWN_FASTCALL2, "A_JIT_COUNTDOWN_FASTCALL2"},
	{B_JIT_COUNTDOWN_FASTCALL2, "B_JIT_COUNTDOWN_FASTCALL2"},
	{C_JIT_COUNTDOWN_FASTCALL2, "C_JIT_COUNTDOWN_FASTCALL2"},
	{D_JIT_COUNTDOWN_FASTCALL2, "D_JIT_COUNTDOWN_FASTCALL2"},
	{A_FASTCALL3, "A_FASTCALL3"},
	{B_FASTCALL3, "B_FASTCALL3"},
	{C_FASTCALL3, "C_FASTCALL3"},
	{D_FASTCALL3, "D_FASTCALL3"},
	{A_JIT_COUNTDOWN_FASTCALL3, "A_JIT_COUNTDOWN_FASTCALL3"},
	{B_JIT_COUNTDOWN_FASTCALL3, "B_JIT_COUNTDOWN_FASTCALL3"},
	{C_JIT_COUNTDOWN_FASTCALL3, "C_JIT_COUNTDOWN_FASTCALL3"},
	{D_JIT_COUNTDOWN_FASTCALL3, "D_JIT_COUNTDOWN_FASTCALL3"},
	{A_SELFCALL, "A_SELFCALL"},
	{B_SELFCALL, "B_SELFCALL"},
	{C_SELFCALL, "C_SELFCALL"},
	{D_SELFCALL, "D_SELFCALL"},
	{A_JIT_SELFCALL, "A_JIT_SELFCALL"},
	{B_JIT_SELFCALL, "B_JIT_SELFCALL"},
	{C_JIT_SELFCALL, "C_JIT_SELFCALL"},
	{D_JIT_SELFCALL, "D_JIT_SELFCALL"},
	{A_JIT_COUNTDOWN_SELFCALL, "A_JIT_COUNTDOWN_SELFCALL"},
	{B_JIT_COUNTDOWN_SELFCALL, "B_JIT_COUNTDOWN_SELFCALL"},
	{C_JIT_COUNTDOWN_SELFCALL, "C_JIT_COUNTDOWN_SELFCALL"},
	{D_JIT_COUNTDOWN_SELFCALL, "D_JIT_COUNTDOWN_SELFCALL"},
	{A_SELF_FASTCALL0, "A_SELF_FASTCALL0"},
	{B_SELF_FASTCALL0, "B_SELF_FASTCALL0"},
	{C_SELF_FASTCALL0, "C_SELF_FASTCALL0"},
	{D_SELF_FASTCALL0, "D_SELF_FASTCALL0"},
	{A_JIT_COUNTDOWN_SELF_FASTCALL0, "A_JIT_COUNTDOWN_SELF_FASTCALL0"},
	{B_JIT_COUNTDOWN_SELF_FASTCALL0, "B_JIT_COUNTDOWN_SELF_FASTCALL0"},
	{C_JIT_COUNTDOWN_SELF_FASTCALL0, "C_JIT_COUNTDOWN_SELF_FASTCALL0"},
	{D_JIT_COUNTDOWN_SELF_FASTCALL0, "D_JIT_COUNTDOWN_SELF_FASTCALL0"},
	{A_SELF_FASTCALL1, "A_SELF_FASTCALL1"},
	{B_SELF_FASTCALL1, "B_SELF_FASTCALL1"},
	{C_SELF_FASTCALL1, "C_SELF_FASTCALL1"},
	{D_SELF_FASTCALL1, "D_SELF_FASTCALL1"},
	{A_JIT_COUNTDOWN_SELF_FASTCALL1, "A_JIT_COUNTDOWN_SELF_FASTCALL1"},
	{B_JIT_COUNTDOWN_SELF_FASTCALL1, "B_JIT_COUNTDOWN_SELF_FASTCALL1"},
	{C_JIT_COUNTDOWN_SELF_FASTCALL1, "C_JIT_COUNTDOWN_SELF_FASTCALL1"},
	{D_JIT_COUNTDOWN_SELF_FASTCALL1, "D_JIT_COUNTDOWN_SELF_FASTCALL1"},
	{A_SELF_FASTCALL2, "A_SELF_FASTCALL2"},
	{B_SELF_FASTCALL2, "B_SELF_FASTCALL2"},
	{C_SELF_FASTCALL2, "C_SELF_FASTCALL2"},
	{D_SELF_FASTCALL2, "D_SELF_FASTCALL2"},
	{A_JIT_COUNTDOWN_SELF_FASTCALL2, "A_JIT_COUNTDOWN_SELF_FASTCALL2"},
	{B_JIT_COUNTDOWN_SELF_FASTCALL2, "B_JIT_COUNTDOWN_SELF_FASTCALL2"},
	{C_JIT_COUNTDOWN_SELF_FASTCALL2, "C_JIT_COUNTDOWN_SELF_FASTCALL2"},
	{D_JIT_COUNTDOWN_SELF_FASTCALL2, "D_JIT_COUNTDOWN_SELF_FASTCALL2"},
	{A_SELF_FASTCALL3, "A_SELF_FASTCALL3"},
	{B_SELF_FASTCALL3, "B_SELF_FASTCALL3"},
	{C_SELF_FASTCALL3, "C_SELF_FASTCALL3"},
	{D_SELF_FASTCALL3, "D_SELF_FASTCALL3"},
	{A_JIT_COUNTDOWN_SELF_FASTCALL3, "A_JIT_COUNTDOWN_SELF_FASTCALL3"},
	{B_JIT_COUNTDOWN_SELF_FASTCALL3, "B_JIT_COUNTDOWN_SELF_FASTCALL3"},
	{C_JIT_COUNTDOWN_SELF_FASTCALL3, "C_JIT_COUNTDOWN_SELF_FASTCALL3"},
	{D_JIT_COUNTDOWN_SELF_FASTCALL3, "D_JIT_COUNTDOWN_SELF_FASTCALL3"},
	{A_SHIFT, "A_SHIFT"},
	{A_STATIC_SHIFT, "A_STATIC_SHIFT"},
	{A_dSHIFT, "A_dSHIFT"},
	{A_iSHIFT, "A_iSHIFT"},
	{A_sSHIFT, "A_sSHIFT"},
	{A_oSHIFT, "A_oSHIFT"},
	{B_SHIFT, "B_SHIFT"},
	{B_STATIC_SHIFT, "B_STATIC_SHIFT"},
	{B_dSHIFT, "B_dSHIFT"},
	{B_iSHIFT, "B_iSHIFT"},
	{B_sSHIFT, "B_sSHIFT"},
	{B_oSHIFT, "B_oSHIFT"},
	{C_SHIFT, "C_SHIFT"},
	{C_STATIC_SHIFT, "C_STATIC_SHIFT"},
	{C_dSHIFT, "C_dSHIFT"},
	{C_iSHIFT, "C_iSHIFT"},
	{C_sSHIFT, "C_sSHIFT"},
	{C_oSHIFT, "C_oSHIFT"},
	{D_SHIFT, "D_SHIFT"},
	{D_STATIC_SHIFT, "D_STATIC_SHIFT"},
	{D_dSHIFT, "D_dSHIFT"},
	{D_iSHIFT, "D_iSHIFT"},
	{D_sSHIFT, "D_sSHIFT"},
	{D_oSHIFT, "D_oSHIFT"},
	{A_PUSH, "A_PUSH"},
	{B_PUSH, "B_PUSH"},
	{C_PUSH, "C_PUSH"},
	{D_PUSH, "D_PUSH"},
	{A_aPUSH, "A_aPUSH"},
	{B_aPUSH, "B_aPUSH"},
	{C_aPUSH, "C_aPUSH"},
	{D_aPUSH, "D_aPUSH"},
};
