#include<stdio.h>
main()
{
	int x;
	x=4;
	while(x>0)
	{
		printf("I am inside while loop \n");
		x=x-1;
	}
	
	printf("I am out of while loop \n");
	for(x=4;x>0;x=x-1)
	{
		printf("I am inside for loop \n");
	}
	printf("I am out of for loop \n");
	
	for(;;)
		printf("soumabha");
}
