InFileName: .asciz "20.txt"
.align
InFileHandle:.word 0
CharArray: .skip 80
ldr r0,=InFileName 
mov r1,#0
swi 0x66 
ldr r1,=InFileHandle 
str r0,[r1] 
ldr r1,=CharArray
mov r2,#80
swi 0x6a
ldr r0,=CharArray
swi 0x02 
swi 0x68
swi 0x11