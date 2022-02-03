// #include <stdio.h>
// int main()
// {
//     int rows, coef = 1, space, i, j;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for (i = 0; i < rows; i++)
//     {
//         for (space = 1; space <= rows - i; space++)
//             printf("  ");

//         for (j = 0; j <= i; j++)
//         {
//             if (j == 0 || i == 0)
//                 coef = 1;
//             else
//                 coef = coef * (i - j + 1) / j;

//             printf("%4d", coef);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//program 2
#include <stdio.h>
int main()
{
    int num, r, c, sp, i = 1;
    printf("Enter any number : ");
    scanf("%d", &num);
    for (r = 1; r <= num; r++)
    {
        for (sp = 1; sp <= num - r; sp++)
            printf(" ");
        for (c = 1; c <= r; c++, i++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}
