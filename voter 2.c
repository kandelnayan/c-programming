#include <stdio.h>
#include <conio.h>
int main(){
	int age;
	printf("enter your age : \n");
	scanf("%d",&age);
	
	if(age >=18){
		printf("you are voter");
	}else{
		printf("you are not voter");
	}
	return 0;
}
