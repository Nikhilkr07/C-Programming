//3] Program to find the simple interest.
#include<stdio.h>

int main(){
    float p,r,t,si;
    printf("Enter principal amount: ");
    scanf("%f", &p);
     printf("Enter rate of intrest: ");
    scanf("%f", &r);
 printf("Enter time period: ");
    scanf("%f", &t);


    si= (p*r*t)/100;
     printf(" Simple interest\n%f", si);
    return 0;
}