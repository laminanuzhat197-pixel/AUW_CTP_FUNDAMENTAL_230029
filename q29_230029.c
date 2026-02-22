#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is larger\n", a);
    }
    else if (b > a)
    {
        printf("%d is larger\n", b);
    }
    else
    {
        printf("Both are equal\n");
    }
}
