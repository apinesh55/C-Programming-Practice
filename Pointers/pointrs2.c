#include <stdio.h>
int main ()
{
    int a=10;
    int *p,*q;
    p=&a;
    q=p+1;
    printf("The size of integer: %d",sizeof(a));
    printf("\nValue of p:%d",p);
    printf("\nValue of q:%d",q);
    return 0;
}