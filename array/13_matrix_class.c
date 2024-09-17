#include<stdio.h>

int main(){
    int a[5][5],r,c,i,j;
    printf("Enter no of rows:\n");
    scanf("%d",&r);
    printf("Enter no of column:\n");
    scanf("%d",&c);

    printf("Enter numbers for matrix:\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Your enter matrix numbers are:\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}