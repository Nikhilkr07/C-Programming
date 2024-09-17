#include<stdio.h>
int printarray(int A[20],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
    printf("\n");
}
int insertionsort(int A[20], int n){
    int i,key,j;
    for(i=1;i<=n-1;i++){
        key=A[i];
        j=i-1;
        while(j>=0&& A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
int main(){
    int i,n,A[20];
    printf("Enter size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    insertionsort(A,n);
    printarray(A,n);

    return 0;
}