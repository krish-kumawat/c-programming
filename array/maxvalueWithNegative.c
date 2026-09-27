#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {
        -3,
        -53,
        -21,
        -64,
        -3,
        -07,
        -38,
    };
    int max = INT_MIN; // sabse chota number
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}