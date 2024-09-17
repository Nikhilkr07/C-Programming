#include<stdio.h>
void change(int a);
int main(){
    int b=344;
    printf("Before changing value of b is %d\n",b);
    change(b);
    printf("After changing value of b is %d\n",b);


    return 0;
}
void change(int a){
a =77;
}