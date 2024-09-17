#include<stdio.h>   //diagonal matrix must be a square matrix

int main(){
    int a[5][5],n,i,j;
    printf("Enter order of square :\n");
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

    printf("Diagonal matrix are:\n");

    for(i=0;i<n;i++){      // printing space for diagonal elements (using doubble space)
        for(j=0;j<i;j++){
            printf("  ");
        }
        for(j=0;j<n;j++){      // condition for diagonal elements
            if(a[i]==a[j]){
            printf("%d",a[i][j]);
        }
        }
        printf("\n");
    }

    return 0;
}