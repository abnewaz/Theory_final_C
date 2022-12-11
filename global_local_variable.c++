#include<stdio.h>
int global_variable = 100;

int function_sum()
{
    int local_variable = 30;
    int sum = global_variable + local_variable;
    return sum;
}
int main()
{
    printf("sum is: %d",function_sum());
    return 0;
}