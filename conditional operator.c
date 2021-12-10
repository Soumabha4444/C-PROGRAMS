#include<stdio.h>
main()
{
	int a=20;
	char c;
	//c=k no problem
	//c=r cases are too high
	
	/* if(a>1000)
	{
		c='r';
	}
	else
	{
		c='k';
	} */
	
	c=(a>1000)?'r':'k';
	printf("Value of c is %c \n", c);
}
