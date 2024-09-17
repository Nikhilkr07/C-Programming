#include<stdio.h>

int main(){
    char a[20];
    int i,l;
    printf("Enter string:\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++){
        if(a[i]!=a[l-1-i]){
            break;
        }
    }
    if(i==l/2){
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;
}