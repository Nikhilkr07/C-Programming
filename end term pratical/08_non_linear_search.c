//8.	Write a program in C to implements the non-linear search within N element in log(N) time.
#include<stdio.h> 
int main()
{
    int a[20],i,x,n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
     
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            break;
        }
    }

    if(i<n){
        printf("Element found at index %d",i);
    }
    else{
        printf("Element not found");
    }
  
    return 0;
}