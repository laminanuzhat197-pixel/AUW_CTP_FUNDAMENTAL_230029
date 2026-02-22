#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n >= 1 && n <= 100)
    {
        printf("In range\n");
    }
    else
    {
        printf("Out of range\n");
    }
}
