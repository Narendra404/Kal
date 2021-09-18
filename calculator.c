#include <stdio.h>
#define clear() printf("\e[1;1H\e[2J")
#define N 80

void Screen();
void keys(int k);

char InputStack[8];

int main(void)
{
        func();

    return 0;
}

void Screen()
{
    InputStack[0] = '2';
    InputStack[1] = '3';

    for (int k = 0; k < 2; k++)
    {   
        for (int i = 0; i < N; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("** ");
        keys(i);
        printf("**\n");
    }
}

void keys(int k)
{
    for (int i = 0; i < 2; i++)
    {
        switch((int)InputStack[i])
        {
            case 50:
            switch(k)
            {
                case 0:
                printf("***** ");
                break;
                case 1:
                printf("    $ ");
                break;
                case 2:
                printf("$***$ ");
                break;
                case 3:
                printf("$     ");
                break;
                case 4:
                printf("***** ");
                break;
            }
            break;

            case 51:
            switch(k)
            {
                case 0:
                printf("***** ");
                break;
                case 1:
                printf("    $ ");
                break;
                case 2:
                printf("$***$ ");
                break;
                case 3:
                printf("    $ ");
                break;
                case 4:
                printf("***** ");
                break;
            }
            break;
        }
    }
}

