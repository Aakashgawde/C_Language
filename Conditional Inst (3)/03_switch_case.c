#include <stdio.h>

int main()
{
    // program 1
    // int rating;
    // printf("enter your rating (1-5)\n");
    // scanf("%d", &rating);
    // switch (rating)
    // {
    // case 1:
    //     printf("your rating is 1\n");
    //     break;
    // case 2:
    //     printf("your rating is 2\n");
    //     break;
    // case 3:
    //     printf("your rating is 3\n");
    //     break;
    // case 4:
    //     printf("your rating is 4\n");
    //     break;
    // case 5:
    //     printf("your rating is 5\n");
    //     break;
    // default:
    //     printf("invalid rating\n");
    // }

    // program 2
    // int i = 2;
    // switch (i)
    // {
    // case 1:
    //     printf("i am in case 1\n");
    //     break;
    // case 2:
    //     printf("i am in case 2\n");
    //     break;

    // case 3:
    //     printf("i am in case 3\n");
    //     break;

    // default:
    //     printf("i am in default\n");
    // }

    // program 3
    char ch;

    printf("enter any one of the alphabet a,b, or c\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("a as in asher\n");
        break;

    case 'b':
    case 'B':
        printf("b as in brain\n");
        break;

    case 'c':
    case 'C':
        printf("c as in cookie\n");
        break;

    default:
        printf("wish you knew what are alphabets\n");
    }

    // program 4
    // int k;
    // float j = 2.0;
    // switch (k = j + 1)
    // {
    // case 3:
    //     printf("trapped\n");
    //     break;
    // default:
    //     printf("caught\n");
    // }

    // program 5
    // int i = 1;
    // switch (i - 2)
    // {
    // case -1:
    //     printf("feeding fish\n");
    // case 0:
    //     printf("weeding grass\n");
    // case 1:
    //     printf("mending roof\n");
    // default:
    //     printf("just to survie\n");
    // }

    //program 6
    // int choice, num, i, j, fact = 1, isPrime = 0;
    // printf("Enter your choice = ");
    // printf("press 1 for factorial of a number,");
    // printf("press 2 to check prime or not,");
    // printf("press 3 to check odd or even");
    // scanf("%d", &choice);
    // switch (choice)
    // {
    // case 1:
    //     printf("Enter a number = ");
    //     scanf("%d", &num);
    //     for (i = 1; i <= num; i++)
    //         fact *= num;
    //     printf("Factorial of a number is %d", fact);
    //     break;
    // case 2:
    //     printf("Enter a number = ");
    //     scanf("%d", &num);
    //     for (i = 2; i <= num / 2; ++i)
    //     {
    //         if (num % i == 0)
    //         {
    //             isPrime = 1;
    //             break;
    //         }
    //     }

    //     if (isPrime == 0)
    //         printf("%d is a prime number.", num);
    //     else
    //         printf("%d is not a prime number.", num);
    //     break;
    // case 3:
    //     printf("Enter a number = ");
    //     scanf("%d", &num);
    //     if (num % 2 == 0)
    //         printf("%d is odd", num);
    //     else
    //         printf("%d is even", num);
    //     break;
    // case 4:
    //     printf("Thanks for using");
    //     exit(1);
    //     break;
    // }
    // if (choice != 1 || choice != 2 || choice != 3 || choice != 4)
    //     printf("You entered a wrong choice. Try Again!!");

    // nested switch statement
    /* local variable definition */
    // int a = 100;
    // int b = 200;

    // switch (a)
    // {

    // case 100:
    //     printf("This is part of outer switch\n", a);

    //     switch (b)
    //     {
    //     case 200:
    //         printf("This is part of inner switch\n", a);
    //     }
    // }

    // printf("Exact value of a is : %d\n", a);
    // printf("Exact value of b is : %d\n", b);

    return 0;
}