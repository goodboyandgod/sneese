%define OPCODE_PROLOG(op) OPCODE_LABEL OpX %+ X_8bit %+ _ %+ op


OPCODE_PROLOG(0x88) ; DEY i
 RMW _DEC_X,Index_Y
OPCODE_EPILOG

OPCODE_PROLOG(0x8C) ; STY a
 _STY Absolute
OPCODE_EPILOG

OPCODE_PROLOG(0x8E) ; STX a
 _STX Absolute
OPCODE_EPILOG

OPCODE_PROLOG(0x9B) ; TXY i
 _TxY B_X
OPCODE_EPILOG

OPCODE_PROLOG(0xA0) ; LDY #
 _LDY Immediate
OPCODE_EPILOG

OPCODE_PROLOG(0xA2) ; LDX #
 _LDX Immediate
OPCODE_EPILOG

OPCODE_PROLOG(0xA8) ; TAY i
 _TxY B_A
OPCODE_EPILOG

OPCODE_PROLOG(0xAA) ; TAX i
 _TxX B_A
OPCODE_EPILOG

OPCODE_PROLOG(0xAC) ; LDY a
 _LDY Absolute
OPCODE_EPILOG

OPCODE_PROLOG(0xAE) ; LDX a
 _LDX Absolute
OPCODE_EPILOG

OPCODE_PROLOG(0xBA) ; TSX i
 _TxX B_S
OPCODE_EPILOG

OPCODE_PROLOG(0xBB) ; TYX i
 _TxX B_Y
OPCODE_EPILOG

OPCODE_PROLOG(0xBC) ; LDY a,x
 _LDY Absolute_Index_X
OPCODE_EPILOG

OPCODE_PROLOG(0xBE) ; LDX a,y
 _LDX Absolute_Index_Y
OPCODE_EPILOG

OPCODE_PROLOG(0xC0) ; CPY #
 _CPY Immediate
OPCODE_EPILOG

OPCODE_PROLOG(0xC8) ; INY i
 RMW _INC_X,Index_Y
OPCODE_EPILOG

OPCODE_PROLOG(0xCA) ; DEX i
 RMW _DEC_X,Index_X
OPCODE_EPILOG

OPCODE_PROLOG(0xCC) ; CPY a
 _CPY Absolute
OPCODE_EPILOG

OPCODE_PROLOG(0xE0) ; CPX #
 _CPX Immediate
OPCODE_EPILOG

OPCODE_PROLOG(0xE8) ; INX i
 RMW _INC_X,Index_X
OPCODE_EPILOG

OPCODE_PROLOG(0xEC) ; CPX a
 _CPX Absolute
OPCODE_EPILOG

%undef OPCODE_PROLOG