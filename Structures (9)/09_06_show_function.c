#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("\nThe code of employee is: %d", emp.code);
    printf("\nThe salary of employee is: %f", emp.salary);
    printf("\nThe name of employee is: %s", emp.name);
    emp.code = 34;
}
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Aakash");
    show(e1);
    printf("\nThe code of employee is: %d", e1.code);

    return 0;
}