/* Find height of binary tree from level order input */

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

int h(struct node* r)
{
    if(r == NULL) return 0;

    int l = h(r->l);
    int rt = h(r->r);

    return (l > rt ? l : rt) + 1;
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

    if(n == 0 || a[0] == -1)
    {
        printf("0");
        return 0;
    }

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

    printf("%d", h(nd[0]));

    return 0;
}
