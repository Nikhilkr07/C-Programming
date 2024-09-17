#include<stdio.h>

int main(){
    int a[10],b[10],i,j,n,s,temp=0;
    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter elements in arry:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        s=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[s]){
                s=j;
            }
                temp = a[i];
                a[i]=a[s];
                a[s]=temp;
        }
    }
    printf("Sotred elements are:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}