#include <stdio.h>
int main ()
{
    int a=1;
    printf("Pre increment : %d",++a);
    printf("\npost increment : %d",a++);
    printf("\nA : %d",a);

    printf("\npre decerement : %d",--a);
    printf("\npost decerement : %d",a--);
    printf("\nA : %d",a);
    return 0;
}