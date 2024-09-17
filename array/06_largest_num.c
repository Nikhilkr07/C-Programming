#include<stdio.h>

int main(){
    int a[10],n,i,max;
    printf("Enter no of terms:\n");
    scanf("%d",&n);

    printf("Enter numbers:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Maximum of these numbers is: %d",max);

    return 0;
}