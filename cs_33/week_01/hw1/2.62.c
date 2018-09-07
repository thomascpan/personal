#include <stdio.h>
#include <limits.h>

int int_shift_are_arithmetic() {
	return (INT_MIN >> 1) < 0;
}

int main() {
	printf("%x\n", int_shift_are_arithmetic());
}