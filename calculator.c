#include <stdio.h>
#define clear() printf("\e[1;1H\e[2J")
#define N 20

void func(void);

int main(void)
{
        func();

    return 0;
}

void func(void)
{
    for (int i = 0; i < N; i++)
    {
        printf("* ");
        for (int j = 0; j < ((2 * N) - 2); j++)
        {
            if((i == 0) || (i == 4) || (i == (N - 1)))
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("*\n");
    }
}
