/* Find two elements whose sum is closest to zero */

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, l, r, x, y;
    scanf("%d", &n);

    int a[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), cmp);

    l = 0;
    r = n - 1;

    int s, m = 1000000000;

    while(l < r)
    {
        s = a[l] + a[r];

        if(abs(s) < abs(m))
        {
            m = s;
            x = a[l];
            y = a[r];
        }

        if(s < 0)
            l++;
        else
            r--;
    }

    printf("%d %d", x, y);

    return 0;
}
