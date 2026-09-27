// 1234
// 1234
// 1234
// 1234
// print thr given pattern ?
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}