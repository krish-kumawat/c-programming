#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    int r = 0, original, ld;
    original = n;

    while (n != 0)
    {
        ld = n % 10;
        r = r * 10 + ld;

        n = n / 10;
    }

    int sum = original + r;
    printf(" sum of original and reverse is %d", sum);
    return 0;
}