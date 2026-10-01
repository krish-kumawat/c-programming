// concept = dono me se condition saticfied honi chaiye (||)
#include <stdio.h>
int main()
{
    int n;
    printf("enter a no :");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 2 == 0)
    {
        printf("the no is divisible by 5 or 3");
    }
    else
    {
        printf("the no is not  divisible by 5 or 3");
    }
    return 0;
}