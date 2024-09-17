#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, r, co, j;
    printf("Enter order of row:");
    scanf("%d",&r);
     printf("Enter order of column:");
    scanf("%d",&co);
    printf("Enter value for A matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<co;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value for b matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<co;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix A values is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B values is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
        
        
    for(i=0;i<r;i++)
    {
        for(j=0;j<co;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrix A and B is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("%d\t", c[i][j]);
        }

        printf("\n");
    }
}
