/* Check whether a given square matrix is an Identity Matrix */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, j, f = 1;
    scanf("%d", &n);

    int a[50][50];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(a[i][j] != 1)
                {
                    f = 0;
                    break;
                }
            }
            else
            {
                if(a[i][j] != 0)
                {
                    f = 0;
                    break;
                }
            }
        }
        if(f == 0) break;
    }

    if(f)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}
