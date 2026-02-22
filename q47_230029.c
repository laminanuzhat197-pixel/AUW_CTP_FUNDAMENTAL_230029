#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", add(x, y));
}
