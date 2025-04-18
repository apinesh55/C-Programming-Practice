#include <stdio.h>
int main()
{
    int n[5],i;
    printf("Enter 5 numbers");
    for(i=0;i<5;i++)
    {
        printf("\nEnter the number n[%d]: ",i);
        scanf("%d",&n[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\nn[%d] = %d",i,n[i]);
    }
    return 0;
}