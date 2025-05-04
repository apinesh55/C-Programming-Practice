#include <stdio.h>

void mul(int,int);

int main()
{
    int a,b;
    printf("Enter 2 Values for multiplication:\n");
    scanf("%d%d",&a,&b);
    mul(a,b);
    return 0;
}

void mul(int x,int y)
{
    int c;
    c=x*y;
    printf("A * B = %d",c);
}