//Program to find that entered year is leap year or not.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the year: ");
    scanf("%d", &n);

    if(n%400 == 0){
        printf("Year is leap year");
    }
    else if(n%100 == 0){
        printf("Year is not a leap year");
    }
    else if(n%4 == 0){
        printf("Year is leap year");
    }
    else{
        printf("year is not a leap year");
    }
    return 0;
}