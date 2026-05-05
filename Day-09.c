/* Reverse a string (mirror operation) */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100];
    int i = 0, l = 0, t;
    
    scanf("%s", s);

    while(s[l] != '\0')
        l++;

    int r = l - 1;

    while(i < r)
    {
        t = s[i];
        s[i] = s[r];
        s[r] = t;
        i++;
        r--;
    }

    printf("%s", s);

    return 0;
}
