#include <stdio.h>
int main(){
	
	// calculating interest
	
	float principal, time, rate, interest;
	
	printf("enter principal : rs");
	scanf("%f", &principal);
	 printf("enter time : t ");
	scanf("%f", &time);
	printf("enter rate :r");
	scanf("%f", &rate);
	
	interest = (principal * time * rate)/100;
	printf("the interest is rs%.f\n", interest);
	
	
	float amount;
	amount = principal + interest;
	printf("the amount is rs%.f", amount);
	 return 0;
 }
