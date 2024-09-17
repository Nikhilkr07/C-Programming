#include<stdio.h>
int main()
{
    int n1,n2,i,j,count=0;
    printf("\nEnter the number of elements in array 1 : ");
    scanf("%d", &n1);
    printf("\nEnter the number of elements in array 2 : ");
    scanf("%d", &n2);
    int arr1[n1],arr2[n2];
    printf("\nEnter the %d positive elements in array 1 : ",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the %d positive elements in array 2 : ",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if(arr2[i] == arr1[j])
            {
				count++;
				arr1[j]=-1;
			    break;
        	}
        }
    }
    if (count==n2)
        printf("\nArray 2 is a subset of Array 1\n ");
    else
        printf("\nArray 2 is not a subset of Array 1\n");
    return 0;
}