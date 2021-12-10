#include<stdio.h>
main()
{
	int maths=92;
	int chemistry=72;
	int physics=79;
	int biology=90;
	int total=maths + chemistry + physics + biology;
	float percent=(total/400.0)*100.0;
	char grade='B';
	printf("Maths marks %d \n", maths);
	printf("Chemistry marks %d \n", chemistry);
	printf("Physics marks %d \n", physics);
	printf("Biology marks %d \n", biology);
	printf("Total marks %d \n", total);
	printf("Percentage %f \n", percent);
	printf("Grade %c \n", grade);
}
