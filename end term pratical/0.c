#include<stdio.h>
int main(){
    char a[10],b[10],j;
    int l,i,f=0;
    printf("Enter character:\n");
    scanf("%s",a);
    l = strlen(a);
    j=l-1;
    while(i<=j){
        if(a[i]!=a[j]){
            f=1;
            break;
        }
        i++;
        j--;
    }
    if(f==0){
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }

    return 0;
}