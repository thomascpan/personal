#include <setjmp.h>
#include <stdio.h>

jmp_buf env;

void work2() {
	printf("work2\n");
	longjmp(env, 1);
	return;
}

void work1() {
	printf("work1\n");
	work2();
}

void work() {
	printf("work\n");
	work1();
}

int main() {
	int ret;
	if ((ret = setjmp(env)) == 0) {
		work();
	} else {
		printf("Returned with: %d\n", ret);
	}
}

