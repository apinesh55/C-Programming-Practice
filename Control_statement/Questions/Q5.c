/*Three digit number input through the keyboard write a program
to find the given number is a Amstrong number or not. */
#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter a three digit no: ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;

    c=(b*b*b)+(d*d*d)+(e*e*e);

    if (a==c)
    {
        printf("\n%d is an Amstrong number",a);
    }
    else
    {
        printf("\n%d is not an Amstrong number",a);
    }
    
    return 0;
}