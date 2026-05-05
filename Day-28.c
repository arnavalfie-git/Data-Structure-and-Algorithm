/* Create and traverse a circular linked list */

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

    int n, i, x;
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

    if(t != NULL)
        t->n = h;

    p = h;

    if(p != NULL)
    {
        do
        {
            printf("%d ", p->d);
            p = p->n;
        } while(p != h);
    }

    return 0;
}
