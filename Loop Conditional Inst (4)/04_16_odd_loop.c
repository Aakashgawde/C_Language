#include <stdio.h>

int main()
{
    // char another;
    // int num;

    // do
    // {
    //     printf("enter a number\n");
    //     scanf("%d",&num);
    //     printf("square of %d is %d\n", num, num * num);
    //     printf("want to enter another number y/n\n");
    //     fflush(stdin); // standard input device i.e keyboard
    //     scanf("%c", &another);
    // }while (another == 'y');

 // program 2 -->
    // char another = 'y';
    // int num;

    // for (;another=='y';)
    // {
    //     printf("enter a number\n");
    //     scanf("%d", &num);
    //     printf("square of %d is %d\n", num, num * num);
    //     printf("want to enter another number y/n\n");
    //     fflush(stdin); // standard input device i.e keyboard
    //     scanf("%c", &another);
    // }

 // program 3 -->
 char another = 'y';
    int num;

    while (another=='y')
    {
        printf("enter a number\n");
        scanf("%d", &num);
        printf("square of %d is %d\n", num, num * num);
        printf("want to enter another number y/n\n");
        fflush(stdin); // standard input device i.e keyboard
        scanf("%c", &another);
    }


    return 0;
}