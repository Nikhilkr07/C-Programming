//How to find size of Data types in C using sizeof() operator
#include<stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;

    printf("int %d byte\n", sizeof(a));
    printf("float %d byte\n", sizeof(b));
    printf("char %d byte\n", sizeof(c));
    printf("double %d byte\n", sizeof(d));
    return 0;
}