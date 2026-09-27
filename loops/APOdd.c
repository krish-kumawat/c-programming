// que - display this AP -1,3,5,7..upto 'n' terms.
#include <stdio.h>
int main()
{
    int n; // itni baaar loop chlega
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= (2 * n) - 1; i = i + 2) // Nth term is 2n-1
    {
        printf("%d\n", i);
    }
    return 0;
}