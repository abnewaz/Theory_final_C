#include <stdio.h>

int main()
{
    int n, m, i, j, k, sum = 0, res;
    scanf("%d %d", &n, &m);
    int mat_array[n][m];
    int mat_arr[n][m];
    int matrix_res[n][m] = {0};
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat_array[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat_arr[i][j]);
        }
    }

    /* for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", mat_array[i][j]);
        }
        printf("\n");
    }
    printf("\n\n"); */
   /*  for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", mat_arr[i][j]);
        }
        printf("\n");
    } */
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                matrix_res[i][j] = mat_array[i][j] + mat_arr[i][j];
            }
        }

            printf("\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", matrix_res[i][j]);
        }
        printf("\n");
    }
}