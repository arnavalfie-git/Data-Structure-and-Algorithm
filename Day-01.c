/* Write a C program to insert an element x at a given 1-based position pos in an array of n integers */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, pos, x, i;
    scanf("%d", &n);

    int a[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);
    scanf("%d", &x);

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;

    for(i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
