//Write a program to print the address of a variable.use this address to get the value of this variable.
#include<stdio.h>

int main(){
    int a=5;
    int *ptr;
    ptr = &a;
    printf("The address of a is %d\n",a);
     printf("The address of a is %u\n",ptr);
      printf("The address of a is %d\n",*ptr);
    return 0;
}