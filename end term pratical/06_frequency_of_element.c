//6.	Write a program in C to count and print the frequency of each element of an array.
#include<stdio.h>
int main(){
    int a[100],i,j,c,dup[50],freq[50],n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
    printf("Enter numbers in array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        dup[i]=-1;
        freq[i]=-1;
    }
    printf("\nUnique elements in an array: ");
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(i!=j){
            if(a[i]==a[j]){
                c++;
            }
            }
        }
        if(c==0){
            printf("%d ",a[i]);
        }
    }
    // duplicate elements
    int c1;
    for(i=0;i<n;i++){
        c1=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c1++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0){
            dup[i]=c1;
        }
    }
    printf("\nduplicate elements in an array:");
    for(i=0;i<n;i++){
        if(dup[i]<1){
            printf("%d ",a[i]);
        }
    }
    // frequency of array
    int count;
     for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
    return 0;
}