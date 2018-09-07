#include <stdio.h>


int main() {
	float f = 10000000000000000303786028427003666890752.000000;

	printf("%f\n", f);
	printf("%f\n", -(-f));
	printf("%d\n", f == -(-f));

	return 0;
}