#include <stdio.h>
int main()
{
    int a[]={10,20,30,0,50,};
    void *p;
    p=a;
    printf("*p = %d",*(int *)p);
    return 0;
}