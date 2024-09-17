#include<stdio.h>

int main(){
    int a[100],b[100],i,j,n,freq[100],count;
    printf("Enter size of an array:\n");
    scanf("%d",&n);

    printf("Enter elements in array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0;
            }
        }
    if(freq[i]!=0){
        freq[i]=count;
    }
    }

    for(i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d occurence is %d times\n",a[i],freq[i]);
    }
    }
    return 0;
}