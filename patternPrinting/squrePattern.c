#include <stdio.h>
int main()
{
    int n;
    printf("enter  number of raws :");
    scanf("%d", &n);
    int m;
    printf("enter number of coloum :");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}