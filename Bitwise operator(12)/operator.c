#include<stdio.h>
int main(){
    int a = 10, b=6;
    printf("%d\n",a&b);//bitwise AND
    printf("%d\n",a|b);//bitwise OR
    printf("%d\n",a^b);//bitwise XOR
    printf("%d\n",a&b && b+1 || 0 && b++);
return 0;
}