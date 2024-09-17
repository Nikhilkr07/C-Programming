#include<stdio.h>

int main(){
    int a,b,c;
    float cm;
    char ch;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter user choice to perform operation");
    scanf(" %c",&ch);
    printf("Enter second number");
    scanf("%d",&b);

    if(ch=='+'){
        c= a+b;
        printf("The result of %d\n",c);
    }
     else if(ch=='-'){
        c= a-b;
        printf("The result of %d\n",c);
    }
     else if(ch=='*'){
        c= a*b;
        printf("The result of %d\n",c);
    }
    else if(ch=='/'){
        cm= (float)a/b;
        printf("The result of %f\n",cm);
    }
    else if(ch=='%'){
        c= a%b;
        printf("The result of %d\n",c);
    }
    else{
        printf("Enter the valid operator");
    }
    return 0;
}