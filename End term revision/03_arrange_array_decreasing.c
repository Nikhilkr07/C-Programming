#include<stdio.h>

int main(){
    int a[100],b[100],n,i,j,temp=0;
    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter elements in an array:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Elements in decresing order is:\n");

    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}