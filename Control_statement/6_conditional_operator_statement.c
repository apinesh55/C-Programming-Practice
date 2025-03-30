#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter values for A & B: ");
    scanf("%d%d", &a,&b);
    c=a>b?a:b;
    printf("Greatest no : %d",c);
    return 0;
}