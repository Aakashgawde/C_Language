#include <stdio.h>
#include <math.h>
long long convert(int n)
{
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary: %lld", convert(n));

    return 0;
}