#include <stdio.h>
#include <stdlib.h>

int * getting_value()
{
    int i;
    int *ptr = (int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {
        printf("\nEnter a integer : ");
        scanf("%d",ptr+i);
    }
    return ptr;
}

int main()
{
    int i,n=0;
    int *ptr = getting_value();
    for(i=0;i<5;i++)
    {
        n+= *(ptr+i);
    }
    printf("Total : %d",n);
    free(ptr);
    ptr=NULL;
    return 0;
}