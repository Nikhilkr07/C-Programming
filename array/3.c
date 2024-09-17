#include<stdio.h>

int main(){
    int a[50],b[50],c[50],i,j,count=0,a1,b1;
    printf("Enter size A an array:\n");
    scanf("%d",&a1);
    printf("Enter size of B array:\n");
    scanf("%d",&b1);

    printf("Enter first array elements:\n");

    for(i=0;i<a1;i++){
        scanf("%d",&a[i]);
    }
     printf("Enter second array elements:\n");
    for(i=0;i<b1;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<b1;i++){
        for(j=0;j<a1;j++){
        if(b[i]==a[j]){
            count++;
           //a[j]=-1;
            break;
        }
        }
    }
    if(count == b1){
        printf("Array B is a subseet of array A");
    }
    else{
        printf("Array B is not  subseet of array A");
    }


    return 0;
}