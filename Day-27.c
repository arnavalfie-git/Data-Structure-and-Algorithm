/* Find intersection point (by value) of two linked lists */

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

    int n, m, i, x;
    scanf("%d", &n);

    struct node *h1 = NULL, *t1 = NULL, *h2 = NULL, *t2 = NULL, *p;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        p = (struct node*)malloc(sizeof(struct node));
        p->d = x;
        p->n = NULL;

        if(h1 == NULL)
            h1 = t1 = p;
        else
        {
            t1->n = p;
            t1 = p;
        }
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &x);
        p = (struct node*)malloc(sizeof(struct node));
        p->d = x;
        p->n = NULL;

        if(h2 == NULL)
            h2 = t2 = p;
        else
        {
            t2->n = p;
            t2 = p;
        }
    }

    int c1 = 0, c2 = 0;

    p = h1;
    while(p != NULL)
    {
        c1++;
        p = p->n;
    }

    p = h2;
    while(p != NULL)
    {
        c2++;
        p = p->n;
    }

    struct node *a = h1, *b = h2;

    if(c1 > c2)
    {
        for(i = 0; i < c1 - c2; i++)
            a = a->n;
    }
    else
    {
        for(i = 0; i < c2 - c1; i++)
            b = b->n;
    }

    while(a != NULL && b != NULL)
    {
        if(a->d == b->d)
        {
            printf("%d", a->d);
            return 0;
        }
        a = a->n;
        b = b->n;
    }

    printf("No Intersection");

    return 0;
}
