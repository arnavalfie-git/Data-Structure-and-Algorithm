/* Implement linear search to find key k in an array and count comparisons */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, k, i, c = 0, pos = -1;
    scanf("%d", &n);

    int a[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for(i = 0; i < n; i++)
    {
        c++;
        if(a[i] == k)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", c);

    return 0;
}
