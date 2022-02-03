// #include <stdio.h>

// int main()
// {
// label:
//     printf("we are inside the label\n");
//     goto end;
//     printf("Hello World\n");
//     goto label;
// end:
//     printf("we are at end\n");
//     return 0;
// }

//program 2 // Use of goto keyword
// #include <stdio.h>

// int main()
// {
//     int num;
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d\n", i);
//         for (int j = 0; j < 8; j++)
//         {
//             printf("Enter the number,enter 0 to exit\n");
//             scanf("%d", &num);
//             if (num == 0)
//             {
//                 goto end;
//             }
//         }
//     }
// end:
//     return 0;
// }

//program 3
#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        if (i == 2)
            goto next;
        printf("%d\n", i);
    }
next:
    printf("We are in Hell");
    return 0;
}