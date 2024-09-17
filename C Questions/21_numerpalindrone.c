// numer is palindrome or not
#include<stdio.h>

int main(){
    int n,rev,sum=0,c;
    printf("Enter ant number: ");
    scanf("%d", &n);
    c=n;                                // c store orignal number n

    while(n>0){
        rev=n%10;
        sum= rev+(sum*10);
        n=n/10;
    }
    printf("%d\n",sum);
    if(c==sum){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
    return 0;
} // esay way