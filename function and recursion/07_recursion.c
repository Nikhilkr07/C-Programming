// Factorial of a number using recursion
#include<stdio.h>
int factorial(int x);
int main(){
    int a;
    printf("Enter number of terms");
    scanf("%d",&a);
    printf("The factorial of %d is %d ",a,factorial(a));
    
    return 0;
}
int factorial(int x){
    if(x==1 || x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);   // Formula of calculate factorial
    }
}