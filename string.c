#include<stdio.h>
main()
{
	int n=0;
	char my_name[]={'s','o','u','m','a','b','h','a'};
	char my_name1[]="soumabha";
	printf("%s\n",my_name);
	printf("%s\n",my_name1);
	printf("%d\n",sizeof(my_name));
	printf("%d\n",sizeof(my_name1));
	for(n=0;n<10;n++)
    {
    	printf("%d\t%d\t%d\n",n,my_name[n],my_name1[n]);
    }
} 
