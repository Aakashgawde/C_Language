#include<stdio.h>
void modify(int a);
int main(){
int a = 2;
printf("\na=%d (from main,before calling the function )",a);
modify(a);
printf("\n\na=%d (from main,after calling the function )",a);

return 0;
}
void modify(int a)
{
    a *= 3;
    printf("\n\na=%d (from the function,after being modified)",a);
    return;
}