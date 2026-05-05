/* Count frequency of each distinct element in an array */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, j, c;
    scanf("%d", &n);

    int a[100], v[100] = {0};

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(v[i] == 1) continue;

        c = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                c++;
                v[j] = 1;
            }
        }

        printf("%d:%d ", a[i], c);
    }

    return 0;
}
