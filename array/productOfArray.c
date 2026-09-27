#include <stdio.h>
int main()
{
    int arr[4];
    int product = 1;
    for (int i = 0; i <= 3; i++)
    {
        printf("enter the value%d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 3; i++)
    {
        product = product * arr[i];
    }
    printf("%d", product);
    return 0;
}