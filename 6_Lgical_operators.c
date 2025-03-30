// logical operators
#include <stdio.h>

int main ()
{
    int a=38;

    printf("logical AND : %d",(a>=35 && a<=100));
    printf("\nlogical OR : %d",(a>=35 || a<=100));
    printf("\nlogical AND : %d",!(a>=35));
    return 0;
}