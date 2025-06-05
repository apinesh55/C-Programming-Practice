#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("\nEnter the Limit: ");
    scanf("%d",&n);

    int *ptr;
    ptr = (int *)malloc(n*sizeof(int));
    
    if(ptr==NULL)
    {
        printf("Memory not available....");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("\nEnter a integer value: ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("  %d",*(ptr+i));
    }
    return 0;
}