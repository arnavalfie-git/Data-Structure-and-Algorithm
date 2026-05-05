/* Min Heap using array with insert, extractMin, peek */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x, sz = 0;
    scanf("%d", &n);

    int h[100];
    char op[20];

    for(i = 0; i < n; i++)
    {
        scanf("%s", op);

        if(strcmp(op, "insert") == 0)
        {
            scanf("%d", &x);

            int j = sz++;
            h[j] = x;

            while(j > 0 && h[(j - 1) / 2] > h[j])
            {
                int t = h[j];
                h[j] = h[(j - 1) / 2];
                h[(j - 1) / 2] = t;
                j = (j - 1) / 2;
            }
        }
        else if(strcmp(op, "extractMin") == 0)
        {
            if(sz == 0)
            {
                printf("-1\n");
                continue;
            }

            printf("%d\n", h[0]);

            h[0] = h[--sz];

            int j = 0;

            while(1)
            {
                int l = 2 * j + 1;
                int r = 2 * j + 2;
                int s = j;

                if(l < sz && h[l] < h[s]) s = l;
                if(r < sz && h[r] < h[s]) s = r;

                if(s == j) break;

                int t = h[j];
                h[j] = h[s];
                h[s] = t;

                j = s;
            }
        }
        else if(strcmp(op, "peek") == 0)
        {
            if(sz == 0)
                printf("-1\n");
            else
                printf("%d\n", h[0]);
        }
    }

    return 0;
}
