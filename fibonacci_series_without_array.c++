#include <stdio.h>

void next_fibonacci(int a, int b, int *ptr)
{

    if (*ptr > 0)
    {
        printf(", %d", a + b);
        *ptr--;
        next_fibonacci(b, a + b, ptr);
    }
}
int main()
{
    int a = 0, b = 1, n;
    scanf("%d", &n);
    int *ptr = &n;
    *ptr = *ptr - 2;
    printf("%d, %d", a, b);
    next_fibonacci(a, b, ptr);
    // printf("sum is: %d",fibonacci_func());
    return 0;
}