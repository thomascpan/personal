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
	pushl	%esi
Lcfi3:
	.cfi_offset %esi, -12
	movl	8(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%eax, %ecx
	andl	%edx, %ecx
	leal	(%edx,%eax), %esi
	orl	%eax, %edx
	xorl	%esi, %eax
	andl	%eax, %ecx
	sarl	$31, %eax
	notl	%eax
	andl	%esi, %eax
	sarl	$31, %esi
	sarl	$31, %edx
	notl	%edx
	andl	%esi, %edx
	andl	$-2147483648, %ecx      ## imm = 0x80000000
	andl	$2147483647, %edx       ## imm = 0x7FFFFFFF
	orl	%edx, %eax
	orl	%ecx, %eax
	popl	%esi
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
Lcfi4:
	.cfi_def_cfa_offset 8
Lcfi5:
	.cfi_offset %ebp, -8
	movl	%esp, %ebp
Lcfi6:
	.cfi_def_cfa_register %ebp
	pushl	%esi
	pushl	%eax
Lcfi7:
	.cfi_offset %esi, -12
	calll	L1$pb
L1$pb:
	popl	%eax
	subl	$8, %esp
	leal	L_.str-L1$pb(%eax), %esi
	pushl	$2147483647             ## imm = 0x7FFFFFFF
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$-2147483648            ## imm = 0x80000000
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$34
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$42
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$-34
	pushl	%esi
	calll	_printf
	addl	$8, %esp
	pushl	$-42
	pushl	%esi
	calll	_printf
	addl	$16, %esp
	xorl	%eax, %eax
	addl	$4, %esp
	popl	%esi
	popl	%ebp
	retl
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d \n"


.subsections_via_symbols
