/* Evaluate postfix expression using linked list stack */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct node
{
    int d;
    struct node *n;
};

void push(struct node **t, int x)
{
    struct node *p = (struct node*)malloc(sizeof(struct node));
    p->d = x;
    p->n = *t;
    *t = p;
}

int pop(struct node **t)
{
    if(*t == NULL) return 0;

    struct node *p = *t;
    int x = p->d;
    *t = p->n;
    free(p);
    return x;
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200];
    scanf(" %[^\n]", s);

    struct node *t = NULL;

    int i = 0, x;

    while(s[i] != '\0')
    {
        if(isdigit(s[i]))
        {
            x = 0;
            while(isdigit(s[i]))
            {
                x = x * 10 + (s[i] - '0');
                i++;
            }
            push(&t, x);
        }
        else if(s[i] == ' ')
        {
            i++;
            continue;
        }
        else
        {
            int b = pop(&t);
            int a = pop(&t);

            if(s[i] == '+') push(&t, a + b);
            else if(s[i] == '-') push(&t, a - b);
            else if(s[i] == '*') push(&t, a * b);
            else if(s[i] == '/') push(&t, a / b);

            i++;
        }
    }

    printf("%d", pop(&t));

    return 0;
}
