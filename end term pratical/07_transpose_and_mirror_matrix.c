#include<stdio.h>
int main(){
   int a[10][10],b[10][10],i,j,r,c,n;
    printf("Enter order of row:\n");
    scanf("%d",&r);
    printf("Enter order of column:\n");
    scanf("%d",&c);

    printf("Enter numbers of matrix A:\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix :\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of a matrix is:\n");
      for(i=0;i<c;i++){
        for(j=0;j<r;j++){
           printf("%d  ",b[i][j]);
        }
        printf("\n");
    }

    printf("Mirror Matrix is:\n");
    for(i=0;i<r;i++){
        for(j=r-1;j>=0;j--){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}