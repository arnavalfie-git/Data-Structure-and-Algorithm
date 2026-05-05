/* Rotate an array to the right by k positions */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, k, i;
    scanf("%d", &n);

    int a[100], t[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < n; i++)
        t[(i + k) % n] = a[i];

    for(i = 0; i < n; i++)
        printf("%d ", t[i]);

    return 0;
}
