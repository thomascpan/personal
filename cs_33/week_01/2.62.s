	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_int_shift_are_arithmetic ## -- Begin function int_shift_are_arithmetic
	.p2align	4, 0x90
_int_shift_are_arithmetic:              ## @int_shift_are_arithmetic
	.cfi_startproc
## BB#0:
	pushl	%ebp
Lcfi0:
	.cfi_def_cfa_offset 8
Lcfi1:
	.cfi_offset %ebp, -8
	movl	%esp, %ebp
Lcfi2:
	.cfi_def_cfa_register %ebp
	movl	$1, %eax
	popl	%ebp
	retl
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushl	%ebp
Lcfi3:
	.cfi_def_cfa_offset 8
Lcfi4:
	.cfi_offset %ebp, -8
	movl	%esp, %ebp
Lcfi5:
	.cfi_def_cfa_register %ebp
	subl	$8, %esp
	calll	L1$pb
L1$pb:
	popl	%eax
	subl	$8, %esp
	leal	L_.str-L1$pb(%eax), %eax
	pushl	$1
	pushl	%eax
	calll	_printf
	addl	$16, %esp
	xorl	%eax, %eax
	addl	$8, %esp
	popl	%ebp
	retl
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%x\n"


.subsections_via_symbols
