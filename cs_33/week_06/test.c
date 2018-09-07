#include <stdio.h>
#include <unistd.h>

int glob = 10;

void* proc_func() {
	glob++;
	printf("%d\n", glob);
}

int main() {
	fork();
	proc_func();
	return 0;
}