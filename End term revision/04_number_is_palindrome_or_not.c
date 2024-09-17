#include<stdio.h>

int main(){
    int a,rev=0,n,c;
    printf("Enter any numbers:\n");
    scanf("%d",&n);
    c=n;
while(n>=1){
    a=n%10;
    rev=rev*10+a;
    n=n/10;
}
printf("%d\n",rev);
if(c==rev){
    printf("Number is palindrome:\n");
}
else{
    printf("Number is not palindrome:\n");
}
    return 0;
}