/* Circular queue using array with enqueue and dequeue */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, m, i;
    scanf("%d", &n);

    int a[100], f = 0, r = -1, size = n;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[++r]);
    }

    scanf("%d", &m);

    f = (f + m) % size;

    for(i = 0; i < size; i++)
        printf("%d ", a[(f + i) % size]);

    return 0;
}
