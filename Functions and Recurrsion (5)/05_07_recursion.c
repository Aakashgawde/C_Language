#include <stdio.h>
int factorial(int x);

int main()
{
    int a = 5;
    printf("the value of factorial %d is %d\n", a, factorial(a));

    return 0;
}

int factorial(int x)
{
    printf("calling factorial(%d)\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

//program 2

// #include <stdio.h>
// int rec(int);
// int main()
// {
//     int a, fact;

//     printf("Enter the number\n");
//     scanf("%d", &a);

//     fact = rec(a);
//     printf("Factorial value of %d is %d\n", a, fact);

//     return 0;
// }
// int rec(int x)
// {
//     int f;
//     if (x == 1 || x == 0)
//         return 1;
//     else
//         f = x * rec(x - 1);
//     return f;
// }
