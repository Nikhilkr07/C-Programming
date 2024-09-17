// To find substring in given string.
#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,j,lena,lenb;
    printf("Enter main string:\n");
    gets(a);
    printf("Enter substring:\n");
    gets(b);

    lena = strlen(a);
    lenb = strlen(b);
    for(i=0;i<lena;i++){
        for(j=0;j<lenb;j++){
            if(a[i+j]!=b[j]){
                break;
            }
        }
         if(j == lenb){
        printf("Substring found at index number %d\n",i+1);
    }
    }
    return 0;
}