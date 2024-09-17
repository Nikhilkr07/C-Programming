#include<stdio.h>

int main(){
    int a[10],i,t,n,j;
    printf("Enter no of terms:\n ");
    scanf("%d",&n);
      printf("Enter the numbers:\n");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] < a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Numbers in ascending order:\n ");
     for(i=0;i<n;i++){

        printf("%d\n",a[i]);
    }
    return 0;
}