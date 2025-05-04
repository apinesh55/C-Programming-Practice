#include <stdio.h>
int main()

{
    int i,j;
    int a[2][3]={{10,20,30},{40,50,60}};
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}