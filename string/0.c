#include<stdio.h>
void main()
{
static int a=5;
printf("%d" ,a--);
if(a){
main();
}
}