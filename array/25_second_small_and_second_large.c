#include <stdio.h>

int main()
{
    int a[50], n,temp,i,j;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");                    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)      
    {
        for(j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);  
    printf("\n");
    printf("The second largest element is %d",a[1]);    
    return 0;
}