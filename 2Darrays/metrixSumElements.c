#include <stdio.h>
int main()
{

    int r;
    printf("enter number if raws :");
    scanf("%d", &r);
    int c;

    printf("enter number of coloums :");
    scanf("%d", &c);
    printf("enter all the elements :");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf(" sum is %d ", sum);

    return 0;
}
