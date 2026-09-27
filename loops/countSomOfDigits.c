// write a program sum of a given number of a given number
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int sum = 0;
    int ld = 0;
    while (n != 0)
    {
        ld = n / 10;
        sum = sum + ld;
    }
    printf("sum of the digits is %d", sum);
    return 0;
}