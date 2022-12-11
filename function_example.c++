#include<stdio.h>
int function_example(int a, int b)   //User-defined function
{
    return a*b;
}
int main()
{
    int x = 5, y = 10;
    int result = function_example(x, y);  //use of User-defined function
    printf("Multiple of %d and %d is: %d", x, y, result);
    return 0;
}
