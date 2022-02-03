#include <stdio.h>
#include <string.h>
int main()
{
    char st1[45] = "Hello";
    char *st2 = "Aakash";
    strcat(st1, st2);
    printf("Now the st1 is %s", st1);
    return 0;
}

//program 2
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char source[] = "Amigo";
//     char target[30] = "Hello";
//     strcat(target, source);
//     printf("source string = %s\n", source);
//     printf("target string = %s\n", target);

//     return 0;
// }