#include<stdio.h>

int main(){
    int a[5][5],i,j,n;
    printf("Enter a order of square matrix:\n");
    scanf("%d",&n);

    printf("Enter numbers for matrix:\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Your enter matrix numbers are:\n");

     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("uper traingle matrix are:\n");

    for(i=0;i<n;i++){      
        for(j=0;j<i-(n-1);j++){  // only for space otherwise no use
            printf(" ");
        }
        for(j=0;j<n;j++){      
            if(a[i]>a[j]){
            printf("%d ",a[i][j]);
        }
        }
        printf("\n");
    }

    return 0;
}