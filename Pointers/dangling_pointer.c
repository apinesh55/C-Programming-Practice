#include <stdio.h>
#include <stdlib.h>

int * address()
{
    int a=10;
    return &a;
}

int main ()
{
    int *ptr = NULL;
    ptr=address();
    printf("%d",*ptr);
    return 0;
}