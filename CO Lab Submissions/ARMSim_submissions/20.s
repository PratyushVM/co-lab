FileName:	.asciz	"20.txt"
string:	.asciz	"This is a test case"
FileHandle:	.word	0

.align

ldr	r0,=FileName
mov	r1,#1
swi	0x66
ldr	r1,=FileHandle
str	r0,[r1]
ldr	r1,=string
swi	0x69
swi	0x68
swi	0x11