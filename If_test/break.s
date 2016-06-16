	.file	"break.c"
	.section	.rodata
.LC0:
	.string	"a"
.LC1:
	.string	"%d\n"
.LC2:
	.string	"b"
.LC3:
	.string	"c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	cmpl	$12345, -4(%rbp)
	je	.L2
	movl	$.LC0, %edi
	call	puts
	jmp	.L3
.L6:
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	cmpl	$7, -4(%rbp)
	je	.L8
	addl	$1, -4(%rbp)
.L3:
	cmpl	$9, -4(%rbp)
	jle	.L6
	jmp	.L5
.L8:
	nop
.L5:
	movl	$.LC2, %edi
	call	puts
.L2:
	movl	$.LC3, %edi
	call	puts
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (GNU) 5.3.1 20151207 (Red Hat 5.3.1-2)"
	.section	.note.GNU-stack,"",@progbits
