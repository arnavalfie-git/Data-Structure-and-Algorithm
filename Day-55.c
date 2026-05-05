/* Print right view of a binary tree */

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

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    scanf("%d", &n);

    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

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

    struct node* q[100];
    int f = 0, r = -1;

    q[++r] = nd[0];

    while(f <= r)
    {
        int sz = r - f + 1;

        for(i = 0; i < sz; i++)
        {
            struct node* p = q[f++];

            if(i == sz - 1)
                printf("%d ", p->d);

            if(p->l != NULL) q[++r] = p->l;
            if(p->r != NULL) q[++r] = p->r;
        }
    }

    return 0;
}
