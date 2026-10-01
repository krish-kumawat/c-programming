// que.- given the length and breadth of a rectangle write a prigram to find whether the are of thr rectangle is grater than its perimeter.
#include <stdio.h>
int main()
{
    int l;
    printf("enter length");
    scanf("%d", &l);
    int b;
    printf("enter breth");
    scanf("%d", &b);
    int area = l * b;
    printf("area : %d\n", area);
    int perimeter = 2 * (l + b);
    printf("perimeter : %d\n", perimeter);
    if (area > perimeter)
    {
        printf("area is grater than perimeter");
    }
    else
    {
        printf("perimeter is grater than area");
    }
    return 0;
}
