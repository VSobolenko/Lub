#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
	setlocale(LC_ALL,"Russian"); 
	
	float x,y,z,s,a,b;
	
	printf("¬ведите переменную X: ");
	scanf("%f",&x);
	printf("¬ведите переменную Y: ");
	scanf("%f",&y);
	printf("¬ведите переменную Z: ");
	scanf("%f",&z);
	
	a=10*(pow(x,1/3.) + pow(x,y+2));
	b=pow(asin(z),2) - fabs(x-y);
	
	s=sqrt(a)*b;
	
	printf("результат: %.4f",s);
	return 0;
	
}
