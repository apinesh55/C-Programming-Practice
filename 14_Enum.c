#include <stdio.h>

int main()
{
    enum level{LOW, MEDIUM, HIGH};
    enum level a;
    a=MEDIUM;
    printf("%d",a);
    return 0;
}