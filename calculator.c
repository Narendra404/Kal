#include <stdio.h>
#define clear() printf("\e[1;1H\e[2J")

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i + 1);
        clear();
    }

    printf("Completed.\n");

    return 0;
}
