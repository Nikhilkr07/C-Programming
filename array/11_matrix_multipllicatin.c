#include<stdio.h>

int main(){
    int a[10][10],b[10][10],d[10][10],r1,sum,c1,i,j,k,r2,c2;
    printf("Enter row for matrix A :\n");
    scanf("%d",&r1);
    printf("Enter column for matrix B :\n");
    scanf("%d",&c1);
    printf("Enter row for matrix B:\n");
    scanf("%d",&r2);
    printf("Enter column for matrix B:\n");
    scanf("%d",&c2);

    printf("Enter elments for matrix A:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elments for matrix B:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix A is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("Matrix B is:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            sum=0;
        for(k=0;k<r2;k++){
            sum= sum+a[i][k]*b[k][j];
            d[i][j]=sum;
        }
        }
        printf("\n");
    }

    printf("After multiplication of matrix\n");
    if(c1==r2){
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("Matrix is not possible");
    }
    return 0;
}