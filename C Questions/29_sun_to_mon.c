#include<stdio.h>

int main(){
    char ch;
    printf("Enter s for sunday\nm for monday\nt for tuesday\nw for wednesday\nh for thursday\nf for friday\nu for saturday");
    scanf("%c",&ch);

    switch(ch)
    {
        case'm':
        case'M':
        printf("monday");
        break;
        case't':
        case'T':
        printf("tuesday");
        break;
        case'w':
        case'W':
        printf("wednesday");
        break;
        case'h':
        case'H':
        printf("thursday");
        break;
        case'f':
        case'F':
        printf("friday");
        break;
        case'u':
        case'U':
        printf("saturday");
        break;
        case's':
        case'S':
        printf("sunday");
        break;
        default:
        printf("worng output");
        break;
    }

    return 0;
}