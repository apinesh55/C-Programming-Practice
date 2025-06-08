#include <stdio.h>

typedef struct student
{
    char *name;
    int age;
    float per;
}student;

int main ()
{
    student s1;
    s1.name="Apinesh Tharmarasa";
    s1.age=21;
    s1.per=85.25;

    printf("Name - %s",s1.name);
    printf("\nAge - %d",s1.age);
    printf("\nName - %0.2f",s1.per);

    return 0;
}