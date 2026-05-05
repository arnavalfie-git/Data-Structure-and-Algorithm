/* Implement stack using array with push, pop and display */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, op, x;
    scanf("%d", &n);

    int a[100], top = -1;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &op);

        if(op == 1)
        {
            scanf("%d", &x);
            a[++top] = x;
        }
        else if(op == 2)
        {
            if(top == -1)
                printf("Stack Underflow\n");
            else
                printf("%d\n", a[top--]);
        }
        else if(op == 3)
        {
            if(top == -1)
                printf("\n");
            else
            {
                int j;
                for(j = top; j >= 0; j--)
                    printf("%d ", a[j]);
                printf("\n");
            }
        }
    }

    return 0;
}
