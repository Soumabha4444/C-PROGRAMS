#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "finding first and last occurrence of a character is amazing";
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int a,i;
	printf("String to search: %s\n", str);
	printf("Length of string: %d\n", strlen(str));
	printf("Char: first last\n");

	for (a = 0; a < strlen(alpha); a++)
	{
		char *position_ptr = strchr(str, alpha[a]);
		char *r_position_ptr = strrchr(str, alpha[a]);

		int position = (position_ptr == NULL ? -1 : position_ptr - str);
		int r_position = (r_position_ptr == NULL ? -1 : r_position_ptr - str);

		printf("%4c: %4d %4d \n", alpha[i], position, r_position);
	}

	return 0;
}
