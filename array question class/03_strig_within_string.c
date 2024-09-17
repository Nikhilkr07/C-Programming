#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[20],c[20];
    int i,j,k,l1,l2,f;

    printf("Enter main string:\n");
    gets(a);
    printf("Enter substring:\n");
    gets(b);
     f=0;
    for(i=0;i<=l1-l2;i++){
        j=i;
        for(k=0;k<l2;k++){
            c[k] = a[j];
            j++;
        }
        c[k] = '\0';
        if(strcmp(b,c) == 0){
            f++;
            printf("%s foind at %d position",b,i+1);
        }
    }

    return 0;
}