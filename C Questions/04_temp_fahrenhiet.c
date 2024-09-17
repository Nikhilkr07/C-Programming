//4] Program to convert temperature from degree centigrade to Fahrenheit.
#include<stdio.h>

int main(){
    float f,c;
    printf("Enter the temp in celsius: ");
    scanf("%f", &c);

    f= (1.8*c)+32;
    printf("Temperature in fahrenhiet: %f ", f);
    return 0;
}