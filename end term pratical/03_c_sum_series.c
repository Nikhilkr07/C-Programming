//=2+6/2!+12/3!+20/4!
#include<stdio.h>

int main(){
    int n, i, fact=1;
    float sum=0;
    printf("Enter no of terms:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact=fact*i;
        sum=sum+((i*(i+1)*1.0)/fact);
    
    }
    printf("%f", sum);
       
    }