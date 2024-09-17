#include<stdio.h>
void display();     // Function prototype
int main(){
    int a;
    printf("Intializing display function\n");
    display();    // Function call
    printf("Display function finished its work\n");
    return 0;
}
//Function difinition
void display(){
    printf("This is a display\n");
}