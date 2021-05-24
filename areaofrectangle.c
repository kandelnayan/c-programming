/* program to calculate are of rectangle*/
/* authors : nayan kandel*/

#include <stdio.h>
#include <conio.h>
/* initialising  variables */
float  length, breath, area;

int main(){
	printf("enter length : ");
	scanf("%f", &length);
	
	printf("enter breath : ");
	scanf("%f", &breath);

    /* formula to calculate area of rectangle */	
	area = length * breath;
	printf("aor :%.2f\n", area);
	return 0;
}
