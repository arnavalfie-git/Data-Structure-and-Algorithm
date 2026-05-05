/* Calculate the sum of primary diagonal elements of a matrix */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int m, n, i, j, s = 0;
    scanf("%d %d", &m, &n);

    int a[50][50];

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < m && i < n; i++)
        s += a[i][i];

    printf("%d", s);

    return 0;
}
