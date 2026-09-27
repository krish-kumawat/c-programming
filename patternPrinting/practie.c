#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int oddsum = 0;
    int evensum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evensum = evensum + arr[i];
        }
        else
        {
            oddsum = oddsum + arr[i];
        }
    }
    printf("the even sum is %d", evensum);
    printf("the odd sum is %d", oddsum);

    return 0;
}