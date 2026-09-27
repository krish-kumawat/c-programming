// display the AP -100,97,94..upto all terms which are positive
/*#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 100; i >= 103 - (3 * n); i = i - 3)
    {
        if (i > 0)
        {
            printf("%d", i);
        }
    }
    return 0;
}
    i solve this que with out maths...*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int a = 100;
    for (int i = 1; a > 0; i++)
    {
        printf("%d", a);
        a = a - 3;
    }

    return 0;
}
