#include <stdio.h>
int main()
{
    int a, i;
    scanf_s("%d", &a);
    if (a > 13)
    {
        printf("%d ", 113 - a);
        printf("1");
    }
    else
    {
        printf("%d ", 13 - a);
        printf("3");
    }
    return 0;
}