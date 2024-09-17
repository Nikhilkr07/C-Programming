//Program to reverse a given number
#include<stdio.h>

int main(){
    int rev=0,a,n;
    printf("Enter any number: ");
    scanf("%d",&n);

    while(n>=1){
        a=n%10;
        rev=rev*10+a;
        n=n/10;

    }
    printf("reverse of a number is %d", rev);
    return 0;
}