#include<stdio.h>

int main(){
    FILE *ptr;
    char c;
    int a;
    ptr = fopen("INPUT.txt","w");
    scanf("%d",&a);
    fprintf(ptr,"the value of a is: %d",a);
   ptr=fopen("INPUT.txt","r");
   fscanf(ptr,"%d",&a);
   printf("The value of a is %d",a);
    return 0;
}