#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[100];  
    printf (" \n Enter a string to be reversed : ");  
    scanf ("%s", str);   
    printf (" \n The reverse string is : %s ", strrev(str));  
    return 0;  
}
