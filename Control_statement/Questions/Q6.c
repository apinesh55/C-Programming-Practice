#include <stdio.h>
int main()
{
    int ch,qt,i,net=0;
    menu:
    printf("\tMenu Card:");
    printf("\n\t\t1.Coffee          10$");
    printf("\n\t\t2.Tea             05$");
    printf("\n\t\t3.Cold coffee     15$");
    printf("\n\t\t4.Milk shake      20$");

    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("You have selected Coffee");
        printf("\nEnter the Qty: ");
        scanf("%d",&qt);
        net=net+(qt*10);
        break;
    case 2:
        printf("You have selected Tea");
        printf("\nEnter the Qty: ");
        scanf("%d",&qt);
        net=net+(qt*5);
        break;
    case 3:
        printf("You have selected Cold coffee");
        printf("\nEnter the Qty: ");
        scanf("%d",&qt);
        net=net+(qt*15);
        break;
    case 4:
        printf("You have selected Milk shake");
        printf("\nEnter the Qty: ");
        scanf("%d",&qt);
        net=net+(qt*20);
        break;
    default:
        printf("\nInvalid Product Selection");
        break;
    
    }
    printf("\nDo you want to continue press 1 \nFor get your bill press 2 \n:");
    scanf("%d",&i);
    if(i==1)
    {
        goto menu;
    }
    printf("\nTotal Amount = %d",net);
    printf("\nThank You :) Come Again");
    return 0;
}