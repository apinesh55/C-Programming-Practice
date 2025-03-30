#include <stdio.h>
int main()
{
    int a=10,b=20;
    a+=b;
    printf("a = %d",a); // 10+20

    a-=b;
    printf("\na = %d",a); // 30-10

    a*=b;
    printf("\na = %d",a); // 10*20

    a/=b;
    printf("\na = %d",a); // 200/20

    a%=b;
    printf("\na = %d",a); // 10%20
    return 0;
}