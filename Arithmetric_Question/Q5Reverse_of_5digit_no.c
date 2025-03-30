#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,r;
    printf("\nEnter a 5 Digit No : ");
    scanf("%d",&a);
    
    b=a%10; //(if a = 12345) 5
    c=a/10; //1234
    d=c%10; //4
    e=c/10; //123
    f=e%10; //3
    g=e/10; //12
    h=g%10; //2
    i=g/10; //1
    r=(b*10000)+(d*1000)+(f*100)+(h*10)+i;
    printf("Reverse of the 5 digit no : %d",r);

    return 0;
}