/* Find Lowest Common Ancestor (LCA) in a binary tree */

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

struct node* lca(struct node* r, int a, int b)
{
    if(r == NULL) return NULL;

    if(r->d == a || r->d == b)
        return r;

    struct node* l = lca(r->l, a, b);
    struct node* rt = lca(r->r, a, b);

    if(l && rt) return r;

    return l ? l : rt;
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x, y;
    scanf("%d", &n);

    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &x, &y);

    if(n == 0 || a[0] == -1) return 0;

    struct node* nd[100];

    for(i = 0; i < n; i++)
    {
        if(a[i] == -1)
            nd[i] = NULL;
        else
            nd[i] = nn(a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(nd[i] != NULL)
        {
            int l = 2*i + 1;
            int r = 2*i + 2;

            if(l < n) nd[i]->l = nd[l];
            if(r < n) nd[i]->r = nd[r];
        }
    }

    struct node* res = lca(nd[0], x, y);

    if(res != NULL)
        printf("%d", res->d);

    return 0;
}
