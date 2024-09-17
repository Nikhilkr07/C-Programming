#include<stdio.h>

int main(){
    int i,n,x=2;
    printf("Enter no of terms:");
    scanf("%d",&n);

    while(n)
    {
        for(i=2;i<x;i++){
            if(x%i==0){
                break;
            }
        }
            if(i==x){
                printf("\n%d",x);
                n--;
            }
            x++;
    }
    
    return 0;
}