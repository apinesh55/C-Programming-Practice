#include <stdio.h>
#include <string.h>
int main()
{
    char a[]={'A','B','I','\0'};
    printf("%s",a);
    char b[20],c[20];
    printf("\n Enter the String: ");
    gets(b); // gets = get string
    printf("\nLength: %d",strlen(b));
    printf("\nUpper case: %s",strupr(b));
    printf("\nLower case: %s",strlwr(b));
    printf("\nCopy a vlue to c: %s",strcpy(c,b));
    printf("\nCompare b,a: %d",strcmp(b,a)); //if it is 0, no differents
    strcat(a,b);
    printf("\nConcatenation: %s",a);
    printf("\nReverse: %s",strrev(b));

    return 0;
}