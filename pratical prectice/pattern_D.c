#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter no of number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",64+j);
        }
         printf("\n");
    }
    return 0;
}