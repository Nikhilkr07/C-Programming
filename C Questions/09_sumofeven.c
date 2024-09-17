//sum of first n even number
#include<stdio.h>

int main(){
    int i,j,n,sum;
    printf("Enter no of terms: ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        printf("%d\n",2*i);

        sum= sum+2*i;
      }
      printf("sum is no of terms%d", sum);
    
    return 0;
}