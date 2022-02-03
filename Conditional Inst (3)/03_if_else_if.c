#include <stdio.h>

int main()
{
    // program 1
    int num;
    printf("enter your number\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("your number is 1\n");
    }
    else if (num == 2)
    {
        printf("your number is 2\n");
    }
    else if (num == 3)
    {
        printf("your number is 3\n");
    }
    else
    {
        printf("its not 1, 2 or 3\n");
    }

    // program 2
    // char sex, ms;
    // int age;

    // printf("enter age, sex, marital status\n");
    // scanf("%d%c%c", &age, &sex, &ms);

    // if ((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) || (ms == 'U' && sex == 'F' && age > 25))
    //     printf("driver should be ensured\n");

    // else
    //     printf("driver should not be insured\n");

    // program 3
    // char g;
    // int yos, qual, sal=0;

    // printf("enter gender, year of service and qualification(0 = G, 1 = PG)\n");
    // scanf("%c%d%d", &g, &yos, &qual);

    // if (g=='m' && yos>=10 && qual == 1)
    //     sal = 15000;
    // else if((g=='m' && yos>=10 && qual == 0) || (g=='m' && yos<10 && qual == 1))
    //     sal = 10000;
    // else if (g=='m' && yos<10 && qual == 0)
    //     sal = 7000;
    // else if (g=='f' && yos>=10 && qual == 1)
    //     sal = 12000;
    // else if (g=='f' && yos>=10 && qual == 0)
    //     sal = 9000;
    // else if (g=='f' && yos<10 && qual == 1)
    //     sal= 10000;
    // else if (g=='f' && yos<10 && qual == 0)
    //     sal = 6000;

    //     printf("salary of employee = %d\n", sal);
    return 0;
}