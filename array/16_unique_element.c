#include<stdio.h>

int main(){
    int a[50],c,i,j,n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter numbers in an array:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Unique elements in an array:\n");
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(i!=j){
            if(a[i]==a[j]){
                c++;
            }
            }
        }
        if(c==0){
            printf("%d",a[i]);
        }
    }
    return 0;
}