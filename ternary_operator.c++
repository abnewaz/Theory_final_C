#include<stdio.h>
void func(int x, int y, int* p, int* q)
{
    *p = x>y?x:y;
    *q = x<y?x:y;
}
int main()
{
    int a = 15, b = 12;
    int large, small;
    func(a, b, &large, &small);
    printf("Maximum of two numbers: %d",large);
    return 0;
}