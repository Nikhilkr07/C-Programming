//Write a program in C to find the second largest element in an array.
#include <stdio.h>

int main(){
  int a[50],n,i,j=0,lrg,lrg2;

       printf("Enter the size of array : ");
       scanf("%d", &n);
       printf("Enter elements in the array :\n");
       for(i=0;i<n;i++)
            {
	      scanf("%d",&a[i]);
	    }

   lrg=0;
  for(i=0;i<n;i++)
  {
      if(lrg<a[i])
	  {
           lrg=a[i];
           j = i;
      }
  }	
   lrg2=0;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;  
		  i--;
        }
      else
        {
          if(lrg2<a[i])
	     {
               lrg2=a[i];
             }
        }
  }

  printf("The Second largest element in the array is : %d \n", lrg2);
}