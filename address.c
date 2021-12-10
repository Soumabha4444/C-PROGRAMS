#include<stdio.h>
int main(void)
{
	int a=20;
	printf("\n d: %d\t sizeof_int: %d", &a, sizeof(a));
	printf("\n ld: %ld\t sizeof_long_int: %d", &a, sizeof(long int));
	printf("\n p: %p", &a);
	printf("\n After dereference: %d", *&a);
	printf("\n");
}
