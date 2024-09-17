// sum of n natural number without using loop
#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter no of terms number: ");
     scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("sum: %d", sum);

    return 0;
}