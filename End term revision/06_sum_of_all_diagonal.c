#include<stdio.h>

int main(){
    int a[20][20],b[10][10],r,c,i,j,sum=0;
    printf("Enter order of row:\n");
    scanf("%d",&r);
    printf("Enter order of column:\n");
    scanf("%d",&c);

    printf("Enter elements in a matri:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        if(a[i]==a[j]){
            sum=sum+a[i][j];
        }
        }
    }
    printf("The sum of diagonal matrix is:\n%d",sum);

    return 0;
}