	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_saturating_add         ## -- Begin function saturating_add
	.p2align	4, 0x90
_saturating_add:                        ## @saturating_add
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
	pushl	%ebx
	pushl	%edi
	pushl	%esi
	subl	$12, %esp
Lcfi3:
	.cfi_offset %esi, -20
Lcfi4:
	.cfi_offset %edi, -16
Lcfi5:
	.cfi_offset %ebx, -12
	calll	L0$pb
L0$pb:
	popl	%eax
	movl	12(%ebp), %edi
	xorl	%ebx, %ebx
	movl	%edi, %esi
	addl	8(%ebp), %esi
	seto	%bl
	subl	$8, %esp
	leal	L_.str-L0$pb(%eax), %eax
	pushl	%ebx
	pushl	%eax
	calll	_printf
	addl	$16, %esp
	orl	8(%ebp), %edi
	shrl	$31, %edi
	notl	%edi
	andl	%ebx, %edi
	notl	%ebx
	andl	%esi, %ebx
	orl	%edi, %ebx
	movl	%ebx, %eax
	addl	$12, %esp
	popl	%esi
	popl	%edi
	popl	%ebx
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
Lcfi6:
	.cfi_def_cfa_offset 8
Lcfi7:
	.cfi_offset %ebp, -8
	movl	%esp, %ebp
Lcfi8:
	.cfi_def_cfa_register %ebp
	pushl	%edi
	pushl	%esi
Lcfi9:
	.cfi_offset %esi, -16
Lcfi10:
	.cfi_offset %edi, -12
	calll	L1$pb
L1$pb:
	popl	%edi
	subl	$8, %esp
	leal	L_.str-L1$pb(%edi), %esi
	pushl	$1
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	leal	L_.str.1-L1$pb(%edi), %edi
	pushl	$-2147483639            ## imm = 0x80000009
	pushl	%edi
	calll	_printf
	addl	$8, %esp
	pushl	$1
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$2147483638             ## imm = 0x7FFFFFF6
	pushl	%edi
	calll	_printf
	addl	$8, %esp
	pushl	$0
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$34
	pushl	%edi
	calll	_printf
	addl	$8, %esp
	pushl	$0
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$42
	pushl	%edi
	calll	_printf
	addl	$8, %esp
	pushl	$0
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$-34
	pushl	%edi
	calll	_printf
	addl	$8, %esp
	pushl	$0
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$-42
	pushl	%edi
	calll	_printf
	addl	$16, %esp
	xorl	%eax, %eax
	popl	%esi
	popl	%edi
	popl	%ebp
	retl
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d\n"

L_.str.1:                               ## @.str.1
	.asciz	"%d \n"


.subsections_via_symbols
