#include<stdio.h>

int main(){
    int a[10][10],b[10][10],c[10][10],i,j,r,co,n;
    printf("Enter order of row:\n");
    scanf("%d",&r);
    printf("Enter order of column:\n");
    scanf("%d",&co);

    printf("Enter numbers of matrix A:\n");

    for(i=0;i<r;i++){
        for(j=0;j<co;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("matrix :\n");

    for(i=0;i<r;i++){
        for(j=0;j<co;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<r;i++){
        for(j=0;j<co;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of a matrix is:\n");
      for(i=0;i<co;i++){
        for(j=0;j<r;j++){
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
