#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of elements:");
    scanf("%d", &number);
    printf("%d%d\n", n1, n2); //printing 0 and 1

    //loop started from 2 because 0 and 1 are already printed
    for (i = 2; i < number; ++i)
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}