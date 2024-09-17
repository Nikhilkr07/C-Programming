//5] Program to calculate sum of 5 subjects and find percentage.
#include<stdio.h>

int main(){
    int phy,che,mat,eng,comp,sum;
    float per;
    printf("Enter the number of phy: ");
    scanf("%d", &phy);
    printf("Enter the number of che: ");
    scanf("%d", &che);
    printf("Enter the number of mat: ");
    scanf("%d", &mat);
    printf("Enter the number of eng: ");
    scanf("%d", &eng);
    printf("Enter the number of comp: ");
    scanf("%d", &comp);

    sum= phy+che+mat+eng+comp;
    per= (sum/500.0)*100.0;
    printf("Percentage= %f", per);
    return 0;
}