#include<stdio.h>
main()
{
	int i=5;
	printf("Hello world \n");
	printf("How are you? \n");
	goto hi;
	printf("one \n");
	printf("two \n");
	printf("three \n");
	hi:
	printf("I am Soumabha Nandi \n");
	printf("wise men say \n");
	printf("only fools rush in \n");
	i=i+5;
	if(i<11)
		goto hi;
	printf("No more going back \n");	
}
