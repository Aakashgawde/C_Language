#include <stdio.h>

int main()
{

    // // example = 1
    // float bs, gs, da, hra;

    // printf("enter the basic salary\n");
    // scanf("%f", &bs);

    // if (bs < 1500)
    // {
    //     hra = bs * 10 / 100;
    //     da = bs * 90 / 100;
    // }
    // else
    // {
    //     hra = 500;
    //     da = bs * 98 / 100;
    // }
    // gs = bs + hra + da;
    // printf("gross salary is %f\n", gs);

    // // example = 2
    // float cp, sp, p, l;
    // printf("enter cost price and selling price\n");
    // scanf("%f%f", &cp, &sp);

    // p = sp - cp; // profit = selling price - cost price
    // l = cp - sp; // loss = cost price - selling price

    // if(p > 0)
    // printf("the seller has made a profit of rs.%f\n", p);
    // if(l > 0)
    // printf("the seller has made a loss of rs.%f\n", l);
    // if(p==0)
    // printf("there is no profit n loss\n");

    // example 3

    //     int i, j, k;

    //     for (i = 1; i <= 3; i++)
    //     {
    //         for (j = 1; j <= 3; j++)
    //         {
    //             for (k = 1; k <= 3; k++)
    //             {
    //                 if (i == 3 && j == 3 && k == 3)
    //                     goto out;
    //                 else
    //                     printf("%d%d%d\n", i, j, k);
    //             }
    //         }
    //     }
    // out:
    //     printf("out of the loops at last\n");

    // example 4

    // int c, sub;
    // printf("entered the class and number of subjects failed:");
    // scanf("%d%d", &c, &sub);

    // switch (c)
    // {
    // case 1:
    //     if (sub <= 3)
    //         printf("students gets total of %d grace marks\n", 5 * sub);
    //     else
    //         printf("no grace marks\n");
    //     break;
    // case 2:
    //     if (sub <= 2)
    //         printf("students gets total of %d grace marks/n", 2 * sub);
    //     else
    //         printf("no grace marks\n");
    //     break;

    // case 3:
    //     if (sub == 1)
    //         printf("students gets 5 grace marks\n");
    //     else
    //         printf("no grace marks\n");
    //     break;

    // default:
    //     printf("wrong class entered\n");
    // }

    //program 5

    // #include <stdio.h>

    //     int num = 1;
    //     if (num < 10)
    //     {
    //         if (num == 1)
    //         {
    //             printf("The value is:%d\n", num);
    //         }
    //         else
    //         {
    //             printf("The value is greater than 1");
    //         }
    //     }
    //     else
    //     {
    //         printf("The value is greater than 10");
    //     }

    //     return 0;

    //if elseif else

    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if the two integers are equal.
    if (number1 == number2)
    {
        printf("Result: %d = %d", number1, number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2)
    {
        printf("Result: %d > %d", number1, number2);
    }

    //checks if both test expressions are false
    else
    {
        printf("Result: %d < %d", number1, number2);
    }

    return 0;
}