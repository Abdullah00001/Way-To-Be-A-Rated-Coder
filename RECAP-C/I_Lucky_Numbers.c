#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= 10 && N <= 99)
    {
        int second = N % 10;
        int first = N / 10;
        if ((second != 0 && first % second == 0) || (first != 0 && second % first == 0))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
};