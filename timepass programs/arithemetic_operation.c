#include<stdio.h>
int main(){
int a,b,add,sub,mul;
float div;

printf("Enter the two values: ");
scanf("%d%d",&a,&b);

add=a+b;
sub=a-b;
mul=a*b;
div=a/b;

printf("Addition of the numbers is %d\n",add);
printf("Subtraction of the numbers is %d\n",sub);
printf("Multiplication of the numbers is %d\n",mul);
printf("Dividing 1st number from 2nd is %f\n",div);
return 0;
}