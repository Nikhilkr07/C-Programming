//Write a program in C to count a total number of duplicate elements in an array. 
#include <stdio.h> 
int main()
{
    int a[50];
    int i, j, n, count = 0;

    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);
    return 0;
}
