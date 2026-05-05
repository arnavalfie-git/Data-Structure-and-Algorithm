/* Check whether a given matrix is symmetric */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int m, n, i, j, f = 1;
    scanf("%d %d", &m, &n);

    int a[50][50];

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    if(m != n)
        f = 0;
    else
    {
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    f = 0;
                    break;
                }
            }
            if(f == 0) break;
        }
    }

    if(f)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}
