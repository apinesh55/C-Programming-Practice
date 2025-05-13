#include <stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p;
    p=&a;
    printf("Size of integer: %d\n",sizeof(int));
    printf("Size of Array a: %d\n",sizeof(a));
    printf("No of elements in a: %d\n",sizeof(a)/sizeof(int));
    printf("Address of a: %d\n",&a);
    printf("Value of p: %d\n",p);
    printf("Element 1: %d\n",*p);
    p++;
    printf("Element 2: %d\n",*p);
    p++;
    printf("Element 3: %d\n",*p);
    printf("Element 4: %d\n",*++p);
    printf("Element 5: %d\n",*++p);

    return 0;
}