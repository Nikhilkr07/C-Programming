#include<stdio.h>

struct employee{
    int Eid;
    float salary,bs,ta,da,hra,total_salary;
    char name[10];
};
int main(){
        int i,n;
        struct employee e[100];
        printf("How many emppoyee do you want:\n");
        scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the basic salary of employee %d :",i+1);
        scanf("%f",&e[i].bs);
        printf("Enter Name of employee %d :",i+1);
        scanf("%s",e[i].name);
        printf("Enter employee eid %d :",i+1);
        scanf("%d",&e[i].Eid);
        printf("\n\n");
    }
    for(i=0;i<n;i++){
        e[i].hra=(10*e[i].bs)/100;
        e[i].da=(90*e[i].bs)/100;
        e[i].ta=800;
        e[i].total_salary =  e[i].bs + e[i].hra + e[i].da + e[i].ta;
    }
    for(i=0;i<n;i++){
        printf("Name of employee: %d is %s",i+1,e[i].name);
        printf("employee eid: %d is %d",i+1,e[i].Eid);
        printf("\nThe hra of emp: %d is %f",i+1,e[i].hra);
        printf("\nThe da of emp: %d is %f",i+1,e[i].da);
        printf("\nThe ta of emp: %d is %f",i+1,e[i].ta);
        printf("\nThe total salary of emp: %d is %f",i+1,e[i].total_salary);
        printf("\n\n");
    }
  
    return 0;
}