#include <stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    int **q;
    printf("Value of a:%d\n",a);
    printf("Address of a:%d\n",&a);
    printf("Value of p:%d\n",p);
    printf("Address of p:%d\n",&p);
    printf("Dereferencing of p:%d\n",*p);
    
    q=&p;
    printf("-------------------------------\n");
    printf("Value of p:%d\n",p);
    printf("Address of p:%d\n",&p);
    printf("Value of q:%d\n",q);
    printf("Address of q:%d\n",&q);
    printf("Dereferencing of q:%d\n",**q);
    
    return 0;
}