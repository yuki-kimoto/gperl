GPerlCodeInfo decl_codes[] = {
	{UNDEF, "UNDEF"},
	{MOV, "MOV"},
	{iMOV, "iMOV"},
	{dMOV, "dMOV"},
	{sMOV, "sMOV"},
	{oMOV, "oMOV"},
	{ADD, "ADD"},
	{iADD, "iADD"},
	{dADD, "dADD"},
	{sADD, "sADD"},
	{oADD, "oADD"},
	{iADDC, "iADDC"},
	{dADDC, "dADDC"},
	{SUB, "SUB"},
	{iSUB, "iSUB"},
	{dSUB, "dSUB"},
	{oSUB, "oSUB"},
	{iSUBC, "iSUBC"},
	{dSUBC, "dSUBC"},
	{MUL, "MUL"},
	{iMUL, "iMUL"},
	{dMUL, "dMUL"},
	{sMUL, "sMUL"},
	{oMUL, "oMUL"},
	{iMULC, "iMULC"},
	{dMULC, "dMULC"},
	{DIV, "DIV"},
	{iDIV, "iDIV"},
	{dDIV, "dDIV"},
	{oDIV, "oDIV"},
	{iDIVC, "iDIVC"},
	{dDIVC, "dDIVC"},
	{JG, "JG"},
	{iJG, "iJG"},
	{dJG, "dJG"},
	{sJG, "sJG"},
	{oJG, "oJG"},
	{iJGC, "iJGC"},
	{dJGC, "dJGC"},
	{JL, "JL"},
	{iJL, "iJL"},
	{dJL, "dJL"},
	{sJL, "sJL"},
	{oJL, "oJL"},
	{iJLC, "iJLC"},
	{dJLC, "dJLC"},
	{JGE, "JGE"},
	{iJGE, "iJGE"},
	{dJGE, "dJGE"},
	{sJGE, "sJGE"},
	{oJGE, "oJGE"},
	{iJGEC, "iJGEC"},
	{dJGEC, "dJGEC"},
	{JLE, "JLE"},
	{iJLE, "iJLE"},
	{dJLE, "dJLE"},
	{sJLE, "sJLE"},
	{oJLE, "oJLE"},
	{iJLEC, "iJLEC"},
	{dJLEC, "dJLEC"},
	{JE, "JE"},
	{iJE, "iJE"},
	{dJE, "dJE"},
	{sJE, "sJE"},
	{oJE, "oJE"},
	{iJEC, "iJEC"},
	{dJEC, "dJEC"},
	{JNE, "JNE"},
	{iJNE, "iJNE"},
	{dJNE, "dJNE"},
	{sJNE, "sJNE"},
	{oJNE, "oJNE"},
	{iJNEC, "iJNEC"},
	{dJNEC, "dJNEC"},
	{RET, "RET"},
	{iRET, "iRET"},
	{dRET, "dRET"},
	{sRET, "sRET"},
	{oRET, "oRET"},
	{THCODE, "THCODE"},
	{NOP, "NOP"},
	{WRITE, "WRITE"},
	{iWRITE, "iWRITE"},
	{dWRITE, "dWRITE"},
	{sWRITE, "sWRITE"},
	{oWRITE, "oWRITE"},
	{FLUSH, "FLUSH"},
	{JMP, "JMP"},
	{LET, "LET"},
	{SETv, "SETv"},
	{FUNCSET, "FUNCSET"},
	{CALL, "CALL"},
	{iCALL, "iCALL"},
	{dCALL, "dCALL"},
	{sCALL, "sCALL"},
	{oCALL, "oCALL"},
	{SELFCALL, "SELFCALL"},
	{iSELFCALL, "iSELFCALL"},
	{dSELFCALL, "dSELFCALL"},
	{sSELFCALL, "sSELFCALL"},
	{oSELFCALL, "oSELFCALL"},
	{SHIFT, "SHIFT"},
	{iSHIFT, "iSHIFT"},
	{dSHIFT, "dSHIFT"},
	{sSHIFT, "sSHIFT"},
	{oSHIFT, "oSHIFT"},
	{PUSH, "PUSH"},
	{iPUSH, "iPUSH"},
	{dPUSH, "dPUSH"},
	{sPUSH, "sPUSH"},
	{oPUSH, "oPUSH"},
	{NEW, "NEW"},
	{A_MOV, "A_MOV"},
	{B_MOV, "B_MOV"},
	{C_MOV, "C_MOV"},
	{D_MOV, "D_MOV"},
	{A_iMOV, "A_iMOV"},
	{A_dMOV, "A_dMOV"},
	{A_sMOV, "A_sMOV"},
	{A_oMOV, "A_oMOV"},
	{B_iMOV, "B_iMOV"},
	{B_dMOV, "B_dMOV"},
	{B_sMOV, "B_sMOV"},
	{B_oMOV, "B_oMOV"},
	{C_iMOV, "C_iMOV"},
	{C_dMOV, "C_dMOV"},
	{C_sMOV, "C_sMOV"},
	{C_oMOV, "C_oMOV"},
	{D_iMOV, "D_iMOV"},
	{D_dMOV, "D_dMOV"},
	{D_sMOV, "D_sMOV"},
	{D_oMOV, "D_oMOV"},
	{AB_ADD, "AB_ADD"},
	{AC_ADD, "AC_ADD"},
	{AD_ADD, "AD_ADD"},
	{BC_ADD, "BC_ADD"},
	{BD_ADD, "BD_ADD"},
	{CD_ADD, "CD_ADD"},
	{AB_iADD, "AB_iADD"},
	{AB_dADD, "AB_dADD"},
	{AB_sADD, "AB_sADD"},
	{AB_oADD, "AB_oADD"},
	{AC_iADD, "AC_iADD"},
	{AC_dADD, "AC_dADD"},
	{AC_sADD, "AC_sADD"},
	{AC_oADD, "AC_oADD"},
	{AD_iADD, "AD_iADD"},
	{AD_dADD, "AD_dADD"},
	{AD_sADD, "AD_sADD"},
	{AD_oADD, "AD_oADD"},
	{BC_iADD, "BC_iADD"},
	{BC_dADD, "BC_dADD"},
	{BC_sADD, "BC_sADD"},
	{BC_oADD, "BC_oADD"},
	{BD_iADD, "BD_iADD"},
	{BD_dADD, "BD_dADD"},
	{BD_sADD, "BD_sADD"},
	{BD_oADD, "BD_oADD"},
	{CD_iADD, "CD_iADD"},
	{CD_dADD, "CD_dADD"},
	{CD_sADD, "CD_sADD"},
	{CD_oADD, "CD_oADD"},
	{A_iADDC, "A_iADDC"},
	{A_dADDC, "A_dADDC"},
	{A_sADDC, "A_sADDC"},
	{B_iADDC, "B_iADDC"},
	{B_dADDC, "B_dADDC"},
	{B_sADDC, "B_sADDC"},
	{C_iADDC, "C_iADDC"},
	{C_dADDC, "C_dADDC"},
	{C_sADDC, "C_sADDC"},
	{D_iADDC, "D_iADDC"},
	{D_dADDC, "D_dADDC"},
	{D_sADDC, "D_sADDC"},
	{AB_SUB, "AB_SUB"},
	{AC_SUB, "AC_SUB"},
	{AD_SUB, "AD_SUB"},
	{BC_SUB, "BC_SUB"},
	{BD_SUB, "BD_SUB"},
	{CD_SUB, "CD_SUB"},
	{AB_iSUB, "AB_iSUB"},
	{AB_dSUB, "AB_dSUB"},
	{AB_oSUB, "AB_oSUB"},
	{AC_iSUB, "AC_iSUB"},
	{AC_dSUB, "AC_dSUB"},
	{AC_oSUB, "AC_oSUB"},
	{AD_iSUB, "AD_iSUB"},
	{AD_dSUB, "AD_dSUB"},
	{AD_oSUB, "AD_oSUB"},
	{BC_iSUB, "BC_iSUB"},
	{BC_dSUB, "BC_dSUB"},
	{BC_oSUB, "BC_oSUB"},
	{BD_iSUB, "BD_iSUB"},
	{BD_dSUB, "BD_dSUB"},
	{BD_oSUB, "BD_oSUB"},
	{CD_iSUB, "CD_iSUB"},
	{CD_dSUB, "CD_dSUB"},
	{CD_oSUB, "CD_oSUB"},
	{A_iSUBC, "A_iSUBC"},
	{A_dSUBC, "A_dSUBC"},
	{B_iSUBC, "B_iSUBC"},
	{B_dSUBC, "B_dSUBC"},
	{C_iSUBC, "C_iSUBC"},
	{C_dSUBC, "C_dSUBC"},
	{D_iSUBC, "D_iSUBC"},
	{D_dSUBC, "D_dSUBC"},
	{AB_MUL, "AB_MUL"},
	{AC_MUL, "AC_MUL"},
	{AD_MUL, "AD_MUL"},
	{BC_MUL, "BC_MUL"},
	{BD_MUL, "BD_MUL"},
	{CD_MUL, "CD_MUL"},
	{AB_iMUL, "AB_iMUL"},
	{AB_dMUL, "AB_dMUL"},
	{AB_sMUL, "AB_sMUL"},
	{AB_oMUL, "AB_oMUL"},
	{AC_iMUL, "AC_iMUL"},
	{AC_dMUL, "AC_dMUL"},
	{AC_sMUL, "AC_sMUL"},
	{AC_oMUL, "AC_oMUL"},
	{AD_iMUL, "AD_iMUL"},
	{AD_dMUL, "AD_dMUL"},
	{AD_sMUL, "AD_sMUL"},
	{AD_oMUL, "AD_oMUL"},
	{BC_iMUL, "BC_iMUL"},
	{BC_dMUL, "BC_dMUL"},
	{BC_sMUL, "BC_sMUL"},
	{BC_oMUL, "BC_oMUL"},
	{BD_iMUL, "BD_iMUL"},
	{BD_dMUL, "BD_dMUL"},
	{BD_sMUL, "BD_sMUL"},
	{BD_oMUL, "BD_oMUL"},
	{CD_iMUL, "CD_iMUL"},
	{CD_dMUL, "CD_dMUL"},
	{CD_sMUL, "CD_sMUL"},
	{CD_oMUL, "CD_oMUL"},
	{A_iMULC, "A_iMULC"},
	{A_dMULC, "A_dMULC"},
	{A_sMULC, "A_sMULC"},
	{B_iMULC, "B_iMULC"},
	{B_dMULC, "B_dMULC"},
	{B_sMULC, "B_sMULC"},
	{C_iMULC, "C_iMULC"},
	{C_dMULC, "C_dMULC"},
	{C_sMULC, "C_sMULC"},
	{D_iMULC, "D_iMULC"},
	{D_dMULC, "D_dMULC"},
	{D_sMULC, "D_sMULC"},
	{AB_DIV, "AB_DIV"},
	{AC_DIV, "AC_DIV"},
	{AD_DIV, "AD_DIV"},
	{BC_DIV, "BC_DIV"},
	{BD_DIV, "BD_DIV"},
	{CD_DIV, "CD_DIV"},
	{AB_iDIV, "AB_iDIV"},
	{AB_dDIV, "AB_dDIV"},
	{AB_oDIV, "AB_oDIV"},
	{AC_iDIV, "AC_iDIV"},
	{AC_dDIV, "AC_dDIV"},
	{AC_oDIV, "AC_oDIV"},
	{AD_iDIV, "AD_iDIV"},
	{AD_dDIV, "AD_dDIV"},
	{AD_oDIV, "AD_oDIV"},
	{BC_iDIV, "BC_iDIV"},
	{BC_dDIV, "BC_dDIV"},
	{BC_oDIV, "BC_oDIV"},
	{BD_iDIV, "BD_iDIV"},
	{BD_dDIV, "BD_dDIV"},
	{BD_oDIV, "BD_oDIV"},
	{CD_iDIV, "CD_iDIV"},
	{CD_dDIV, "CD_dDIV"},
	{CD_oDIV, "CD_oDIV"},
	{A_iDIVC, "A_iDIVC"},
	{A_dDIVC, "A_dDIVC"},
	{B_iDIVC, "B_iDIVC"},
	{B_dDIVC, "B_dDIVC"},
	{C_iDIVC, "C_iDIVC"},
	{C_dDIVC, "C_dDIVC"},
	{D_iDIVC, "D_iDIVC"},
	{D_dDIVC, "D_dDIVC"},
	{A_JG, "A_JG"},
	{B_JG, "B_JG"},
	{C_JG, "C_JG"},
	{D_JG, "D_JG"},
	{A_iJG, "A_iJG"},
	{A_dJG, "A_dJG"},
	{A_sJG, "A_sJG"},
	{A_oJG, "A_oJG"},
	{B_iJG, "B_iJG"},
	{B_dJG, "B_dJG"},
	{B_sJG, "B_sJG"},
	{B_oJG, "B_oJG"},
	{C_iJG, "C_iJG"},
	{C_dJG, "C_dJG"},
	{C_sJG, "C_sJG"},
	{C_oJG, "C_oJG"},
	{D_iJG, "D_iJG"},
	{D_dJG, "D_dJG"},
	{D_sJG, "D_sJG"},
	{D_oJG, "D_oJG"},
	{A_iJGC, "A_iJGC"},
	{A_dJGC, "A_dJGC"},
	{A_sJGC, "A_sJGC"},
	{A_oJGC, "A_oJGC"},
	{B_iJGC, "B_iJGC"},
	{B_dJGC, "B_dJGC"},
	{B_sJGC, "B_sJGC"},
	{B_oJGC, "B_oJGC"},
	{C_iJGC, "C_iJGC"},
	{C_dJGC, "C_dJGC"},
	{C_sJGC, "C_sJGC"},
	{C_oJGC, "C_oJGC"},
	{D_iJGC, "D_iJGC"},
	{D_dJGC, "D_dJGC"},
	{D_sJGC, "D_sJGC"},
	{D_oJGC, "D_oJGC"},
	{A_JL, "A_JL"},
	{B_JL, "B_JL"},
	{C_JL, "C_JL"},
	{D_JL, "D_JL"},
	{A_iJL, "A_iJL"},
	{A_dJL, "A_dJL"},
	{A_sJL, "A_sJL"},
	{A_oJL, "A_oJL"},
	{B_iJL, "B_iJL"},
	{B_dJL, "B_dJL"},
	{B_sJL, "B_sJL"},
	{B_oJL, "B_oJL"},
	{C_iJL, "C_iJL"},
	{C_dJL, "C_dJL"},
	{C_sJL, "C_sJL"},
	{C_oJL, "C_oJL"},
	{D_iJL, "D_iJL"},
	{D_dJL, "D_dJL"},
	{D_sJL, "D_sJL"},
	{D_oJL, "D_oJL"},
	{A_iJLC, "A_iJLC"},
	{A_dJLC, "A_dJLC"},
	{A_sJLC, "A_sJLC"},
	{A_oJLC, "A_oJLC"},
	{B_iJLC, "B_iJLC"},
	{B_dJLC, "B_dJLC"},
	{B_sJLC, "B_sJLC"},
	{B_oJLC, "B_oJLC"},
	{C_iJLC, "C_iJLC"},
	{C_dJLC, "C_dJLC"},
	{C_sJLC, "C_sJLC"},
	{C_oJLC, "C_oJLC"},
	{D_iJLC, "D_iJLC"},
	{D_dJLC, "D_dJLC"},
	{D_sJLC, "D_sJLC"},
	{D_oJLC, "D_oJLC"},
	{A_JGE, "A_JGE"},
	{B_JGE, "B_JGE"},
	{C_JGE, "C_JGE"},
	{D_JGE, "D_JGE"},
	{A_iJGE, "A_iJGE"},
	{A_dJGE, "A_dJGE"},
	{A_sJGE, "A_sJGE"},
	{A_oJGE, "A_oJGE"},
	{B_iJGE, "B_iJGE"},
	{B_dJGE, "B_dJGE"},
	{B_sJGE, "B_sJGE"},
	{B_oJGE, "B_oJGE"},
	{C_iJGE, "C_iJGE"},
	{C_dJGE, "C_dJGE"},
	{C_sJGE, "C_sJGE"},
	{C_oJGE, "C_oJGE"},
	{D_iJGE, "D_iJGE"},
	{D_dJGE, "D_dJGE"},
	{D_sJGE, "D_sJGE"},
	{D_oJGE, "D_oJGE"},
	{A_iJGEC, "A_iJGEC"},
	{A_dJGEC, "A_dJGEC"},
	{A_sJGEC, "A_sJGEC"},
	{A_oJGEC, "A_oJGEC"},
	{B_iJGEC, "B_iJGEC"},
	{B_dJGEC, "B_dJGEC"},
	{B_sJGEC, "B_sJGEC"},
	{B_oJGEC, "B_oJGEC"},
	{C_iJGEC, "C_iJGEC"},
	{C_dJGEC, "C_dJGEC"},
	{C_sJGEC, "C_sJGEC"},
	{C_oJGEC, "C_oJGEC"},
	{D_iJGEC, "D_iJGEC"},
	{D_dJGEC, "D_dJGEC"},
	{D_sJGEC, "D_sJGEC"},
	{D_oJGEC, "D_oJGEC"},
	{A_JLE, "A_JLE"},
	{B_JLE, "B_JLE"},
	{C_JLE, "C_JLE"},
	{D_JLE, "D_JLE"},
	{A_iJLE, "A_iJLE"},
	{A_dJLE, "A_dJLE"},
	{A_sJLE, "A_sJLE"},
	{A_oJLE, "A_oJLE"},
	{B_iJLE, "B_iJLE"},
	{B_dJLE, "B_dJLE"},
	{B_sJLE, "B_sJLE"},
	{B_oJLE, "B_oJLE"},
	{C_iJLE, "C_iJLE"},
	{C_dJLE, "C_dJLE"},
	{C_sJLE, "C_sJLE"},
	{C_oJLE, "C_oJLE"},
	{D_iJLE, "D_iJLE"},
	{D_dJLE, "D_dJLE"},
	{D_sJLE, "D_sJLE"},
	{D_oJLE, "D_oJLE"},
	{A_iJLEC, "A_iJLEC"},
	{A_dJLEC, "A_dJLEC"},
	{A_sJLEC, "A_sJLEC"},
	{A_oJLEC, "A_oJLEC"},
	{B_iJLEC, "B_iJLEC"},
	{B_dJLEC, "B_dJLEC"},
	{B_sJLEC, "B_sJLEC"},
	{B_oJLEC, "B_oJLEC"},
	{C_iJLEC, "C_iJLEC"},
	{C_dJLEC, "C_dJLEC"},
	{C_sJLEC, "C_sJLEC"},
	{C_oJLEC, "C_oJLEC"},
	{D_iJLEC, "D_iJLEC"},
	{D_dJLEC, "D_dJLEC"},
	{D_sJLEC, "D_sJLEC"},
	{D_oJLEC, "D_oJLEC"},
	{A_JE, "A_JE"},
	{B_JE, "B_JE"},
	{C_JE, "C_JE"},
	{D_JE, "D_JE"},
	{A_iJE, "A_iJE"},
	{A_dJE, "A_dJE"},
	{A_sJE, "A_sJE"},
	{A_oJE, "A_oJE"},
	{B_iJE, "B_iJE"},
	{B_dJE, "B_dJE"},
	{B_sJE, "B_sJE"},
	{B_oJE, "B_oJE"},
	{C_iJE, "C_iJE"},
	{C_dJE, "C_dJE"},
	{C_sJE, "C_sJE"},
	{C_oJE, "C_oJE"},
	{D_iJE, "D_iJE"},
	{D_dJE, "D_dJE"},
	{D_sJE, "D_sJE"},
	{D_oJE, "D_oJE"},
	{A_iJEC, "A_iJEC"},
	{A_dJEC, "A_dJEC"},
	{A_sJEC, "A_sJEC"},
	{A_oJEC, "A_oJEC"},
	{B_iJEC, "B_iJEC"},
	{B_dJEC, "B_dJEC"},
	{B_sJEC, "B_sJEC"},
	{B_oJEC, "B_oJEC"},
	{C_iJEC, "C_iJEC"},
	{C_dJEC, "C_dJEC"},
	{C_sJEC, "C_sJEC"},
	{C_oJEC, "C_oJEC"},
	{D_iJEC, "D_iJEC"},
	{D_dJEC, "D_dJEC"},
	{D_sJEC, "D_sJEC"},
	{D_oJEC, "D_oJEC"},
	{A_JNE, "A_JNE"},
	{B_JNE, "B_JNE"},
	{C_JNE, "C_JNE"},
	{D_JNE, "D_JNE"},
	{A_iJNE, "A_iJNE"},
	{A_dJNE, "A_dJNE"},
	{A_sJNE, "A_sJNE"},
	{A_oJNE, "A_oJNE"},
	{B_iJNE, "B_iJNE"},
	{B_dJNE, "B_dJNE"},
	{B_sJNE, "B_sJNE"},
	{B_oJNE, "B_oJNE"},
	{C_iJNE, "C_iJNE"},
	{C_dJNE, "C_dJNE"},
	{C_sJNE, "C_sJNE"},
	{C_oJNE, "C_oJNE"},
	{D_iJNE, "D_iJNE"},
	{D_dJNE, "D_dJNE"},
	{D_sJNE, "D_sJNE"},
	{D_oJNE, "D_oJNE"},
	{A_iJNEC, "A_iJNEC"},
	{A_dJNEC, "A_dJNEC"},
	{A_sJNEC, "A_sJNEC"},
	{A_oJNEC, "A_oJNEC"},
	{B_iJNEC, "B_iJNEC"},
	{B_dJNEC, "B_dJNEC"},
	{B_sJNEC, "B_sJNEC"},
	{B_oJNEC, "B_oJNEC"},
	{C_iJNEC, "C_iJNEC"},
	{C_dJNEC, "C_dJNEC"},
	{C_sJNEC, "C_sJNEC"},
	{C_oJNEC, "C_oJNEC"},
	{D_iJNEC, "D_iJNEC"},
	{D_dJNEC, "D_dJNEC"},
	{D_sJNEC, "D_sJNEC"},
	{D_oJNEC, "D_oJNEC"},
	{A_RET, "A_RET"},
	{B_RET, "B_RET"},
	{C_RET, "C_RET"},
	{D_RET, "D_RET"},
	{A_iRET, "A_iRET"},
	{A_dRET, "A_dRET"},
	{A_sRET, "A_sRET"},
	{A_oRET, "A_oRET"},
	{B_iRET, "B_iRET"},
	{B_dRET, "B_dRET"},
	{B_sRET, "B_sRET"},
	{B_oRET, "B_oRET"},
	{C_iRET, "C_iRET"},
	{C_dRET, "C_dRET"},
	{C_sRET, "C_sRET"},
	{C_oRET, "C_oRET"},
	{D_iRET, "D_iRET"},
	{D_dRET, "D_dRET"},
	{D_sRET, "D_sRET"},
	{D_oRET, "D_oRET"},
	{A_WRITE, "A_WRITE"},
	{B_WRITE, "B_WRITE"},
	{C_WRITE, "C_WRITE"},
	{D_WRITE, "D_WRITE"},
	{A_iWRITE, "A_iWRITE"},
	{A_dWRITE, "A_dWRITE"},
	{A_sWRITE, "A_sWRITE"},
	{A_oWRITE, "A_oWRITE"},
	{B_iWRITE, "B_iWRITE"},
	{B_dWRITE, "B_dWRITE"},
	{B_sWRITE, "B_sWRITE"},
	{B_oWRITE, "B_oWRITE"},
	{C_iWRITE, "C_iWRITE"},
	{C_dWRITE, "C_dWRITE"},
	{C_sWRITE, "C_sWRITE"},
	{C_oWRITE, "C_oWRITE"},
	{D_iWRITE, "D_iWRITE"},
	{D_dWRITE, "D_dWRITE"},
	{D_sWRITE, "D_sWRITE"},
	{D_oWRITE, "D_oWRITE"},
	{A_CALL, "A_CALL"},
	{B_CALL, "B_CALL"},
	{C_CALL, "C_CALL"},
	{D_CALL, "D_CALL"},
	{A_iCALL, "A_iCALL"},
	{A_dCALL, "A_dCALL"},
	{A_sCALL, "A_sCALL"},
	{A_oCALL, "A_oCALL"},
	{B_iCALL, "B_iCALL"},
	{B_dCALL, "B_dCALL"},
	{B_sCALL, "B_sCALL"},
	{B_oCALL, "B_oCALL"},
	{C_iCALL, "C_iCALL"},
	{C_dCALL, "C_dCALL"},
	{C_sCALL, "C_sCALL"},
	{C_oCALL, "C_oCALL"},
	{D_iCALL, "D_iCALL"},
	{D_dCALL, "D_dCALL"},
	{D_sCALL, "D_sCALL"},
	{D_oCALL, "D_oCALL"},
	{A_SELFCALL, "A_SELFCALL"},
	{B_SELFCALL, "B_SELFCALL"},
	{C_SELFCALL, "C_SELFCALL"},
	{D_SELFCALL, "D_SELFCALL"},
	{A_iSELFCALL, "A_iSELFCALL"},
	{A_dSELFCALL, "A_dSELFCALL"},
	{A_sSELFCALL, "A_sSELFCALL"},
	{A_oSELFCALL, "A_oSELFCALL"},
	{B_iSELFCALL, "B_iSELFCALL"},
	{B_dSELFCALL, "B_dSELFCALL"},
	{B_sSELFCALL, "B_sSELFCALL"},
	{B_oSELFCALL, "B_oSELFCALL"},
	{C_iSELFCALL, "C_iSELFCALL"},
	{C_dSELFCALL, "C_dSELFCALL"},
	{C_sSELFCALL, "C_sSELFCALL"},
	{C_oSELFCALL, "C_oSELFCALL"},
	{D_iSELFCALL, "D_iSELFCALL"},
	{D_dSELFCALL, "D_dSELFCALL"},
	{D_sSELFCALL, "D_sSELFCALL"},
	{D_oSELFCALL, "D_oSELFCALL"},
	{A_SHIFT, "A_SHIFT"},
	{B_SHIFT, "B_SHIFT"},
	{C_SHIFT, "C_SHIFT"},
	{D_SHIFT, "D_SHIFT"},
	{A_iSHIFT, "A_iSHIFT"},
	{A_dSHIFT, "A_dSHIFT"},
	{A_sSHIFT, "A_sSHIFT"},
	{A_oSHIFT, "A_oSHIFT"},
	{B_iSHIFT, "B_iSHIFT"},
	{B_dSHIFT, "B_dSHIFT"},
	{B_sSHIFT, "B_sSHIFT"},
	{B_oSHIFT, "B_oSHIFT"},
	{C_iSHIFT, "C_iSHIFT"},
	{C_dSHIFT, "C_dSHIFT"},
	{C_sSHIFT, "C_sSHIFT"},
	{C_oSHIFT, "C_oSHIFT"},
	{D_iSHIFT, "D_iSHIFT"},
	{D_dSHIFT, "D_dSHIFT"},
	{D_sSHIFT, "D_sSHIFT"},
	{D_oSHIFT, "D_oSHIFT"},
	{A_PUSH, "A_PUSH"},
	{B_PUSH, "B_PUSH"},
	{C_PUSH, "C_PUSH"},
	{D_PUSH, "D_PUSH"},
	{A_iPUSH, "A_iPUSH"},
	{A_dPUSH, "A_dPUSH"},
	{A_sPUSH, "A_sPUSH"},
	{A_oPUSH, "A_oPUSH"},
	{B_iPUSH, "B_iPUSH"},
	{B_dPUSH, "B_dPUSH"},
	{B_sPUSH, "B_sPUSH"},
	{B_oPUSH, "B_oPUSH"},
	{C_iPUSH, "C_iPUSH"},
	{C_dPUSH, "C_dPUSH"},
	{C_sPUSH, "C_sPUSH"},
	{C_oPUSH, "C_oPUSH"},
	{D_iPUSH, "D_iPUSH"},
	{D_dPUSH, "D_dPUSH"},
	{D_sPUSH, "D_sPUSH"},
	{D_oPUSH, "D_oPUSH"},
};
