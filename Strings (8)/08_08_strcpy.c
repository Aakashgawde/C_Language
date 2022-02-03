#include <stdio.h>
#include <string.h>
int main()
{
    char *st = "this";
    char st2[45];
    strcpy(st2, st); // strcpy(target,source)
    printf("Now the st2 is %s", st2);
    return 0;
}

//program 2
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char source[] = "Sayonara";
//     char target[20];
//     strcpy(target, source);
//     printf("source string = %s\n", source);
//     printf("target string = %s\n", target);

//     return 0;
// }