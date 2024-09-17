#include<stdio.h>

int main(){
    int a[10],n,i,min;
    printf("Enter no of terms:\n");
    scanf("%d",&n);

    printf("Enter numbers:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];

    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Minimum of these numbers is: %d",min);

    return 0;
}