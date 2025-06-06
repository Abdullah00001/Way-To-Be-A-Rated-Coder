#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && C <= A)
    {
        B > C ? printf("%d %d", C, A) : printf("%d %d", B, A);
    }
    else if (B >= A && C <= B)
    {
        A >= C ? printf("%d %d", C, B) : printf("%d %d", A, B);
    }
    else if (C >= A && B <= C)
    {
        A >= B ? printf("%d %d", B, C) : printf("%d %d", A, C);
    }
    else
    {
        if (C == A && C == B)
        {
            printf("%d %d", A, C);
        }
        else
        {
            printf("%d %d", A, C);
        }
    };

    return 0;
};