#include <stdio.h>

int main()
{
    float s1,s2,s3,s4,s5,tm,av;
    printf("\nEnter the Subjects Marks : ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    tm=s1+s2+s3+s4+s5;
    av=(tm/500)*100;
    printf("\nTotal Marks : %d",(int)tm);
    printf("\nAverage Marks : %0.2f",av);
    return 0;
}