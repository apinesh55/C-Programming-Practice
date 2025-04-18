#include <stdio.h>
int main()
{
    int i,n;
    for(i=1;;i++)
    {
        printf("Enter a even no:");
        scanf("%d",&n);
        if(n%2==0)
            break;
    }
    printf("\n%d is a even number",n);
    return 0;
}