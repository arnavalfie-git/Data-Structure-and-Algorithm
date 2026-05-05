/* Convert infix expression to postfix using stack */

#include <stdio.h>
#include <ctype.h>

int pr(char c)
{
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    if(c == '^') return 3;
    return 0;
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100], st[100], res[100];
    int i = 0, j = 0, top = -1;

    scanf("%s", s);

    while(s[i] != '\0')
    {
        if(isalnum(s[i]))
            res[j++] = s[i];
        else if(s[i] == '(')
            st[++top] = s[i];
        else if(s[i] == ')')
        {
            while(top != -1 && st[top] != '(')
                res[j++] = st[top--];
            top--;
        }
        else
        {
            while(top != -1 && pr(st[top]) >= pr(s[i]))
                res[j++] = st[top--];
            st[++top] = s[i];
        }
        i++;
    }

    while(top != -1)
        res[j++] = st[top--];

    res[j] = '\0';

    printf("%s", res);

    return 0;
}
