//1.	WAP in C to enter the marks for a student and find percentage and grade. Rules for the grading system are as follows:	
#include<stdio.h>

int main(){
     float phy,che,mat,eng,comp,total,avg,per;
    printf("ENter the marks of subjects\n");
    scanf("%f%f%f%f%f", &phy,&che,&mat,&eng,&comp);

    per= ( phy+che+mat+eng+comp)/5.0;

    printf("The percentage is %f\n", per);
    if(per<0 || per>100){
        printf("Invailed per");
    }
    else if(per<40){
        printf("Grade F");
    }
    else if(per<=59){
        printf("Grade D");
    }
    else if(per<=74){
        printf("Grade C");
    }
    else if(per<=84){
        printf("Grade B");
    }
    else if(per>84){
        printf("Grade A");
    }
    return 0;

}