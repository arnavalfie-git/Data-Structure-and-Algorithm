/* Reverse a queue using a stack */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    scanf("%d", &n);

    int q[100], s[100], top = -1;

    for(i = 0; i < n; i++)
        scanf("%d", &q[i]);

    for(i = 0; i < n; i++)
        s[++top] = q[i];

    for(i = 0; i < n; i++)
        q[i] = s[top--];

    for(i = 0; i < n; i++)
        printf("%d ", q[i]);

    return 0;
}
