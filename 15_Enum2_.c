#include <stdio.h>

enum bool{NO, YES}; // Global scope

int main()
{
    enum bool a;
    a=YES;
    printf("%d",a);

    enum level{LOW=55, MEDIUM=65, HIGH=75};
    enum level b;
    b=HIGH;
    printf("\n%d",b);

    enum temp{HOT=5, COOL};
    enum temp c;
    c=COOL;
    printf("\n%d",c);

    return 0;
}