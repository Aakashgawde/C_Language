#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    printf("the value of x and b before swap  is %d and %d\n", x, y);
    //wrong_swap(x, y); // will not work due to call bye value
    swap(&x, &y); // will work due to call bye reference
    printf("the value of x and b after swap is %d and %d\n", x, y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
