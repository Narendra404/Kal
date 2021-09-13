#include <stdio.h>

#ifdef _WIN32
#include <conio.h>
#else
#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i + 1);
        clrscr();
    }

    printf("Completed.\n");

    return 0;
}
