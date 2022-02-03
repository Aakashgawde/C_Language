#include <stdio.h>
#include <string.h>

 typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;

void show(emp emp1)
{
    printf("\nThe code of employee is: %d", emp1.code);
    printf("\nThe salary of employee is: %f", emp1.salary);
    printf("\nThe name of employee is: %s", emp1.name);

}

int main()
{
    //declairing e1 and ptr
    emp e1;
    emp *ptr;

    //pointing ptr to e1
    ptr = &e1;

    //Set the member values for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Aakash");
    show(e1);


    return 0;
}