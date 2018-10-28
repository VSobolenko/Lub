#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	float x, y;
	
	printf("Enter variable: ");
	scanf("%f",&x);
	
	y=x*x*x*8;
	
	printf("Answer: %.0f",y);
	return 0;
	
}
