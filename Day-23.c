/* Merge two sorted linked lists using dynamic memory allocation */

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

    struct node *h1 = NULL, *t1 = NULL, *h2 = NULL, *t2 = NULL, *p, *h3 = NULL, *t3 = NULL;

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

    struct node *a = h1, *b = h2;

    while(a != NULL && b != NULL)
    {
        p = (struct node*)malloc(sizeof(struct node));

        if(a->d <= b->d)
        {
            p->d = a->d;
            a = a->n;
        }
        else
        {
            p->d = b->d;
            b = b->n;
        }

        p->n = NULL;

        if(h3 == NULL)
            h3 = t3 = p;
        else
        {
            t3->n = p;
            t3 = p;
        }
    }

    while(a != NULL)
    {
        p = (struct node*)malloc(sizeof(struct node));
        p->d = a->d;
        p->n = NULL;

        if(h3 == NULL)
            h3 = t3 = p;
        else
        {
            t3->n = p;
            t3 = p;
        }

        a = a->n;
    }

    while(b != NULL)
    {
        p = (struct node*)malloc(sizeof(struct node));
        p->d = b->d;
        p->n = NULL;

        if(h3 == NULL)
            h3 = t3 = p;
        else
        {
            t3->n = p;
            t3 = p;
        }

        b = b->n;
    }

    p = h3;

    while(p != NULL)
    {
        printf("%d ", p->d);
        p = p->n;
    }

    return 0;
}
