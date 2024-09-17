//Program to display first 10 natural no. & their sum.
#include<stdio.h>

int main(){
    int i,j,n,sum=0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("%d\n", i);

       sum= sum+i;
     
    }    
    printf("Sum is no of terms: %d", sum);
    return 0;
}
