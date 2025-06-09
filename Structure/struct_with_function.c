#include <stdio.h>

struct student
{
    char *name;
    int age;
};

void print(struct student s1)
{
    printf("Name: %s",s1.name);
    printf("\nAge: %d",s1.age);
}

int main()
{
    struct student s1={"APINESH",21};
    print(s1);
    return 0;
}