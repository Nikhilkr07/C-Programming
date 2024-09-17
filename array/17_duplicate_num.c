#include<stdio.h>

int main(){
    int a[50],dup[50],c,i,j,n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter numbers in an array:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        dup[i]=-1;
    }

    for(i=0;i<n;i++){
        c=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0){
            dup[i]=c;
        }
    }
    printf("duplicate elements in an array:\n");
    for(i=0;i<n;i++){
        if(dup[i]<1){
            printf("%d",a[i]);
        }
    }
  
    return 0;
}