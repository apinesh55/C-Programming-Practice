#include <stdio.h>
int main ()
{
    int a[3][3],b[3][3],add[3][3],i,j;

    printf("Enter the value for array a:\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the value for array b:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n--------------------------------------------------\n");
    printf("Array a + Array b = \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
            printf("\t| %d",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}