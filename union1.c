#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main ()
{
    printf("Size of union: %d",sizeof(union Data));
    union Data data;
    data.i=5;
    printf("\ni = %d",data.i);
    data.f=25.5;
    printf("\nf = %f",data.f);
    printf("\nafter i = %d",data.i); // garbadge value
    return 0;
}