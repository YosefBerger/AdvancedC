#include <stdio.h>

void PauseTerminal();

int main()
{
    printf("Hello, world!\n");
    PauseTerminal();
    return 0;
}

void PauseTerminal()
{
    printf("Press the enter key to continue...");
    getchar();
}
