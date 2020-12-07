#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Rus");
    int n, m;

    int u = 0, d = 0, r = 0, l = 0, j = 0,i = 0, count = 1;

    int **arr;

    printf("Введите размер массива m*n\n");
    scanf("%d%d", &m, &n);

    arr= (int**) malloc(m*sizeof(int*));

    for (i = 0; i < m; i++)
      arr[i] = (int*) malloc(n*sizeof(int));

    printf ("Первый вариант:\n");

    for (i=0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = abs(i-j) + 1;
            printf("%3d", arr[i][j]);
        }

        printf("\n");
    }
    i = j = 0;

    while (count <= m * n)
    {
        arr[i][j] = count;
        if (i == u && j < n - r - 1)
            j++;


        else if (j == n - r - 1 && i < m - d - 1)
            i++;


        else if (i == m - d - 1 && j > l)
            j--;

        else
           i--;

        if ((i == u + 1) && (j == l) && (l!= n - r - 1))
        {
            u++;
            d++;
            l++;
            r++;
        }
        count++;
    }

    printf ("Второй вариант:\n");
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
            printf("%3d", arr[i][j]);
        printf("\n");
    }
return 0;
}
