//ii)	S=1+22/2!+33/3!+44/4!+… 
#include<stdio.h>
#include<math.h>

int main(){
    int n, i, fact=1, j;
    float sum=0;
    printf("Enter no of terms:\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        fact=fact*i;
        sum= sum+ (pow(i,i)/fact);
    }
    printf("%f", sum);
}