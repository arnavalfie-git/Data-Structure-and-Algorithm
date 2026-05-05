/* Find height (maximum depth) of a binary tree */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node *l, *r;
};

struct node* newNode(int x)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->d = x;
    p->l = p->r = NULL;
    return p;
}

int h(struct node* root)
{
    if(root == NULL) return 0;

    int lh = h(root->l);
    int rh = h(root->r);

    return (lh > rh ? lh : rh) + 1;
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

    struct node* nodes[100];

    for(i = 0; i < n; i++)
    {
        if(a[i] == -1)
            nodes[i] = NULL;
        else
            nodes[i] = newNode(a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(nodes[i] != NULL)
        {
            int l = 2*i + 1;
            int r = 2*i + 2;

            if(l < n) nodes[i]->l = nodes[l];
            if(r < n) nodes[i]->r = nodes[r];
        }
    }

    printf("%d", h(nodes[0]));

    return 0;
}
