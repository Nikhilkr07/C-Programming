#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    int i,j,len;
    printf("Enter string name:\n");
    scanf("%s",a);
    
    len=strlen(a);

    for(i=0;i<len;i++){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}