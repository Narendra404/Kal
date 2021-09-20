#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define clear() printf("\e[1;1H\e[2J")
#define N 64

void Screen();
void input();
void keys(int k, int n, int m, char ch[]);
void ClearStack();
int PushChar(char ch);
void PopChar();
void Line();
int ValidChar(char ch);
void Keypad();

char InputStack[10] = "nnnnnnnnnn";
char KeyStack[36] = "n1n2n3n+nn4n5n6n-nn7n8n9n*nndn0n=n/n";
int AnsFlag = 0;

int main(void)
{
    Screen();

    return 0;
}

void Screen()
{
    Line(N);
    printf("\n");
    Line(N);
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        Line(2);
        keys(i, 0, 10, InputStack);
        Line(2);
        printf("\n");
    }

    Keypad();
}

void Line(int n)
{        
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
}


void Keypad()
{
    Line(N);
    printf("\n");
    Line(N);
    printf("\n");

    int n = 0, m;

    for (int i = 0; i < 4; i++)
    {
        m = n + 9;

        for (int j = 0; j < 5; j++)
        {
            Line(5);
            keys(j, n, m, KeyStack);
            Line(5);

            printf("\n");
        }

        printf("\n");

        n = m;
    }

    Line(N);
    printf("\n");
    Line(N);
    printf("\n");
}

void keys(int k, int n, int m, char ch[])
{
    for (int i = n; i < m; i++)
    {
        switch(ch[i])
        {
            case '0':
            switch(k)
            {
                case 0:
                printf("$***$ ");
                break;
                case 1:
                printf("$   $ ");
                break;
                case 2:
                printf("$   $ ");
                break;
                case 3:
                printf("$   $ ");
                break;
                case 4:
                printf("$***$ ");
                break;
            }
            break;

            case '1':
            switch(k)
            {
                case 0:
                printf("    $ ");
                break;
                case 1:
                printf("    $ ");
                break;
                case 2:
                printf("    $ ");
                break;
                case 3:
                printf("    $ ");
                break;
                case 4:
                printf("    $ ");
                break;
            }
            break;

            case '2':
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

            case '3':
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

            case '4':
            switch(k)
            {
                case 0:
                printf("$   $ ");
                break;
                case 1:
                printf("$   $ ");
                break;
                case 2:
                printf("$***$ ");
                break;
                case 3:
                printf("    $ ");
                break;
                case 4:
                printf("    $ ");
                break;
            }
            break;

            case '5':
            switch(k)
            {
                case 0:
                printf("$**** ");
                break;
                case 1:
                printf("$     ");
                break;
                case 2:
                printf("$***$ ");
                break;
                case 3:
                printf("    $ ");
                break;
                case 4:
                printf("****$ ");
                break;
            }
            break;

            case '6':
            switch(k)
            {
                case 0:
                printf("$**** ");
                break;
                case 1:
                printf("$     ");
                break;
                case 2:
                printf("$***$ ");
                break;
                case 3:
                printf("$   $ ");
                break;
                case 4:
                printf("$***$ ");
                break;
            }
            break;

            case '7':
            switch(k)
            {
                case 0:
                printf("****$ ");
                break;
                case 1:
                printf("    $ ");
                break;
                case 2:
                printf("    $ ");
                break;
                case 3:
                printf("    $ ");
                break;
                case 4:
                printf("    $ ");
                break;
            }
            break;

            case '8':
            switch(k)
            {
                case 0:
                printf("$***$ ");
                break;
                case 1:
                printf("$   $ ");
                break;
                case 2:
                printf("$***$ ");
                break;
                case 3:
                printf("$   $ ");
                break;
                case 4:
                printf("$***$ ");
                break;
            }
            break;

            case '9':
            switch(k)
            {
                case 0:
                printf("$***$ ");
                break;
                case 1:
                printf("$   $ ");
                break;
                case 2:
                printf("$***$ ");
                break;
                case 3:
                printf("    $ ");
                break;
                case 4:
                printf("****$ ");
                break;
            }
            break;

            case '+':
            switch(k)
            {
                case 0:
                printf("  &   ");
                break;
                case 1:
                printf("  &   ");
                break;
                case 2:
                printf("$$$$$ ");
                break;
                case 3:
                printf("  &   ");
                break;
                case 4:
                printf("  &   ");
                break;
            }
            break;

            case '-':
            switch(k)
            {
                case 0:
                printf("      ");
                break;
                case 1:
                printf("      ");
                break;
                case 2:
                printf("&&&&& ");
                break;
                case 3:
                printf("      ");
                break;
                case 4:
                printf("      ");
                break;
            }
            break;

            case '*':
            switch(k)
            {
                case 0:
                printf("#   # ");
                break;
                case 1:
                printf(" # #  ");
                break;
                case 2:
                printf("  $   ");
                break;
                case 3:
                printf(" # #  ");
                break;
                case 4:
                printf("#   # ");
                break;
            }
            break;

            case '/':
            switch(k)
            {
                case 0:
                printf("    / ");
                break;
                case 1:
                printf("   /  ");
                break;
                case 2:
                printf("  /   ");
                break;
                case 3:
                printf(" /    ");
                break;
                case 4:
                printf("/     ");
                break;
            }
            break;

            case '=':
            switch(k)
            {
                case 0:
                printf("      ");
                break;
                case 1:
                printf("&&&&& ");
                break;
                case 2:
                printf("      ");
                break;
                case 3:
                printf("&&&&& ");
                break;
                case 4:
                printf("      ");
                break;
            }
            break;

            case 'd':
            switch(k)
            {
                case 0:
                printf("$&&   ");
                break;
                case 1:
                printf("$  &  ");
                break;
                case 2:
                printf("$   & ");
                break;
                case 3:
                printf("$  &  ");
                break;
                case 4:
                printf("$&&   ");
                break;
            }
            break;

            case 'n':
            switch(k)
            {
                case 0:
                printf("      ");
                break;
                case 1:
                printf("      ");
                break;
                case 2:
                printf("      ");
                break;
                case 3:
                printf("      ");
                break;
                case 4:
                printf("      ");
                break;
            }
            break;
        }
    }
}

