//Program to find greatest in 3 numbers
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("a is greatest number");
    }
    else if(b>c && b>a){
        printf("b is greatest number");
    }
    else{
        printf("c is greatest number");
    }
    return 0;
}