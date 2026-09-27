#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int r = 0, original = 0;
    original = n;
    while (n != 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    if (r == original)
    {
        printf("the number is pelitrome");
    }
    else
    {
        printf("not pelitrone");
    }

    return 0;
}
