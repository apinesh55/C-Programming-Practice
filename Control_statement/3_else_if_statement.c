#include <stdio.h>
int main()
{
    int a;
    printf("Enter a No - ");
    scanf("%d",&a);
    if (a>0)
    {
        printf("\n%d is a positive No",a);
    }
    else if(a==0)
    {
        printf("\nthe given vlue is 0");
    }
    else
    {
        printf("\n%d is a negative No",a);
    }
    return 0;
}