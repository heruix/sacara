; This file is auto generated, don't modify it
marker1 EQU 00DF01E66h
marker2 EQU 068F06C91h

; real opcodes: 00D48h, 00B3Bh, 00FFAh, 00BE0h, 007F0h
header_VmRet EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 00E02h, 00B93h, 00F54h, 00B5Ah, 0074Ah>

; real opcodes: 00633h, 003B7h, 007A5h, 00431h
header_VmNop EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 0068Ah, 00306h, 00714h, 00488h>

; real opcodes: 00EF0h, 00D30h, 009B8h, 00D50h, 00224h
header_VmAdd EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 00E4Ah, 00D8Ah, 00912h, 00DEAh, 00296h>

; real opcodes: 00290h, 007ECh, 0019Fh, 00CFEh, 00093h
header_VmPushImmediate EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 0022Ah, 0075Eh, 0012Fh, 00C50h, 0002Bh>

; real opcodes: 0005Bh, 00E2Ch
header_VmPushVariable EQU <DWORD 00DF01E66h, 068F06C91h, 2h, 000F0h, 00E9Bh>

; real opcodes: 00D9Eh, 00A2Dh, 00FC0h
header_VmPop EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 00D2Eh, 00A9Bh, 00F78h>

; real opcodes: 00D37h, 00233h, 00FD8h, 002D8h, 008E0h
header_VmCall EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 00D87h, 0028Bh, 00F72h, 00272h, 0085Ah>

; real opcodes: 00001h, 00A6Ch, 0030Dh
header_VmJump EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 000B7h, 00ADCh, 003BBh>

; real opcodes: 00C36h, 00CE2h
header_VmAlloca EQU <DWORD 00DF01E66h, 068F06C91h, 2h, 00C85h, 00C59h>

; real opcodes: 00BEDh, 00512h, 007C1h, 00AFBh
header_VmHalt EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 00B5Ch, 005ABh, 00778h, 00A52h>

; real opcodes: 002F6h, 00FAAh, 00B8Eh, 00A85h
header_VmCmp EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 00247h, 00F23h, 00B3Fh, 00A34h>

; real opcodes: 00C8Eh, 00E55h, 00CBEh
header_VmStackWrite EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 00C3Eh, 00EE3h, 00C0Eh>

; real opcodes: 00F9Dh, 00DB1h, 007FFh
header_VmStackRead EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 00F2Bh, 00D07h, 0074Dh>

; real opcodes: 00C04h, 003F4h
header_VmJumpIfLess EQU <DWORD 00DF01E66h, 068F06C91h, 2h, 00CB3h, 00343h>

; real opcodes: 006F8h, 00151h, 00F15h
header_VmJumpIfLessEquals EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 00650h, 001E7h, 00FA3h>

; real opcodes: 000D6h, 0098Fh, 0022Dh
header_VmJumpIfGreat EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 00066h, 0093Dh, 0029Bh>

; real opcodes: 00F80h, 005A7h, 00572h
header_VmJumpIfGreatEquals EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 00F38h, 00515h, 005CAh>

; real opcodes: 00E66h, 00E7Bh, 00B52h, 00674h, 004FEh
header_VmRead EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 00ED8h, 00ED3h, 00BECh, 006C6h, 00450h>

; real opcodes: 00740h, 00020h, 002BBh, 0043Ch
header_VmWrite EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 007F9h, 00099h, 00212h, 0048Dh>

; real opcodes: 0048Ch, 00C2Bh, 002EFh
header_VmGetIp EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 0043Ch, 00CA1h, 0025Dh>

; real opcodes: 00CB8h, 00B18h, 0029Ch, 00030h, 008ECh
header_VmGetSp EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 00C12h, 00BB2h, 0022Eh, 0008Ah, 0085Eh>

; real opcodes: 004FFh, 003CAh, 008A9h
header_VmNativeRead EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 0044Dh, 00382h, 0081Fh>

; real opcodes: 00D1Dh, 00964h
header_VmNativeWrite EQU <DWORD 00DF01E66h, 068F06C91h, 2h, 00DAAh, 009D3h>

; real opcodes: 0006Eh, 00B0Fh, 00864h, 00726h, 00E3Ah
header_VmNativeCall EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 000E0h, 00BBFh, 008D6h, 00798h, 00E94h>

; real opcodes: 0025Ch, 00454h, 00747h, 002FFh, 00FFCh
header_VmByte EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 002EEh, 004E6h, 007F7h, 0024Fh, 00F4Eh>

; real opcodes: 003DDh, 00258h
header_VmWord EQU <DWORD 00DF01E66h, 068F06C91h, 2h, 0036Ah, 002EFh>

; real opcodes: 00D1Fh, 00BD7h, 005DFh
header_VmDoubleWord EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 00DADh, 00B65h, 0056Dh>

; real opcodes: 0069Eh, 001C8h
header_VmSub EQU <DWORD 00DF01E66h, 068F06C91h, 2h, 0062Dh, 0017Fh>

; real opcodes: 00472h, 00308h, 0053Fh, 0072Ah, 00B77h
header_VmMul EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 004CCh, 003C2h, 0058Fh, 007A4h, 00BC7h>

; real opcodes: 00792h, 00DC8h, 00464h
header_VmDiv EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 0072Ah, 00D80h, 004D4h>

; real opcodes: 00DD9h, 002A3h, 00C71h, 007AAh
header_VmAnd EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 00D70h, 0021Ah, 00CC8h, 00723h>

; real opcodes: 00C20h, 00650h, 00DD3h, 0009Dh
header_VmShiftRight EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 00C99h, 006E9h, 00D6Ah, 0002Ch>

; real opcodes: 0056Fh, 00822h, 002A9h
header_VmShiftLeft EQU <DWORD 00DF01E66h, 068F06C91h, 3h, 005DDh, 0089Ah, 0021Fh>

; real opcodes: 00518h, 0009Eh, 000B6h, 006A9h
header_VmOr EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 005B1h, 0002Fh, 00007h, 00620h>

; real opcodes: 00AC2h, 00867h, 002C3h, 00BBCh, 00209h
header_VmNot EQU <DWORD 00DF01E66h, 068F06C91h, 5h, 00A7Ch, 008D7h, 0027Bh, 00B0Eh, 002C1h>

; real opcodes: 00559h, 001E4h, 0070Dh, 002E9h
header_VmXor EQU <DWORD 00DF01E66h, 068F06C91h, 4h, 005F0h, 00155h, 007BCh, 00260h>

header_end EQU <DWORD marker2, marker1>