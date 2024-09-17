#include<stdio.h>

/*int main(){
    int i,j,n;
    printf("Enter no of terms");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf("\n%d",i*2);
    }
    return 0;
}*/
int main(){
    int i=1,n;
    printf("Enter the no of terms");
    scanf("%d",&n);
    
    while(n>=1){
        printf("%d\n",2*n);
        n--;
    }
}