#include <stdio.h>
#include <conio.h>

float  length, breadth, perimeter;


int main(){

 printf("enter length : ");
 scanf("%f", &length);


 printf("enter breadth : ");
 scanf("%f", &breadth);

 perimeter = 2 * (length + breadth);
 printf("por :%.2f\n", perimeter);

 return 0;

 }
