#include <stdio.h>

/* getting input from user*/

   int main() { 
	  
	   int first;
	   int second;
	   //Author: Nayan kandel
	
	   printf("enter first number: \n");
	scanf("%d",& first);
	
       printf("enter second number: \n");
	scanf("%d",& second);
	
	   int sum = first + second;
	printf("the sum is %d\n", sum);
	
	   int sub = first - second;
	printf("the sub is %d\n", sub);
	
	   int mul = first * second;
	printf("the mul is %d\n", mul);
	
	   int div = first / second;
	printf("the div is %d\n", div);
	
	                         return 0; }
