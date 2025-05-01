#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],c[20];
    char b[]={' ','T','H','A','R','M','A','R','A','S','A','\0'};
    printf("Enter the string value: ");
    gets(a);

    printf("Length: %d\n",strlen(a));
    printf("Capital: %s\n",strupr(a));
    printf("Small: %s\n",strlwr(a));
    printf("Copy the a value to c: %s\n",strcpy(c,a));
    printf("Comare a & c: %d\n",strcmp(a,c));
    strcat(a,b);
    printf("Concatenation: %s\n",a);
    printf("Reverse: %s\n",strrev(a));

    return 0;
}