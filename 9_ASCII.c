#include <stdio.h>
int main()
{
    int i;
    char a='A',b='a';
    for(i=0;i<=255;i++)
    {
        printf("\n%d : %c",i,i);
    }
    printf("\n%c",a+32); // A+32=a      a-32=A
    printf("\n%c",b-32);
    return 0;
}