#include <stdio.h>

int main()
{
    int marks[4]; // allocate space for 4 int

    printf("enter the value of marks for students 1:\n");
    scanf("%d", &marks[0]);
    printf("enter the value of marks for students 2:\n");
    scanf("%d", &marks[1]);
    printf("enter the value of marks for students 3:\n");
    scanf("%d", &marks[2]);
    printf("enter the value of marks for students 4:\n");
    scanf("%d", &marks[3]);

    printf("you have entered %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}