#include<stdio.h>
#include<stdlib.h>
int main(){
    char sentence[1000];

    FILE *ptr;
    ptr= fopen("program.txt","w");

    if(ptr== NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence,sizeof(sentence),stdin);
    fprintf(ptr,"%s",sentence);
    fclose(ptr);
return 0;
}