#include<stdio.h>

int main(){
    int i,a=0,b=1,c,n;
    printf("Enter no of terms");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(a<=n){
        c=a+b;
        printf("\n%d ",a);
        a=b;
        b=c;   
    }
    }

    return 0;
}