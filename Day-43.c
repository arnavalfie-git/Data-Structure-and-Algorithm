/* Construct binary tree from level order and print inorder traversal */

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

void inorder(struct node* root)
{
    if(root == NULL) return;
    inorder(root->l);
    printf("%d ", root->d);
    inorder(root->r);
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

    inorder(nodes[0]);

    return 0;
}
