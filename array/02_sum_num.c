#include<stdio.h>

int main(){
    int a[100],s=0,n,i;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Enter the values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        s= s+a[i];
        
    }
     printf("sum of all given number is \n%d",s);
    return 0;
}