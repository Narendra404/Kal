#include <stdio.h>
#define clear() printf("\e[1;1H\e[2J")

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("* ");
        for (int j = 0; j < 18; j++)
        {
            if((i == 0) || (i == 9))
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
    return 0;
}
