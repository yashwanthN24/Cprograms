	.file	"first.c"
	.text
	.globl	_gcd
	.def	_gcd;	.scl	2;	.type	32;	.endef
_gcd:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	jmp	L2
L3:
	movl	8(%ebp), %eax
	cltd
	idivl	12(%ebp)
	movl	%edx, -4(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, 8(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, 12(%ebp)
L2:
	cmpl	$0, -4(%ebp)
	jne	L3
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.globl	_gcdr
	.def	_gcdr;	.scl	2;	.type	32;	.endef
_gcdr:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	8(%ebp), %eax
	cltd
	idivl	12(%ebp)
	movl	%edx, -12(%ebp)
	cmpl	$0, -12(%ebp)
	jne	L6
	movl	12(%ebp), %eax
	jmp	L7
L6:
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	_gcdr
L7:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.globl	_gcds
	.def	_gcds;	.scl	2;	.type	32;	.endef
_gcds:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	jmp	L9
L11:
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jle	L10
	movl	12(%ebp), %eax
	subl	%eax, 8(%ebp)
	jmp	L9
L10:
	movl	8(%ebp), %eax
	subl	%eax, 12(%ebp)
L9:
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jne	L11
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.globl	_gcdsr
	.def	_gcdsr;	.scl	2;	.type	32;	.endef
_gcdsr:
LFB16:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jne	L14
	movl	12(%ebp), %eax
	jmp	L15
L14:
	movl	8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jle	L16
	movl	8(%ebp), %eax
	subl	12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_gcdsr
	jmp	L15
L16:
	movl	12(%ebp), %eax
	subl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_gcdsr
L15:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE16:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Enter two numbers to find gcd:\0"
LC1:
	.ascii "%d%d\0"
LC2:
	.ascii "The gcd of %d and %d is %d \0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB17:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	20(%esp), %eax
	movl	%eax, 8(%esp)
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	20(%esp), %edx
	movl	24(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_gcdsr
	movl	%eax, 28(%esp)
	movl	20(%esp), %edx
	movl	24(%esp), %eax
	movl	28(%esp), %ecx
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE17:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
