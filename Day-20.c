/* Count number of subarrays with sum equal to zero */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, j, s, c = 0;
    scanf("%d", &n);

    int a[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        s = 0;
        for(j = i; j < n; j++)
        {
            s += a[j];
            if(s == 0)
                c++;
        }
    }

    printf("%d", c);

    return 0;
}
