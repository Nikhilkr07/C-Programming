/* ) Write a program to calculate factorial of a number entered by user.
Number should be less than 10, if it is greater than or equal to 10 it
should print in reverse order.*/
#include<stdio.h>

int main(){
    int i=1,fact=1,n,d,a,rev=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact= fact*i;
    }
     printf("factorial = %d",fact);

      a=fact%10;
        rev=rev*10+a;
        fact=fact/10;
    if(n>=10){
        printf("%d",rev);
    }
    return 0;
}