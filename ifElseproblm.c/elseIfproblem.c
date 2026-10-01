// else if concept
// take input percentages of a student and print thr grade according to marks:
// not use nest loops
#include <stdio.h>
int main()
{
    int n;
    printf("enter percentage");
    scanf("%d", &n);
    if (n > 80)
    {
        printf("A grade");
    }
    else if (n > 60)
    {
        printf("b grade");
    }
    else if (n > 40)
    {
        printf("c grade");
    }
    else
    {

        printf("d grade");
    }
    return 0;
}