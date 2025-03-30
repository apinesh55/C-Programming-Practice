#include <stdio.h>
int main()
{
    char name[10];
    int age;
    printf("\nEnter Your Name - ");
    scanf("%s",name);
    printf("\nEnter Your Age - ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("\n%s Age is %d Eligible for Vote",name,age);
    }
    
    return 0;
}