#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void str_sort(int sz, char str[])
{
    int i, j;
    for (j = 0; j < sz; j++)
    {
        for (i = 0; i < sz - 1; i++)
        {
            if (str[i] > str[i + 1])
            {
                swap(&str[i + 1], &str[i]);
            }
        }
    }
    printf("%s", str);
}
int main()
{
    int size;
    char str_input[100];
    scanf("%s", str_input);
    size = strlen(str_input);
    str_sort(size, str_input);
    return 0;
}