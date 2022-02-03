#include<stdio.h>

int main(){
    int i = 0, sum = 0, n = 10;

    do{
       printf("the value of sum(1 to 10) is %d\n", sum); 
       i++;
       sum+=i;
    }while(i<=n);
    return 0;
}