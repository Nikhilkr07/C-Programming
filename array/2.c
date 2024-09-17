#include<stdio.h>

int main(){
    int a[5]={2,1,3,0,4},i,small;
    small=a[0];
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]<small){
            small=a[i];
        }
    }
    printf("\n%d",small);
    return 0;
}