/* BST search */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node *l, *r;
};

struct node* nn(int x)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->d = x;
    p->l = p->r = NULL;
    return p;
}

struct node* ins(struct node* r, int x)
{
    if(r == NULL) return nn(x);

    if(x < r->d)
        r->l = ins(r->l, x);
    else
        r->r = ins(r->r, x);

    return r;
}

int sr(struct node* r, int x)
{
    if(r == NULL) return 0;

    if(r->d == x) return 1;

    if(x < r->d)
        return sr(r->l, x);
    else
        return sr(r->r, x);
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x, key;
    scanf("%d", &n);

    struct node* r = NULL;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        r = ins(r, x);
    }

    scanf("%d", &key);

    if(sr(r, key))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
