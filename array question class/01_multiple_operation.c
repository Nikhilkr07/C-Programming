//#Sum of n numbers, largest numbers, smallest numbers, average of n numbers, their address, unique numbers in an array,
//duplicate numbers in an array, frequency of each element in an array,
#include<stdio.h>

int main(){
    int a[100],s=0,n,i,j,max,min,dup[50],freq[50];
    
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Enter the values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        dup[i]=-1;
        freq[i]=-1;
    }
    for(i=0;i<n;i++){
        s= s+a[i];
        
    }
     printf("sum of all given number is %d",s);

    //maximum
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\nMaximum of these numbers is: %d",max);

    //minimum
    min=a[0];

    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("\nMinimum of these numbers is: %d",min);
    //avg
    int s1=0;
    float avg;
      for(i=0;i<n;i++){
        s1= s1+a[i];
        avg = (float)s1/n;
    }
    printf("\navg of all given number is %f",avg);

    // unique element
    int c;
        printf("\nUnique elements in an array:");
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
    int c3;
    //dup[i]=-1;
    for(i=0;i<n;i++){
        c3=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c3++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0){
            dup[i]=c3;
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