/* Merge two sorted arrays (server logs) into a single sorted array */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int p, q, i, j, k;
    scanf("%d", &p);

    int a[100], b[100], c[200];

    for(i = 0; i < p; i++)
        scanf("%d", &a[i]);

    scanf("%d", &q);

    for(i = 0; i < q; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;
    k = 0;

    while(i < p && j < q)
    {
        if(a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < p)
        c[k++] = a[i++];

    while(j < q)
        c[k++] = b[j++];

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
