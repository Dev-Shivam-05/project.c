#include<stdio.h>
main() {
	int x, y, sum, diffrence, multi, div, mod;
	x=5;
	y=5;
	sum=x + y;
	printf("The Sum of x + y = %d\n", sum);
	diffrence=x - y;
	printf("The Subtraction of x - y = %d\n", diffrence);
	multi=x * y;
	printf("The Multiplication of x * y = %d\n", multi);
	div=x / y;
	printf("The Division of x / y = %d\n", div);
	mod=x % y;
	printf("The Modulus of x % y = %d\n", mod);
}
