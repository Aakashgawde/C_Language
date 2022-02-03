#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee aakash = {100,34.23,"aakash"};
    printf("Code is: %d \n",aakash.code);
    printf("Salary is: %f \n",aakash.salary);
    printf("Name is: %s \n",aakash.name);  



    return 0;
}