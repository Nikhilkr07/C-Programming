//Program to print stars Sequence1:
#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}