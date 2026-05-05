/* Compute a^b using recursion without using pow() */

#include <stdio.h>

int power(int a, int b)
{
    if(b == 0) return 1;
    return a * power(a, b - 1);
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", power(a, b));

    return 0;
}
