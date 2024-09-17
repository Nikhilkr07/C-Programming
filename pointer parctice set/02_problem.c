//write a program having a variable i. print the address of i. pass this variable to a fuction and print its address. are these address same.why
#include<stdio.h>

void printadd(int a){
    printf("The address of variable a is %u\n",&a);
}
int main(){
    int i=4;
    printf("The value of variable i is %d\n",i);
    printadd(i);
    printf("The address of variable i is %u\n",&i);
    
    return 0;
}