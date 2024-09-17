//5.	Write a program in C to reaange an array in such an order that: 
//A[]={x1 > x2 < x3 > x4 < x5 > x6 < x7 > x8 < …….};

#include <stdio.h>
int main()
{
    int n,a[100],i,j,temp;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
    printf("Enter element in an array:\n");
    for (i = 0; i < n; i++){
    scanf("%d",&a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] < a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        else 
        {
            if (a[i] > a[i + 1])
            {
               int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("After rearraging array is:\n");
    for (i = 0; i < n; i++){
    printf("%d ", a[i]);
    }
    return 0;
}