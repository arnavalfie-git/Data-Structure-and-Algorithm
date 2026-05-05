/* Priority Queue using array (smaller value = higher priority) */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x, sz = 0;
    scanf("%d", &n);

    int a[100];
    char op[10];

    for(i = 0; i < n; i++)
    {
        scanf("%s", op);

        if(strcmp(op, "insert") == 0)
        {
            scanf("%d", &x);
            a[sz++] = x;
        }
        else if(strcmp(op, "delete") == 0)
        {
            if(sz == 0)
            {
                printf("-1\n");
                continue;
            }

            int j, mi = 0;

            for(j = 1; j < sz; j++)
                if(a[j] < a[mi])
                    mi = j;

            printf("%d\n", a[mi]);

            for(j = mi; j < sz - 1; j++)
                a[j] = a[j + 1];

            sz--;
        }
        else if(strcmp(op, "peek") == 0)
        {
            if(sz == 0)
            {
                printf("-1\n");
                continue;
            }

            int j, mi = 0;

            for(j = 1; j < sz; j++)
                if(a[j] < a[mi])
                    mi = j;

            printf("%d\n", a[mi]);
        }
    }

    return 0;
}
