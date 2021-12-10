#include<stdio.h>
main()
{
	int y = 10;
	int *py;
	py = &y;
	float *fy;
	printf("\n %d is stored in %d", y, &y);
	printf("\n %d is stored in %lu", y, &y);
	printf("\n %d is stored in %p", y, &y);
	printf("\n %d also %d", y, *py);
	printf("\n Size of integer pointer variable %d", sizeof(py));
	printf("\n Size of float pointer variable %d", sizeof(fy));
}
