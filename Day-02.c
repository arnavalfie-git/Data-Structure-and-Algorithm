/* Write a C program to delete the element at a given 1-based position pos from an array of n integers */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, pos, i;
    scanf("%d", &n);

    int a[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    for(i = 0; i < n - 1; i++)
        printf("%d ", a[i]);

    return 0;
}
