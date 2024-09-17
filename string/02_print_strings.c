#include<stdio.h>

int main(){
    char str[]={'N','i','k','h','i','l','\0'};
    //char str[] = "Nikhil";
    char *ptr=str;
    while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
    }
    return 0;
}