#include <stdio.h>
// sum is a fuction which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int c;
    c = sum(2, 15); // function call
    printf("the value of c is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

// program 2
// int calsum(int x, int y, int z);
// int main()
// {
//     int a, b, c, sum;
//     printf("enter any three number\n");
//     scanf("%d%d%d", &a, &b, &c);
//     sum = calsum(a, b, c);
//     printf("sum = %d\n", sum);

//     return 0;
// }
// int calsum(int x, int y, int z)
// {
//     int d;
//     d = x + y + z;
//     return d;
// }