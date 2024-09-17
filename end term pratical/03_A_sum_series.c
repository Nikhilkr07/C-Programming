//i)	S=1+2/2!+3/3!+4/4!+…
#include<stdio.h>

int main(){
    int n, i, fact=1;
    float sum=0;
    printf("Enter on of terms:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact=fact*i;
        sum=sum+((i*1.0)/fact);
    
    }
    printf("%f", sum);
   
    }