#include <stdio.h>
#include <stdlib.h>

int main()
{
    int goals;

    printf("enter the number of goals scored against india\n");
    scanf("%d", &goals);

    if (goals <= 5)
        goto sos;
    else
    {
        printf("about time soccer players learnt C\n");
        printf("and said goodbye! adieu! to soccer\n");
        exit(1); // terminates program execution
    }

sos:
    printf("to err is human!\n ");
    return 0;
}
