//Lab1 A
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI2 3.14

int main(void){
	float r;
	float area = 1.0;
	
	printf("Please input the radius of a circle \n>");
	scanf("%f", &r);
	area = r*r*PI2;
	printf("The area of the circle with radius %.2f is %.2f\n\n",r,area);
	
	return EXIT_SUCCESS;
}