#include<stdio.h>
main() {
unsigned x = 5, y =& x,*p = y + 0;
printf ("%u", *p);
}