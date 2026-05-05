/* Vertical order traversal of a binary tree */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d, hd;
    struct node *l, *r;
};

struct node* nn(int x)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->d = x;
    p->l = p->r = NULL;
    return p;
}

struct qn
{
    struct node* n;
    int hd;
};

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

    struct qn q[200];
    int f = 0, r = -1;

    q[++r].n = nd[0];
    q[r].hd = 0;

    int col[200][100], cnt[200] = {0};

    while(f <= r)
    {
        struct node* p = q[f].n;
        int hd = q[f].hd;
        f++;

        col[hd + 100][cnt[hd + 100]++] = p->d;

        if(p->l != NULL)
        {
            q[++r].n = p->l;
            q[r].hd = hd - 1;
        }

        if(p->r != NULL)
        {
            q[++r].n = p->r;
            q[r].hd = hd + 1;
        }
    }

    for(i = 0; i < 200; i++)
    {
        if(cnt[i] > 0)
        {
            int j;
            for(j = 0; j < cnt[i]; j++)
                printf("%d ", col[i][j]);
            printf("\n");
        }
    }

    return 0;
}
