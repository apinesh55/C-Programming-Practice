#include <stdio.h>

int main()
{
    float l,b,r,ra,rp,ca,cp;
    printf("\nEnter the l of Rectangle : ");
    scanf("%f",&l);
    printf("\nEnter the b of Rectangle : ");
    scanf("%f",&b);
    printf("\nEnter the r of Circle : ");
    scanf("%f",&r);

    ra=l*b;
    rp=(2*(l+b));
    cp=2*3.14*r;
    ca=3.14*r*r;

    printf("\nCircle Area = %0.2f",ca);
    printf("\nCircle Perimeter = %0.2f",cp);
    printf("\nRectangle Area = %0.2f",ra);
    printf("\nRectangle Perimeter = %0.2f",rp);

    return 0;
}