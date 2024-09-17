#include<stdio.h>
float fahrenheit(float cel);
int main(){
    float cel,fah;
    printf("Enter temp celcius:\n");
    scanf("%f",&cel);
    printf("Temp in fahrenheit is %f",fahrenheit(cel));
    
    return 0;
}
float fahrenheit(float cel){
    float result;
    result = (float)(cel*9/5)+32;
    return result;
}
