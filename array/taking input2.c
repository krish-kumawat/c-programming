#include <stdio.h>
int main()
{
    int arr[4];
    for (int i = 0; i <= 3; i++)
    {
        printf("enter the value %d", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[2]);

    return 0;
}