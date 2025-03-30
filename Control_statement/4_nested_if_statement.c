#include <stdio.h>
int main()
{
    int y;
    printf("\nEnter the year - ");
    scanf("%d",&y);

    if (y%100==0)
    {    
        if (y%400==0)
        {
            printf("\n%d is Leap year",y);
        }
        else
        {
            printf("\n%d is Not leap year",y);
        }
    }
    else
    {
        if (y%4==0)
        {
            printf("\n%d is Leap year",y);
        }
        else
        {
            printf("\n%d is Not leap year",y);
        }
    }

/* int y;
    printf("Enter the year: ");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
        printf("%d is a Leap Year\n", y);
    }
    else
    {
        printf("%d is Not a Leap Year\n", y);
    }

    return 0;*/
    return 0;
}