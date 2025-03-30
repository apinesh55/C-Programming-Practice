#include <stdio.h>

int main()
{
    float BS,DR,HR,GP;
    printf("\nEnter the monthly salary : ");
    scanf("%f",&BS);
    HR=BS*0.2;
    DR=BS*0.4;
    GP=HR+DR+BS;
    printf("\nBasic Salary : %0.2f",BS);
    printf("\nDearness : %0.2f",DR);
    printf("\nHouse Rent Allowence : %0.2f",HR);
    printf("\nGross Pay : %0.2f",GP);
    return 0;
}