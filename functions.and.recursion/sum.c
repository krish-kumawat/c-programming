// que - write sum of 2 digit whi the help of function
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("enter first valuse");
    scanf("%d", &a);
    printf("enter second valuse");
    scanf("%d", &b);
    int s = a + b;
    printf("%d", s);

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}