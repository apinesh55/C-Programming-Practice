#include <stdio.h>

struct student
{
    char *name;
    int age;
};

int main()
{
    struct student s1[2];
    s1[0] = (struct student){"APINESH", 21};
    
    s1[1].name="SURIYA";
    s1[2].age=25;

    printf("-------------------------------");
    printf("\nName: %s",s1[0].name);
    printf("\nAge: %d",s1[0].age);
    printf("\n-------------------------------");
    printf("\nName: %s",s1[1].name);
    printf("\nAge: %d",s1[2].age);
    
    return 0;
}