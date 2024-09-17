// numbe armstrong or not
#include<stdio.h>
#include<math.h>

int main(){
    int n=0,re,num,c,arm=0; // num is user input the number,re- reminder
    printf("Enter the number: ");
    scanf("%d", &num);
    c=num;

    while(c!=0){
        c=c/10;
        n++;
    }
    c=num;
    while(c!=0){
        re= c%10;
        arm= arm+ pow(re,n);
        c=c/10;
    }
    if(arm== num){
        printf("Armstrong number %d", num);
    }
    else{
        printf("not Armstrong %d", num);
    }
    return 0;
}  //wrong program for 153 armstrong number