#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();

    return 0;
}

void goodMorning()
{
    printf("goodMorning\n");
}
void goodAfternoon()
{
    printf("goodAfternoon\n");
}
void goodNight()
{
    printf("goodNight\n");
}