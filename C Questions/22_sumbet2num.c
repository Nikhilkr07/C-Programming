//sum between two numbers
#include<stdio.h>

int main(){
    int n1,n2,sum=0;
    printf("Enter the first number: ");
    scanf("%d",&n1);
     printf("Enter the second number: ");
    scanf("%d",&n2);
    
    while(n1<=n2 ){
        sum= sum+n1;
        n1=n1+1;
    }
    printf("sum: %d", sum);

    return 0;
}