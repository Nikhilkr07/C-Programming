#include<stdio.h>

int main(){
    int i,j,n,k;
    printf("Enter no of number: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        k=n;
        for(j=1;j<=i;j++){
            printf("%d",k);
            k--;
        }
         printf("\n");
    }
    return 0;
}