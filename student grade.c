#include <stdio.h>
int main(){
	
	int Math;
	printf("Enter your math subject marks : ");
	scanf("%d", &Math);
	
	int optionalmath;
	printf("Enter your optional math subject marks : ");
	scanf("%d", &optionalmath);
	
	int computer;
	printf("Enter your computer subject marks :");
	scanf("%d", &computer);
	
	int english;
	printf("Enter your english subject marks : ");
	scanf("%d", &english);
	
	int social;
	printf("Enter your social subject marks : ");	
	scanf("%d", &social);
	
	int science;
	printf("Enter your science subject marks : ");
	scanf("%d", &science);
	
	int nepali;
	printf("Enter your nepali subject marks : ");
    scanf("%d", &nepali);
    
    float Total, percent;
    
    Total =Math + optionalmath + computer + english + social + science + nepali;
    printf("Total marks = %.f\n", Total ); 
    
    percent = ( Total / 700 )*100;
    printf("percent = %.f", percent);
    
    if(percent >=90){
		printf("Grade A+");
	}
		else if(percent >=80){
			printf("\n Grade A");
		} else if(percent >=70){
			printf("\n Grade B+");
		}
		else if(percent >=60){
		printf("\n gRADE B");
	}
	else if(percent >=50){
		printf("\n Grade C+");
	}
	else if(percent >=40){
		printf("\n Fail");
	}
	
	return 0;
}
