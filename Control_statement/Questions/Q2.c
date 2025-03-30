#include <stdio.h>
int main()
{
    int days;
    printf("Enter the days: ");
    scanf("%d",&days);

    if (days>=1 && days<=5)
    {
        printf("\nFine - 50 paise");
    }
    else if (days>=6 && days<=10)
    {
        printf("\nFine - 1 rupees");
    }
    else if (days>=11 && days<=29)
    {
        printf("\nFine - 5 rupees");
    }
    else
    {
        printf("\nYour membership canceled");
    }
    return 0;
}