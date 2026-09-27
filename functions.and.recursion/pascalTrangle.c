#include <stdio.h>
int fectorial(int x)
{
    int fect = 1;
    for (int i = 1; i <= x; i++)
    {
        fect = fect * i;
    }
    return fect;
}
int combination(int n, int r)
{
    int ncr = fectorial(n) / (fectorial(r) * fectorial(n - r));
    return ncr;
}

int main()
{
    int n;
    printf("enter n ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf("%d", icj);
        }
        printf("\n");
    }

    return 0;
}