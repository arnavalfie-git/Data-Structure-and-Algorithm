/* Rotate linked list to the right by k places */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node *n;
};

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x, k;
    scanf("%d", &n);

    struct node *h = NULL, *t = NULL, *p;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);

        p = (struct node*)malloc(sizeof(struct node));
        p->d = x;
        p->n = NULL;

        if(h == NULL)
            h = t = p;
        else
        {
            t->n = p;
            t = p;
        }
    }

    scanf("%d", &k);

    if(n == 0) return 0;

    k = k % n;

    if(k == 0)
    {
        p = h;
        while(p != NULL)
        {
            printf("%d ", p->d);
            p = p->n;
        }
        return 0;
    }

    t->n = h;

    int step = n - k;
    p = h;

    for(i = 1; i < step; i++)
        p = p->n;

    h = p->n;
    p->n = NULL;

    p = h;

    while(p != NULL)
    {
        printf("%d ", p->d);
        p = p->n;
    }

    return 0;
}
