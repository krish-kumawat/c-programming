// given a matrix having 0-1 only find the row with maximum number of 1's
#include <stdio.h>
int main()
{
    int maxcount = 0;
    int maxindx = -1;
    int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 1, 1, 1}};
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            maxindx = i;
        }
    }
    printf("%d", maxindx);

    return 0;
}