#include<stdio.h>
int fact_func(int n)
{
    if(n>0)
    {
        return n*fact_func(n-1);
    }
    else{
        return 1;
    }
    
}
    
int main()
{
    //int number = 4;
    //int res = fact_func(number);
    printf("factorial is: %d",fact_func(3));
    return 0;
}