//Program to print stars Sequence2.
#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter no of terms: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}