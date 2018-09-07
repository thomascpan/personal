#include <stdio.h>
#include <limits.h>

int saturating_add(int x, int y) {
	// Gets sum. s
	int sum = x + y;

	// Determines whether x and y are positive or negative. 
	int x_signficant_bit = x >> 31;
	int y_signficant_bit = y >> 31;

	// Determines if overflow occured by XORing the most significant bit of both x and sum. 
	int temp;
	int overflow = __builtin_add_overflow(x, y, &temp);
	printf("%d\n", overflow);

	// If overflow, determine positive or negative. 
	int positive_overflow_occured = overflow & ((~x_signficant_bit) & (~y_signficant_bit));
	int negative_overflow_occured = overflow & (x_signficant_bit & y_signficant_bit);

	return 	(negative_overflow_occured & INT_MIN) |
			(positive_overflow_occured & INT_MAX) |
			(~overflow & sum);
}

int main() {
	int x = saturating_add(INT_MAX, 10);
	printf("%d \n", x);

	int y = saturating_add(INT_MIN, -10);
	printf("%d \n", y);

	int g = saturating_add(38, -4);
	printf("%d \n", g);

	g = saturating_add(38, 4);
	printf("%d \n", g);

	g = saturating_add(-38, 4);
	printf("%d \n", g);

	g = saturating_add(-38, -4);
	printf("%d \n", g);
	return 0;
}