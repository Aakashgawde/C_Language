#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();

    return 0;
}

void goodMorning()
{
    printf("goodMorning\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("goodAfternoon\n");
    goodNight();
}
void goodNight()
{
    printf("goodNight\n");
}