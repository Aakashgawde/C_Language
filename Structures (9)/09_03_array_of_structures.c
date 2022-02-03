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
    struct employee google[100];
    google[0].code = 100;
    google[0].salary = 100.45;
    strcpy(google[0].name, "Aakash");

    google[1].code = 200;
    google[1].salary = 200.45;
    strcpy(google[1].name, "Akshay");

    google[2].code = 300;
    google[2].salary = 300.45;
    strcpy(google[2].name, "Eknath");

    printf("Done"); 

    return 0;
}