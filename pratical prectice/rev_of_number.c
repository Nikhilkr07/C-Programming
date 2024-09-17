#include<stdio.h>

int main(){
    int i,a,n,rev=0;
    printf("Enter any number");
    scanf("%d",&n);

    while(n>=1){

        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    printf("Reverse of a number is = %d",rev);
    return 0;
}