#include <stdio.h>
int combination(int x)
{
    int fect = 1;
    for (int i = 1; i <= x; i++)
    {
        fect = fect * i;
    }
    return fect;
}

int main()
{
    int n;
    printf("enter n \n");
    scanf("%d", &n);

    int r;
    printf("enter r \n");
    scanf("%d", &r);
    int a = combination(n) / (combination(r) * combination(n - r));

    printf("%d ", a);
    return 0;
}