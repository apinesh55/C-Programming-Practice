#include <stdio.h>

typedef struct student
{
    char *name;
    int age;
}student;

int main()
{
    student s1={"Apinesh",21};
    student *ptr;
    ptr=&s1;

    printf("Name - %s",(*ptr).name); // (*ptr).name = ptr->name
    printf("\nAge - %d",ptr->age);

    return 0;
}