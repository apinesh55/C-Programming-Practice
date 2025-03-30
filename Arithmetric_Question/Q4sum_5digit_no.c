#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,sum=0;
    printf("\nEnter a 5 Digit No : ");
    scanf("%d",&a);
    
    b=a%10; //(if a = 12345) 5
    sum+=b;
    c=a/10; //1234
    d=c%10; //4
    sum+=d;
    e=c/10; //123
    f=e%10; //3
    sum+=f;
    g=e/10; //12
    h=g%10; //2
    sum+=h;
    i=g/10; //1
    sum+=i;
    printf("\nThe some of the No : %d",sum);

    return 0;
}