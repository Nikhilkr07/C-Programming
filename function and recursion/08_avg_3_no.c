#include<stdio.h>
float avg(int a, int b, int c);
int main(){
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);

    printf("The value of avg is %f",avg(a,b,c));
    
    return 0;
}
float avg(int a, int b, int c){
    float d;
    d= (float)(a+b+c)/3;
    return d;
}