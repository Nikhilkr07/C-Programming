#include<stdio.h>

int main(){
    int a[100][100],i,j,f=0,n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter elements for matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d  ",a[i][j]);
        }
         printf("\n");
    }

     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j && a[i][j]!=1){
                f=1;
                break;
            }
            else if(i!=j && a[i][j]!=0){
                f=1;
                break;
            }
        }
    }
    if(f==0){
        printf("Matrix is identity Matrix");
    }
    else{
        printf("Matrix is not a identity Matrix");
    }
    return 0;
}