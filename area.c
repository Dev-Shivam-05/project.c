#include <stdio.h>

int main(){
	int b,h;
	float result;

	printf("Enter Breadth: ");
	scanf("%d",&b);
	
	printf("Enter Height: ");
	scanf("%d",&h);
	
	result = 0.5*b*h;
	
	printf("Area of Traiangle is:  %f",result);
	
	return 0;
}    
