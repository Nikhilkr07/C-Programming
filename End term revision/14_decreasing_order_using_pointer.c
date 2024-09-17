#include<stdio.h>    
  
int main()  
{  
    int n;
    int a[100], i, *ptr;  
    printf("Enter size of pointer array:\n");
    scanf("%d",&n);
    printf("Enter %d integer numbers\n", n);  
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);  
  
    ptr = &a[n - 1];  
  
    printf("\nElements of array in reverse order ...\n");  
    for(i = 0; i < n; i++)  
        printf("%d\n", *ptr--);  
  
    return 0;  
}