/* Given an array of n integers, reverse the array in-place using two-pointer approach */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, t;
    scanf("%d", &n);

    int a[100];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int l = 0, r = n - 1;

    while(l < r)
    {
        t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
