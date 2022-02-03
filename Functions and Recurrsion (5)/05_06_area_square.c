#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("enter the value of side\n");
    scanf("%d", &side);
    printf("the value of area is %f", pow(side, 2));
    return 0;
}

//program 2
// #include <stdio.h>
// float square(float);
// int main()
// {
//     float a, b;
//     printf("enter any number\n");
//     scanf("%f", &a);
//     b = square(a);
//     printf("square of %f is %f\n", a, b);
//     return 0;
// }

// float square(float x)
// {
//     float y;
//     y = x * x;
//     return (y);
// }