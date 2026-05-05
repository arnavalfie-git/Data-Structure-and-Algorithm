/* BST insert and inorder traversal */

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

void in(struct node* r)
{
    if(r == NULL) return;
    in(r->l);
    printf("%d ", r->d);
    in(r->r);
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x;
    scanf("%d", &n);

    struct node* r = NULL;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        r = ins(r, x);
    }

    in(r);

    return 0;
}
