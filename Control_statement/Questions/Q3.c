#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("It's a even number.");
    }
    else
    {
        printf("It's a odd number.");
    }
    return 0;
}