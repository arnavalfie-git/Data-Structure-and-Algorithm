/* Check if a string is a palindrome using two-pointer approach */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100];
    int l = 0, r, f = 1;

    scanf("%s", s);

    while(s[l] != '\0')
        l++;

    r = l - 1;
    l = 0;

    while(l < r)
    {
        if(s[l] != s[r])
        {
            f = 0;
            break;
        }
        l++;
        r--;
    }

    if(f)
        printf("YES");
    else
        printf("NO");

    return 0;
}
