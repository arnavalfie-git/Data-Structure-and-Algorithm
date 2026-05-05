/* Traverse a matrix in spiral order (clockwise) */

#include <stdio.h>

int main()
{
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int r, c, i;
    scanf("%d %d", &r, &c);

    int a[50][50];

    for(i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int top = 0, bottom = r - 1, left = 0, right = c - 1;

    while(top <= bottom && left <= right)
    {
        for(i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        if(top <= bottom)
        {
            for(i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }

        if(left <= right)
        {
            for(i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }

    return 0;
}
