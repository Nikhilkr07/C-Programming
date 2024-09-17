#include<stdio.h>
int factorial(int x);
int main(){
    int a;
    printf("Enter no fo terms:\n");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,factorial(a));
    
    return 0;
}
int factorial(int x){
    if (x==1 || x==0){
        return x;
    }
    return x *factorial(x-1);
}