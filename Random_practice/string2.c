#include <stdio.h>
#include <string.h>
int main()
{
    char a;
    char b[100];
    char c[100];

    printf("Enter the value: ");
    scanf("%c",&a);
    scanf("%s",b);
    getchar();
    scanf("%99[^\n]%*c",c);
    printf("\n------------------\n");
    printf("%c\n",a);
    printf("%s\n",b);
    printf("%s\n",c);

    char d;
    printf("\nEnter value for d:");
    d=getchar();
    putchar(d);
    return 0;
}