#include <stdio.h>

long cread (long *xp){
  return (xp ? *xp : 0);
}

long cread_alt (long *xp){
  long temp = 0;
  if (!xp) 
    xp = &temp;
  return *xp;
}

int main() {
	return 0;
}