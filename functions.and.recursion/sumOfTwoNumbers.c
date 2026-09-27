#include <stdio.h>
int son(int a, int b)
{
    return a + b;
}
int main()
{
    int a;
    printf("enter a ");
    scanf("%d", &a);

    int b;
    printf("enter b");
    scanf("%d", &b);

    int sum = son(a, b);
    printf("the sum of number is %d", sum);

    return 0;
}