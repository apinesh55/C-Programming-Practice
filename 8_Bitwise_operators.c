#include <stdio.h>
int main ()
{
    int a=25,b=45,c=16,d,e;
    printf("\nBitwise AND :   %d",a&b);
    printf("\nBitwise OR :    %d",a|b);
    printf("\nBitwise XOR :   %d",a^b);
    printf("\nBitwise XOR :   %d",~a);
    d=c<<2;
    e=c>>2;
    printf("\nLeft shift :    %d",d);
    printf("\nright shift :   %d",e);

    return 0;
}