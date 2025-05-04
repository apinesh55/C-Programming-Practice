#include <stdio.h>

int add();

int main()
{
    int a;
    a=add();
    printf("A + B = %d",a);
    // printf("A + B = %d",add()); we can write like this also
    return 0;
}

int add()
{
    int a,b;
    printf("Enter 2  No for Addition:");
    scanf("%d%d",&a,&b);
    return a+b;
}