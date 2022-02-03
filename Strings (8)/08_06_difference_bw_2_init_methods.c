#include <stdio.h>

int main()
{
    char *ptr = "Aakash Bhai"; //this will print Akshay bhai
    // char ptr[] = "Aakash bhai"; // this will not print Akshay Bhai
    ptr = "Akshay Bhai";
    printf("%s", ptr);
    return 0;
}