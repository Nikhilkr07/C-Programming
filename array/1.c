#include<stdio.h> 
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,n,k,sum;
printf("Enter no of terms:");
scanf("%d",&n);
printf("Enter value for A matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("Enter value for B matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<n;i++){

for(j=0;j<n;j++){
    sum=0;
    for(k=0;k<n;k++)
        sum=sum+(a[i][k]*b[k][j]);
    c[i][j] = sum;
}
}

printf("\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}