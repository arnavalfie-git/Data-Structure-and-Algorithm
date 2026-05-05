/* Queue using linked list with enqueue and dequeue */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int d;
    struct node *n;
};

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, x;
    scanf("%d", &n);

    struct node *f = NULL, *r = NULL, *p;
    char op[20];

    while(n--)
    {
        scanf("%s", op);

        if(strcmp(op, "enqueue") == 0)
        {
            scanf("%d", &x);

            p = (struct node*)malloc(sizeof(struct node));
            p->d = x;
            p->n = NULL;

            if(f == NULL)
                f = r = p;
            else
            {
                r->n = p;
                r = p;
            }
        }
        else if(strcmp(op, "dequeue") == 0)
        {
            if(f == NULL)
                printf("-1\n");
            else
            {
                p = f;
                printf("%d\n", p->d);
                f = f->n;
                if(f == NULL) r = NULL;
                free(p);
            }
        }
    }

    return 0;
}
