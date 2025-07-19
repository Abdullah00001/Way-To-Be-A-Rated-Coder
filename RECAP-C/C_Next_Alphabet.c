#include <stdio.h>

int main()
{
    char N;
    scanf("%c", &N);
    if (N >= 97 && N <= 122)
    {
        if (N == 122)
        {
            printf("%c", N - 25);
        }
        else
        {
            printf("%c", N + 1);
        }
    };
    return 0;
};