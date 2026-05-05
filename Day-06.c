/* Given a sorted array, remove duplicates in-place and print unique elements */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, j;
    scanf("%d", &n);

    int a[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if(n > 0)
    {
        j = 0;

        for(i = 1; i < n; i++)
        {
            if(a[i] != a[j])
                a[++j] = a[i];
        }

        for(i = 0; i <= j; i++)
            printf("%d ", a[i]);
    }

    return 0;
}
