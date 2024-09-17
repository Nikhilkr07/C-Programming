#include<stdio.h>
int fibonacciseries(int n)
{
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacciseries(n-1) + fibonacciseries(n-2);
    }
}
int main(){
    int n; 
    int i;
    printf("Enter no of terms:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("%d  ",fibonacciseries(i));
    }
    return 0;
}