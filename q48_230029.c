#include <stdio.h>

void check_even_odd(int x)
{
    if (x % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main(void)
{
    int n;
    scanf("%d", &n);

    check_even_odd(n);
}
