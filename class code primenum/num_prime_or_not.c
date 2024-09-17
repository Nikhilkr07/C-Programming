#include<stdio.h>
#include<math.h>

int main(){
    int n,i,f=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            f=f+1;
            break;
        }
    }
    if(f==0){
        printf("It is a prime number");
    }
    else{
        printf("It is a not prime number");
    }
}