/* Polynomial using linked list and print in standard form */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int c, e;
    struct node *n;
};

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    scanf("%d", &n);

    struct node *h = NULL, *t = NULL, *p;

    for(i = 0; i < n; i++)
    {
        p = (struct node*)malloc(sizeof(struct node));
        scanf("%d %d", &p->c, &p->e);
        p->n = NULL;

        if(h == NULL)
            h = t = p;
        else
        {
            t->n = p;
            t = p;
        }
    }

    p = h;

    while(p != NULL)
    {
        if(p->e == 0)
            printf("%d", p->c);
        else if(p->e == 1)
            printf("%dx", p->c);
        else
            printf("%dx^%d", p->c, p->e);

        if(p->n != NULL)
            printf(" + ");

        p = p->n;
    }

    return 0;
}
