#include <stdio.h>
// entry loop
int main()
{

    // program 1 -->
    int a;
    scanf("%d", &a);
    while (a < 10)
    {

        // a = 11;
        // while (a > 10)//this two lines lead to an infinite loop

        printf(" the value of a is %d\n", a);
        a++;
    }

    // program 2 -->
    // int p, n, count;
    // float r, si;

    // count = 1;

    // while (count <= 3)
    // {
    //     printf("enter the values of p, n and r\n");
    //     scanf("%d%d%f", &p, &n, &r);
    //     si = p * n * r / 100;
    //     printf("simple interest = rs. %f\n", si);

    //     count++;
    // }

    // program 3 -->
    // int i = 1;
    // while(i <= 10){
    //     printf("%d\n", i);
    // }

    // program 4 -->
    // float a = 10.0;
    // while(a <= 10.5)
    // {
    //     printf("raindrops on roses....");
    //     printf("....and whiskers on kittens\n");
    //   a++;

    // }

    // program 5 -->
    // int i = 1;  // first method
    // while (i <= 10)
    // {
    //     printf("the value of i is %d\n", i);
    //     i++;
    // }

    // int i = 0;  // second method
    // while (i++ < 10)
    // {
    //     printf("the value of i is %d\n", i);

    // }

    // int i = 0; // third method
    // while (++i <= 10)
    // {
    //     printf("the value of i is %d\n", i);
    // }

    // program 6 -->
    // int n = 0;
    // while(n <= 100)
    // {
    //     printf("Sorry\n");
    //     n++;
    // }

    return 0;
}