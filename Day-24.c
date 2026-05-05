/* Delete first occurrence of a key in a linked list */

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

    int n, i, x, key;
    scanf("%d", &n);

    struct node *h = NULL, *t = NULL, *p, *prev = NULL;

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

    scanf("%d", &key);

    p = h;

    while(p != NULL)
    {
        if(p->d == key)
        {
            if(p == h)
                h = h->n;
            else
                prev->n = p->n;

            free(p);
            break;
        }
        prev = p;
        p = p->n;
    }

    p = h;

    while(p != NULL)
    {
        printf("%d ", p->d);
        p = p->n;
    }

    return 0;
}
