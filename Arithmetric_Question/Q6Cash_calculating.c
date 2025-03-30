#include <stdio.h>

int main()
{
    int amt;
    printf("\nEnter the Amount : ");
    scanf("%d",&amt); //1275
    printf("\nNo of Rs 100 notes : %d",amt/100); //12
    printf("\nNo of Rs 50 notes : %d",(amt%100)/50); //75/50
    printf("\nNo of Rs 10 notes : %d",((amt%100)%50)/10); //
    printf("\nBalance : %d",((amt%100)%50)%10);
    return 0;
}