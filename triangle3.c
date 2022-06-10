#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int f = a;
    for (int i = 1; i < d; i++)
    {
        f = f * b + c;
    }
    printf("%d", f);

}
