#include <stdio.h>

int main()
{
    // program 1
    // int a;
    // printf("enter a\n");
    // scanf("%d", &a);
    // // one liner
    // (a < 5) ? printf("a is less than 5") : printf("a is not less than 5");

    // program 2
    char ch;
    printf("enter the character\n");
    scanf("%c", &ch);
    ch >= 97 && ch <= 122 ? printf("character entered is lower case\n") : printf("character entered is not lower case\n");

    return 0;
}