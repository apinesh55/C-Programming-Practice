#include <stdio.h>

void add();

int main()
{
    add();
    return 0;
}

void add()
{
    int a,b,c;
    printf("Enter the values:\n");
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    c=a+b;
    printf("\nA + B = %d",c);
}