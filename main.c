#include<stdio.h>
#include<conio.h>
  
/* program to calculate the volume of cuboid*/ 
  int
main () 
{
  
    /*defining the variables */ 
  float length, breadth, height, volume;
  
 
    /*getting input from user */ 
    
printf ("enter length : ");
  
scanf ("%f", &length);
  
printf ("enter breadth : ");
  
scanf ("%f", &breadth);
  
printf ("enter height : ");
  
scanf ("%f", &height);
  
 
    /*defining the formula for volume */ 
    volume = length * breadth * height;
  
 
printf ("VOC: %.2f\n", volume);
  
return 0;

}
