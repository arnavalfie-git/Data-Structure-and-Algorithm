/* Deque using array with push_front, push_back, pop_front, pop_back, front, back, size, empty */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, x;
    scanf("%d", &n);

    int a[200], f = 100, r = 99;
    char op[20];

    while(n--)
    {
        scanf("%s", op);

        if(strcmp(op, "push_front") == 0)
        {
            scanf("%d", &x);
            a[--f] = x;
        }
        else if(strcmp(op, "push_back") == 0)
        {
            scanf("%d", &x);
            a[++r] = x;
        }
        else if(strcmp(op, "pop_front") == 0)
        {
            if(f > r)
                printf("-1\n");
            else
                printf("%d\n", a[f++]);
        }
        else if(strcmp(op, "pop_back") == 0)
        {
            if(f > r)
                printf("-1\n");
            else
                printf("%d\n", a[r--]);
        }
        else if(strcmp(op, "front") == 0)
        {
            if(f > r)
                printf("-1\n");
            else
                printf("%d\n", a[f]);
        }
        else if(strcmp(op, "back") == 0)
        {
            if(f > r)
                printf("-1\n");
            else
                printf("%d\n", a[r]);
        }
        else if(strcmp(op, "size") == 0)
        {
            printf("%d\n", (f > r) ? 0 : (r - f + 1));
        }
        else if(strcmp(op, "empty") == 0)
        {
            printf("%d\n", (f > r));
        }
    }

    return 0;
}
