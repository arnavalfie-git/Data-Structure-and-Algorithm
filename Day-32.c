/* Push n elements to stack, pop m elements, print remaining stack */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, m, i;
    scanf("%d", &n);

    int a[100], top = -1;

    for(i = 0; i < n; i++)
        scanf("%d", &a[++top]);

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        if(top != -1)
            top--;
    }

    for(i = top; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
