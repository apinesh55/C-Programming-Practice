#include <stdio.h>

int main()
{
    int a,b,c;
    float x;
    printf("\nEnter 2 No : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal : %d",c);

    c=a-b;
    printf("\nDifference : %d",c);

    c=a*b;
    printf("\nMultiplication : %d",c);

    c=a%b;
    printf("\nModulus : %d",c);

    x=(float)a/(float)b; // (float) Intha idathula a,b int - float ahh maaruthu
    printf("\nDivision : %.1f",x); // x float. a,b yafloat ah maaththalaaddi wrong answer varum
    return 0;
}