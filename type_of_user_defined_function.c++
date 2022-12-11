#include<stdio.h>
void func_print_without_argument_and_without_return_value()   //user-defined function without argument and without return value
{
    printf("Anisa");
}
int func_mult_without_argument_and_with_return_value()   //user-defined function without argument and with return value
{
    int a = 5, b = 10;
    return a*b;
}
void func_mult_with_argument_and_without_return_value(int a, int b)    //user-defined function with argument and without return value
{
    printf("%d",a*b);
}
int func_sum_with_argument_and_with_return_value(int a, int b)    //user-defined function with argument and with return value
{
    return a+b;    
}
int main()
{
    int x = 10, y = 50;
    func_print_without_argument_and_without_return_value();   //user-defined function without argument and without return value
    printf("\n");
    printf("%d",func_mult_without_argument_and_with_return_value());   //user-defined function without argument and with return value
    printf("\n");
    func_mult_with_argument_and_without_return_value(x, y);    //user-defined function with argument and without return value
    printf("\n");
    printf("%d",func_sum_with_argument_and_with_return_value(x, y));   //user-defined function with argument and with return value
    return 0;
}