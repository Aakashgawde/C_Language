#include <stdio.h>

int main()
{
    // Naive way to create 4 ints
    // int marks1, marks2, marks3,marks4;
    // marks1 = 34;
    // marks2 = 45;
    // marks3 = 67;
    // marks4 = 98;

    int marks[4];
    marks[0] = 34;
    marks[1] = 45;
    marks[2] = 67;
    marks[3] = 98;
    printf("marks are %d\n", marks[0]);
    printf("marks are %d\n", marks[1]);
    printf("marks are %d\n", marks[2]);
    printf("marks are %d\n", marks[3]);

    return 0;
}