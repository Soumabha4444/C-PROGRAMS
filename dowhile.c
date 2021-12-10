#include<stdio.h>
main()
{
	int x=-8;
	while(x<0)
	{
		printf("you are inside while loop \n");
		x=x+1;
	}
	printf("came out of the while loop \n");
	do
	{
		printf("you are inside do-while loop \n");
		x=x+1;
	}
	while(x<0);
	printf("after do while loop\n");
}
