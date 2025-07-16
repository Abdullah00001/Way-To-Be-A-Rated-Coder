#include <stdio.h>

int main()
{
    int password = 1999;

    int userInput;
    while (scanf("%d", &userInput) != EOF)
    {
        if (password == userInput)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
            continue;
        }
    }

    return 0;
};