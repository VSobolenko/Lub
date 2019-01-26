#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float otv(float , float , float );

void main(void) {
	
	float x,y,z;
	
	printf("Enter variable X: ");
	scanf("%f",&x);
	printf("Enter variable Y: ");
	scanf("%f",&y);
	printf("Enter variable Z: ");
	scanf("%f",&z);
	
	
	printf("Answer: %.4f",otv(x,y,z));
	return 0;
	
}
float otv(float x, float y, float z) {
	float a,b,s;
	a=10*(pow(x,1/3.) + pow(x,y+2));
	b=pow(asin(z),2) - fabs(x-y);
	
	return s=sqrt(a)*b;
}
