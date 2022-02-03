#include <stdio.h>

int main()
{
    // int age;
    // int vippass = 0;
    // //  vippass = 1;

    // printf("enter your age\n");
    // scanf("%d", &age);

    // if(age<=70 && age>=18)
    // // if ((age <= 70 && age >= 18) || !(vippass == 1))
    // {
    //     printf("you are above 18 and below 70 you can drive\n");
    // }

    // else
    // {
    //     printf("you cannot drive\n");
    // }

int m1, m2, m3, m4, m5, per;

printf("enter marks in five subjects\n");
scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
per = (m1 + m2 + m3 + m4 + m5)/500 * 100;

if(per>=60)
    printf("first division\n");

if((per>=50) && (per<60))
    printf("second division\n");

if((per>=40) && (per<50))
    printf("third division\n");

if(per<40)
    printf("fail\n");

    return 0;
}