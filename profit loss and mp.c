#include <stdio.h>
int main () {
	
	float sp, cp, profit, loss;
	
	printf("enter sp : ");
	scanf("%f", &sp);
	printf("enter cp : ");
	scanf("%f", &cp);
	
	profit = sp - cp;
	printf("the profit is %.f\n", profit);
	
	loss = cp - sp;
	printf("the loss is %.f\n", loss);
	
	sp = profit + cp;
	printf("the sp is %.f\n", sp);
	
	
	float mp; 
	printf("enter mp : ");
	scanf("%f", &mp);
	float discount;
	discount = mp - sp;
	printf("the discount is %f\n", discount);
	
	
	
	return 0;

	}
	
