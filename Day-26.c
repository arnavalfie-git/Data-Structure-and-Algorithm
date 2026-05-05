/* Doubly linked list insertion and forward traversal */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node *p, *n;
};

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x;
    scanf("%d", &n);

    struct node *h = NULL, *t = NULL, *q;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);

        q = (struct node*)malloc(sizeof(struct node));
        q->d = x;
        q->n = NULL;
        q->p = t;

        if(h == NULL)
            h = t = q;
        else
        {
            t->n = q;
            t = q;
        }
    }

    q = h;

    while(q != NULL)
    {
        printf("%d ", q->d);
        q = q->n;
    }

    return 0;
}
