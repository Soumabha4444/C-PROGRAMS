#include<stdio.h>
main()
{
	int m=200;
	printf("value of m before increment %d \n", m);
	m=m+1;
	//m+=1
	printf("value of m after increment %d \n", m);
	//using increment operator
	printf("value of m using increment operator as prefix %d \n", ++m);
	printf("value of m using increment operator as suffix %d \n", m++);
	printf("value of m after suffix increment operation %d \n", m);
}
