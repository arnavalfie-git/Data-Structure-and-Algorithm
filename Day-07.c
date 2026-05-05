/* Write a recursive function to compute the n-th Fibonacci number */

#include <stdio.h>

int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n;
    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}
