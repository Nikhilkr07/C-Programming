#include<stdio.h>

int main(){
    int a[50][50],b[50][50],c[50][50],i,j,r2,c2,c1,r1;
    printf("Enter order of row for first matrix:\n");
    scanf("%d",&r1);
    printf("Enter order of column for first matrix:\n");
    scanf("%d",&c1);
    printf("Enter order of row for second matrix:\n");
    scanf("%d",&r2);
    printf("Enter order of column for second matrix:\n");
    scanf("%d",&c2);

    printf("Enter elements in Matrix A:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements in Matrix B:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
     printf("Matrix A is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B is:\n");
     for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("After add these two matrix result is:\n");
     for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}