#include<stdio.h>

int main(){
    int a[10],i,s=0,n;
    float avg;
    printf("Enter numbers\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter no of subject:%d is  ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        s= s+a[i];
        avg = (float)s/n;
    }
    printf("avg of all given number is %f",avg);

    return 0;
}