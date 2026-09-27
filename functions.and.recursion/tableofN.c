#include <stdio.h>
void printTable(int n);

int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printTable(n);

    return 0;
}
void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d", i * n);
    }
}