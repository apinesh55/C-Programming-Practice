#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    int *ptr = (int *)calloc(n,sizeof(int));
    if (ptr==NULL)
    {
        printf("\nmemory not available ...");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("\nEnter a integer: ");
        scanf("%d",ptr+i);
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d : %d",ptr+i,*(ptr+i));
    }
    return 0;
}