#include<stdio.h>

int main(){
// for(int a = 0; a<10;a++)
// {
//     printf("the value of a is %d\n", a+1);
// }


// program 2 -->
// int p, n, count;
// float r, si;

// for(count = 1; count <= 3; count++)
// {
//     printf("enter value of p, n and r\n");
//     scanf("%d%d%f", &p, &n, &r);
//     si = p * n * r / 100;
//     printf("simple interest = Rs.%f\n", si);
// }


// program 3 -->
// int i;
// for(i = 0;++i<=10;)
// {
//     printf("%d\n", i);
    
    
// }

// program 4 -->
int r, c, sum;
for (r = 1;r <= 3;r++) // outer loop
{
    for(c = 1;c <= 2;c++) // inner loop
    {
        sum = r + c;
        printf("r = %d c = %d sum = %d\n", r,c,sum);
    }
}


    return 0;
}