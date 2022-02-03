// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ///sizeof operator in C
//     // printf("The size of int on my pc is %d\n",sizeof(int));
//     // printf("The size of char on my pc is %d\n",sizeof(char));
//     // printf("The size of float on my pc is %d\n",sizeof(float));
//     ptr =(int*) malloc(6 * sizeof(int));
//     for(int i=0;i<6;i++)
//     {
//         printf("Enter the value of %d element: \n",i);        
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<6;i++)
//     {
//         printf("The value of %d element is: %d\n",i,ptr[i]);
//     }
// return 0;
// }

// Float pointer malloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float*) malloc(5 * sizeof(float));

    for(int i=0;i<5;i++)
    {
        printf("Enter the float values of %d element: \n",i);
        scanf("%f",&ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The values of %d element is: %f\n",i,ptr[i]);
    }
return 0;
}