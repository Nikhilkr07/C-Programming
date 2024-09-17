//Program to display sum of series 1+1/2+1/3+……….+1/n.
#include<stdio.h>

int main(){
    float i,n,sum=0;
    printf("Enter no of terms");
    scanf("%f", &n);

    for(i=1;i<=n;i++){

        sum= sum+ (1/i);
    }
    printf("%f", sum);
    
    return 0;
}