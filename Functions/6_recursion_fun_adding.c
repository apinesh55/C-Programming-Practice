#include <stdio.h>

int sum(int i)
{
    if(i>0)
    {
        return i+sum(i-1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    printf("SUM: %d",sum(n));
    return 0;
}