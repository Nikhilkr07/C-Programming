//2] Program to find area and circumference of circle.
#include<stdio.h>

int main(){
    float pi=3.14,r,ci,area;
    printf("Enter the redius of a circle\n");
    scanf("%f", &r);

    area= pi*r*r;
    printf("Area of circle :%f\n", area);

    ci= 2*pi*r;
    printf("Area of ci :%f\n", ci);  // ci stand for cricumference
    return 0;
}