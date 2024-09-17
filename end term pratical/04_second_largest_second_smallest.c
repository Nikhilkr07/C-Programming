//4.	Write a program in C to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and so on..
#include<stdio.h>

int main(){
    int a[100],b[100];
    int i,j,n,k,temp;
    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter elements in array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)      
    {
        for(j=i+1; j<n ;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    i=0;
    j=n-1;
    k=0;
    while(i<=j){
        if(i!=j){
            b[k]=a[i];
            k++;
            b[k]=a[j];
            k++;
            i++;
            j--;
        }
        else{
            b[k]=a[i];
            k++;
            i++;
        }
    }
    printf("smallest, largest, 2nd smallest, 2nd largest and so on:\n");
    for(i=0;i<n;i++){
        printf("%d  ",b[i]);
    }
    return 0;
}