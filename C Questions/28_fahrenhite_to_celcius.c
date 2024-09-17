//4] Program to convert temperature from degree Fahrenheit to degree centigrade .
#include<stdio.h>

int main(){
    float f,c;
    printf("Enter the temp in celsius: ");
    scanf("%f", &f);

    c= (f-32)*5/9;
    printf("Temperature in celcius: %f ", c);
    return 0;
}