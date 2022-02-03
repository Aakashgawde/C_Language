#include <stdio.h>

int main()
{

    // int skip = 5, i = 0;
    // while (i < 10)
    // {
    //     i++;
    //     if (i != skip)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // program 2 -->
    // int i, j;

    // for (i = 1; i <= 2; i++)
    // {
    //     for (j = 1; j <= 2; j++)
    //     {
    //         if (i == j)
    //             continue;

    //         printf("%d%d\n", i, j);
    //     }
    // }

    //program 3 --->
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}