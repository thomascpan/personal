#include <stdio.h>
#include <pthread.h>

int glob = 10;

void* thread_func() {
	glob++;
	printf("%d\n", glob);
}

int main() {
	pthread_t tid1;
	pthread_t tid2;
	pthread_create(&tid1, 0, thread_func, 0);
	pthread_create(&tid2, 0, thread_func, 0);
	pthread_join(tid1, 0);
	pthread_join(tid2, 0);
	return 0;
}