#include<stdio.h>

int main(){
    int a[20],b[20],c[20],i,j=0,k=0,n;

    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter the numbers:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }
    printf("The even numbers are:\n");
    for(i=0;i<j;i++){
        printf("%d\n",b[i]);
    }
    printf("\nThe odd numbers are:\n");
    for(i=0;i<k;i++){
        printf("%d\n",c[i]);
    }

    return 0;
}