void ClearStack()
{
    for (int i = 0; i < 10; i++)
    {
        InputStack[i] = 'n';
    }
}

int PushChar(char ch)
{
    if (InputStack[0] == 'n')
    {
        for (int i = 1; i < 10; i++)
        {
            InputStack[i - 1] = InputStack[i];
        }

        InputStack[9] = ch;

        return 1;
    }
    else
    {
        return 0;
    }
}
void input()
{
    if (AnsFlag == 1)
    {
        ClearStack();    
    }

    char ch;
    do
    {   
        scanf("%c", &ch);
        
        if (ValidChar(ch))
        {
            printf("Character entered is not valid.\n");
            printf("Valid Characters include 0 to 9, +, -, *, /, =, d, q.\n");
        }
    }
    while(ValidChar(ch));

    if (isdigit(ch))
    {
        if (!PushChar(ch))
        {
            printf("Maximum capacity to hold a number has been reached.\n");
            printf("Please enter a smaller number.\n");

            ClearStack();
        }
    }
    else if (isalpha(ch))
    {
        if (ch == 'd')
        {
            PopChar();
        }

        if (ch == 'q')
        {
            exit(0);
        }
    }
    else
    {
        ClearStack();
        PushChar(ch);
    }
}

void PopChar()
{
    for (int i = 0; i < 9; i++)
    {
        InputStack[i + 1] = InputStack[i];
    }

    InputStack[0] = 'n';
}

int ValidChar(char ch)
{
    switch(ch)
    {
        case '1':
        return 0;
        break;

        case '2':
        return 0;
        break;

        case '3':
        return 0;
        break;

        case '4':
        return 0;
        break;

        case '5':
        return 0;
        break;

        case '6':
        return 0;
        break;

        case '7':
        return 0;
        break;

        case '8':
        return 0;
        break;

        case '9':
        return 0;
        break;

        case '0':
        return 0;
        break;

        case '+':
        return 0;
        break;

        case '-':
        return 0;
        break;

        case '*':
        return 0;
        break;

        case '/':
        return 0;
        break;

        case '=':
        return 0;
        break;

        case 'd':
        return 0;
        break;

        case 'q':
        return 0;
        break;

        default :
        return 1;
        break;
    }
}


