#include <stdio.h>

struct student
{
    char *name;
    int age;
    float per;
};

int main ()
{
    struct student s1,s2;
    s1.name="Apinesh Tharmarasa";
    s1.age=21;
    s1.per=85.25;

    printf("Name - %s",s1.name);
    printf("\nAge - %d",s1.age);
    printf("\nName - %0.2f",s1.per);

    printf("\nEnter your name -");
    scanf("%s",s2.name);
    printf("Enter your age - ");
    scanf("%d",&s2.age);
    printf("Enter your percentage - ");
    scanf("%f",&s2.per);

    printf("Name - %s",s2.name);
    printf("\nAge - %d",s2.age);
    printf("\nName - %0.2f",s2.per);

    return 0;
}