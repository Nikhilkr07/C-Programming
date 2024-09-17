#include<stdio.h>

int main(){
    int a=0,b=1,c,n;
    printf("Enter number");
    scanf("%d",&n);

    while(c<n){
        a=b;
        b=c;
        c=a+b; 
    }
    if(c==n){
        printf("fibonacci number");
    }
    else{
        printf("Not a fibonacci number");
    }
    return 0;
}