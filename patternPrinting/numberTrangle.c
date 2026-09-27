#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j = j++)
        {
            printf("%d", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}