// calculate the sum or all thr elements in the given array
#include <stdio.h>
int main()
{
    int arr[4];
    int sum = 0;
    for (int i = 0; i <= 3; i++)
    {
        printf("enter the value%d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 3; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}