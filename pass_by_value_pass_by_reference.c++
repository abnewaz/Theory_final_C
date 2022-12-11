#include<stdio.h>

void pass_by_value(int n)
{
    printf("%d\n",n);
}
void pass_by_ref(int* n)
{
    printf("%d\n",*n);
}
int main()
{
    int n=10;
    int*ptr = &n;
    pass_by_value(n);
    pass_by_ref(ptr);
    return 0;
}