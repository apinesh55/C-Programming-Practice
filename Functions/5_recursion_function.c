#include <stdio.h>

int factorial(int i);

int main()
{
    int a,b;
    printf("Enter the no:");
    scanf("%d",&a);
    b=factorial(a);
    printf("Factorial: %d",b);
    return 0;
}

int factorial(int i)
{
    if(i<=1)
    {
        return 1;
    }
    else
    {
        return i * factorial(i-1);
    }
}