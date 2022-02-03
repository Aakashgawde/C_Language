#include <stdio.h>

int main()
{
    int principal=100, rate=4, years=1;
    int simpleInterest = (principal * rate * years)/100;

    printf("the value of simple Interest is %d", simpleInterest);

    return 0;
}