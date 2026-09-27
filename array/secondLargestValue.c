#include <stdio.h>
#include <limits.h>

int main()
{

    int arr[6] = {-2, -3, -7, -19, -100, -8};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);

    return 0;
}