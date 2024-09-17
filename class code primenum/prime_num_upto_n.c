#include<stdio.h>
#include<math.h>

int main(){
    int n,i,f,l;
    printf("Enter any number: ");
    scanf("%d", &l);
    for(n=1;n<=l;n++){
        f=0;
    for(i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            f=f+1;
            break;
        }
    }
    
    if(f==0){
        printf("\n%d",n);
    }
    }
}