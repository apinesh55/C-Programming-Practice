#include <stdio.h>
#include <string.h>
int main()
{
    char a[]={'A','B','I','\0'};
    printf("%s",a);
    char b[20];
    printf("\n Enter the String: ");
    scanf("%s",b); //& is not needed because b is arry
    return 0;
}