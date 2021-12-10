#include<stdio.h>
int main(void)
{
	int i[6] = {10, 20, 30, 40, 50, 60};
	printf("\n %p", i);
	printf("\n %p", &i[0]);
	printf("\n %p", &i[1]);
	printf("\n %p", &i[2]);
	printf("\n %p", &i[3]);
	printf("\n %p", &i[4]);
	printf("\n %p", &i[5]);
	printf("\n");
}
