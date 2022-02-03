#include <stdio.h>
#include <conio.h>
#define PI 3.1415 // symbolic constant
int main()
{
    float rad = 5;
    float area, circum;
    area = PI * rad * rad;
    circum = 2 * PI * rad;
    printf("area of circle = %f\n", area);
    printf("circumference of circle = %f\n", circum);
    return 0;
}