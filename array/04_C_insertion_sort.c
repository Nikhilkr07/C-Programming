#include<stdio.h>

int main(){
    int a[10],i,j,n,k,temp;
    printf("Enter no of terms:\n");
    scanf("%d",&n);

    printf("Enter numbers:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        k=a[i];
        j=i-1;
        while(k<a[j]&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    printf("Sorting elements are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }


}