#include<stdio.h>

int main(){
    int mat[100][100],i,j,r,c;
    printf("Enter oder of rows:\n");
    scanf("%d",&r);
    printf("Enter oder of rows:\n");
    scanf("%d",&c);

    printf("Enter numbers:\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix represtation of a given number is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
