#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter a no :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("\nOne");
        break;

    case 2:
        printf("\n Two");
        break;

    case 3:
        printf("\nThree");
        break;

    default:
        printf("\nInvalid");
        break;
    }
    return 0;
}