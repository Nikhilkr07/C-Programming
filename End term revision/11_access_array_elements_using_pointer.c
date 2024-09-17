#include<stdio.h>

int main(){
    int a[10],n,i;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;++i){
        scanf("%d",a+i);
    }
    printf("Your entered elements is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",*(a+i));
    }

    return 0;
}