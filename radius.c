#include <stdio.h>
#define pie 3.14
main() {
	float r;
	float result;
	printf("Enter Radius: ");
	scanf("%f", &r);
	result = pie * r * r;
	printf("Area of circle is: %f", result);
	return 0;
}
