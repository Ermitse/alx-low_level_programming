	.file	"4-puts.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movsbq	-1(%rbp), %rax
	movabsq	$7885065666585129552, %rdx
	movabsq	$7791354250703367785, %rcx
	movq	%rdx, (%rax)
	movq	%rcx, 8(%rax)
	movabsq	$7811904092961598313, %rsi
	movabsq	$7863391741191022948, %rdi
	movq	%rsi, 16(%rax)
	movq	%rdi, 24(%rax)
	movabsq	$7453010347691371637, %rdx
	movabsq	$8825495544226668917, %rcx
	movq	%rdx, 32(%rax)
	movq	%rcx, 40(%rax)
	movw	$25964, 48(%rax)
	movb	$0, 50(%rax)
	movsbq	-1(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
