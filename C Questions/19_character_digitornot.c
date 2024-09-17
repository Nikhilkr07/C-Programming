//character digit or not
#include<stdio.h>

int main(){
    char c;
    printf("Enter the chatcter: ");
    scanf("%c", &c);

    if(c>= '0' && c<= '9' ){
        printf("character is digit");
    }
    else{
        printf("character is not digit");
    }
    return 0;
}
