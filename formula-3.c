#include <stdio.h>

	 main(){
	float p;
	float r;
	float n;
	float result;
	printf("Enter Principle: ");
	scanf("%f",&p);
	printf("Enter Rate: ");
	scanf("%f",&r);
	printf("Enter Month: ");
	scanf("%f",&n);
	result = p*r*n/100;
	printf("Rate of Interest:  %f" ,result);
	return 0;
}
