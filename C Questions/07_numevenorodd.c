//] Program to find whether given no. is even or odd
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n%2==0){
        printf("It is an even number");
    }
    else{
        printf("It is an odd number");
    }
    return 0;
}