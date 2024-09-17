#include<stdio.h>

int main(){
    int i,j,n;
    char k;
    printf("Enter no of number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        k=n;
        for(j=1;j<=i;j++){
            printf("%d",k);
            k--;
        }
         printf("\n");
    }
    return 0;
}