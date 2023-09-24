section		.text
	extern	printf
	global	start
start:
	mov	edi, msg
	mov	eax, 0
	call	printf
section		.data
	msg db "hello, holberton", 0xa, 0
