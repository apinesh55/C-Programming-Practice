#include <stdio.h>

float mul(float,float);

int main()
{
    float a,b;
    printf("Enter 2 No for Multiplication:");
    scanf("%f%f",&a,&b);
    float c=mul(a,b);
    printf("\nA * B = %0.2f",c);
    return 0;
}

float mul(float x,float y)
{
    return x*y;
}