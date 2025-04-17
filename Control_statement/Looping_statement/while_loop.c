#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the limit: ");
    scanf("%d",&n);

    while(n>=i)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}