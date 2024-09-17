#include<stdio.h>

int main(){
 int a[20],n,i,j,sum=0;
 printf("Enter no of terms:\n");
 scanf("%d",&n);

printf("Enter interges numbers:\n");
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
printf("Odd numbers are:\n");
 for(i=0;i<n;i++){
 if(a[i]%2==1){
    printf("%d\n",a[i]);
    sum=sum+a[i];
 }
}
printf("Sum of all odd numbers are: %d",sum);
}