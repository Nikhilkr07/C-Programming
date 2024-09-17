//]Program to display series and find sum of 1+3+5+……..+n.
#include<stdio.h>

int main(){
    int i,n,sum=0;
    printf("Enter no of terms: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("%d\n",i*2-1);
        sum=sum+i*2-1;
    }
    printf("sum: %d",sum);

    return 0;
}