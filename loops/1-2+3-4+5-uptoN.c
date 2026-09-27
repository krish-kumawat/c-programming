// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number");
//     scanf("%d", &n);

//     int sum = 0;
//     //odd number=>add
//     //even number=>subtrack
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum = sum + i;
//         }
//         else
//         {
//             sum = sum - i;
//         }
//     }
//     printf("sum of the numbers %d", sum);
//     return 0;
// }
// second method
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int sum = 0;
    if (n % 2 == 0)
    {
        sum = -n / 2;
    }
    else
    {

        sum = -n / 2 + n;
    }
    printf("%d", sum);
    return 0;
}