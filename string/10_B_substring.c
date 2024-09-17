#include<stdio.h>
#include<string.h>
int IndexOfSubsrting(char a[50], char b[50]);
int main(){
    char a[50],b[50];
    int index;
    printf("Enter main string:\n");
    gets(a);
    printf("Enter Substring string:\n");
    gets(b);
    index=(a,b);
    if(index==-1){
        printf("substring not found");
    }
    else{
        printf("Substring found at index %d index",index);
    }
    
    return 0;
}
int IndexOfSubsrting(char a[50], char b[50]){
    int i,j,k,l;
    l = strlen(b);
    for(i=0;i<a[i+l-1];i++){
        k=i;
        for(j=0;j<l-1;j++){
            if(a[k]!=b[j]){
                break;
                k++;
            }
        }
            if(j==l){
                return(i);
            }
    }
    return(-1);
}
// this is wrong