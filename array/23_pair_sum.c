//Write a program in C to find a pair with given sum in the array
#include<stdio.h>
int main()
{
    int a[50],sum, count = 0,check,i,j,n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
    printf("Enter numbers :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter sum value :\n");
    scanf("%d",&check);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            sum = a[i] + a[j];
            if(sum == check)
            {
                printf("[%d %d]\n",a[i],a[j]);
                count ++;
            }
        }
    }
    printf("Total Number of Pairs : %d",count);
    return 0;
}