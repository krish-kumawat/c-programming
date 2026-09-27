// ncr= n!/R!*(n-r)!
// without using function
#include <stdio.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d", &n);

    int r;
    printf("enter r");
    scanf("%d", &r);
    int Nfact = 1;
    for (int i = 1; i <= n; i++)
    {
        Nfact = Nfact * i;
    }
    int Rfact = 1;
    for (int i = 1; i <= r; i++)
    {
        Rfact = Rfact * i;
    }
    int Nmrfact = 1;
    for (int i = 1; i <= n - r; i++)
    {
        Nmrfact = Nmrfact * i;
    }

    int ncr = Nfact / (Rfact * Nmrfact);
    printf("%d", ncr);

    return 0;
}