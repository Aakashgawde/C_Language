#include<stdio.h>
int main(){
    FILE *ptr;
    int num = 45;
    ptr = fopen("generated.txt","w");
    fprintf(ptr,"The number is %d\n",num);
    fprintf(ptr,"Thanx for using fprintf");
    fclose(ptr);

return 0;
}