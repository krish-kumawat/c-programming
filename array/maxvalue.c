// find max value
#include <stdio.h>
int main()
{
    // int arr[7] = {3, 53.21, 64, 93, 307, 538, 11};
    // int max = -1;
    // for (int i = 0; i <= 6; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // printf("%d", max);
    // return 0;
    int arr[7] = {3, 53.21, 64, 93, 307, 538, 11};
    int min = 538;
    for (int i = 0; i <= 6; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}
// }
