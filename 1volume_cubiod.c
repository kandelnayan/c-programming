#include <stdio.h>
#include <conio.h>
int main(){
	
	/*defining the variables */ 
	float length, breadth, height;


	/*getting input from user */ 
	printf("enter length : ");
	scanf("%f", &length);
	
	printf("enter breadth : "); 
	scanf("%f", &breadth);
	
	printf("enter height : ");
	scanf("%f", &height);
	
	/*defining the formula for volume */
    float volume = length * breadth * height;
	
	printf("voc : %.2f\n", volume);
	
	return 0;
}
