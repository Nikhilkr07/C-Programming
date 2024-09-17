//sum of first n odd number
#include<stdio.h>

int main(){
    int i,j,n,sum;
    printf("Enter no of terms: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        printf("%d\n",2*i-1);

        sum= sum+2*i-1;
      }
      printf("sum is no of terms%d", sum);
    
    return 0;
}