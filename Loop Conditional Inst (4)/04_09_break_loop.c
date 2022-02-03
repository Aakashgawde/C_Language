#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("the value of i is %d\n", i);
        if (i == 4)
        {
            break;
        }
        i++;
    } while (i < 10);

    // program 2 -->
    // int num, i;
    // printf("enter the number\n");
    // scanf("%d", &num);

    // i = 2;
    // while (i <= num - 1)
    // {
    //     if (num % i == 0)
    //     {
    //         printf("not a prime number\n");
    //         break;
    //     }
    //     i++;
    // }
    // if (i == num)
    // {
    //     printf("prime number\n");
    // }

    // program 3 -->
    // int i = 1, j = 1;
    // while (i++ <= 100)
    // {
    //     while (j++ <= 200)
    //     {
    //         if (j == 150)
    //             break;
    //         else
    //             printf("%d%d\n", i, j);
    //     }
    // }

    return 0;
}