#include<stdio.h>

int main(){
    int a,b,gcd,lcm,x,y,t;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);

    a = x;
    b = y;

    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm= (x*y)/gcd;
    printf("Highest common factor is %d",gcd);
    printf("\nlowest common factor is %d",lcm);
    return 0;
}