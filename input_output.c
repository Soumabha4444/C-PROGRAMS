#include<stdio.h>
int main()
{
    char str[100];
    printf("\n Enter any sentence: ");
    scanf("%[^\n]s", str);
    printf("\n The entered sentence is: %s", str);
    return 0;
}
