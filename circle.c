#include <stdio.h>
#include <conio.h>

#define PI 3.1415
#define RADIUS 10

main(){
	float area, circumference;
	
	area = PI * RADIUS * RADIUS;
	circumference = 2 * PI * RADIUS;
	
	printf("area is:%.2f\n",area);
    printf("circumference is:%.2f\n",circumference);
}
