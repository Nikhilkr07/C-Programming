#include<stdio.h>

int main(){
    char ch;
    printf("Enter any alphabet:\n");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z'){
        printf("character is an upercase");
    }
    else{
        printf("Character is an lowercase");
    }
    return 0;
}