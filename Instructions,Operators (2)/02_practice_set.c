#include <stdio.h>

int main()
{
    int a;
    int b = a;
    int v = 3 ^ 3; //valid
    printf("%d\n", v);

    char dt = '2';  //valid
    float d = (3.0/8-2);
    printf("%f\n", d);// double return,
    // Q.3
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("divisibility test returns %d\n", num % 97);

    //q4.
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 6/3 - 3+1
    // 2 - 3+1
    // -1 + 1
    // 0
    printf("the value of result is %d", result);
    //q.5
    //ans = b) floating no.

    return 0;
}