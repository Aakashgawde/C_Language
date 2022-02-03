#include<stdio.h>
int main(){
    int intType;
    char charType;
    float floatType;
    printf("int: %zu bytes",sizeof(intType));
    printf("\nchar: %zu bytes",sizeof(charType));
    printf("\nfloat: %zu bytes",sizeof(floatType));
return 0;
}