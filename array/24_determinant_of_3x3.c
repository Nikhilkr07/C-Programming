#include<stdio.h>
 
int main(){
 
  int a[10][10], i, j,determinant;
 
  printf("Enter the elements of matrix:\n");
  for(i = 0 ;i < 3;i++){
      for(j = 0;j < 3;j++){
           scanf("%d", &a[i][j]);
      }
  }
  printf("The matrix is\n");
  for(i = 0;i < 3; i++){
      printf("\n");
      for(j = 0;j < 3; j++)
           printf("%d\t", a[i][j]);
  }
 
  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 
  printf("\nDeterminant of 3X3 matrix: %d", determinant);
 
   return 0;
}