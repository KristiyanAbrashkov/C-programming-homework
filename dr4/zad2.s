	.file	"zad2.c"
	.text
	.globl	nok
	.def	nok;	.scl	2;	.type	32;	.endef
	.seh_proc	nok
nok:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %edx
	movl	16(%rbp), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	cltd
	idivl	16(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L2
	movl	-4(%rbp), %eax
	cltd
	idivl	24(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L2
	movl	-4(%rbp), %eax
	jmp	.L5
.L2:
	addl	$1, -4(%rbp)
	jmp	.L4
.L5:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "NOK na %d i %d e: %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$12, -4(%rbp)
	movl	$18, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	nok
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %ecx
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%ecx, %r9d
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev6, Built by MSYS2 project) 13.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
