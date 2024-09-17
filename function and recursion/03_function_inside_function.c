#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
     GoodMorning();
     
    return 0;
}

void GoodMorning(){
    printf("Good morning Nikhil\n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf("Good afternoon Nikhil\n");
     GoodNight();
}
void GoodNight(){
    printf("Good night Nikhil\n");
}