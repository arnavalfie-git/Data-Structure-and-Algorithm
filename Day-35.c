/* Queue using array: enqueue and display */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    scanf("%d", &n);

    int a[100], f = 0, r = -1;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[++r]);
    }

    for(i = f; i <= r; i++)
        printf("%d ", a[i]);

    return 0;
}
