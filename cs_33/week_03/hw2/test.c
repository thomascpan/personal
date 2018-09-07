#include <stdio.h>

union U {
	struct s { char c; int p; } s;
	struct t { char c; double p; } t;
	struct v { char c; char* p; } v;
}; 


int main() {
	union U u;

	char c = 'c';

	u.v.c = '*';
	u.v.p = &c;

	printf("%u\n", u.s.p);
	printf("%lf\n", u.t.p);
	printf("%u\n", *(u.v.p));

	printf("%c\n", u.s.c);
	printf("%c\n", u.t.c);
	printf("%c\n", u.v.c);

	printf("%p\n", &u.v.c);
	printf("%p\n", &u.s.p);
	printf("%p\n", &u.t.p);
	printf("%p\n", &u.v.p);

	printf("%lu\n", sizeof(u));

	return 0;
}