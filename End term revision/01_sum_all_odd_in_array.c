//Write a program to print sum of all odd numbers in an array of 15 integers.
#include<stdio.h>

int main(){
    int a[100],i,j,n,sum=0;
    printf("Size of an array:\n");
    scanf("%d",&n);

    printf("Enter elements in an array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Sum of all odd numbers in given integers:\n");
    for(i=0;i<n;i++){
        if(a[i]%2==1){
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    
    return 0;
}