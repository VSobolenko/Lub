#include <stdio.h>

float rez(float , float , float );

int main() {	
	float a, b, c;
	
	printf("Vvedite radius myachika: ");
	scanf("%f", &a);
	printf("Vvedite 1-yu storonu pryamougol'nika: ");
	scanf("%f", &b);
	printf("Vvedite 2-yu storonu pryamougol'nika: ");
	scanf("%f", &c);
	
	rez(a,b,c);
	
	return 0;		
}
	
float rez(float a, float b, float c) {
	float x;
	x = a*2;	
	if (x<b && x<c) printf("Myach radiusom %.1f proydot cherez pryamougol'nik razmerom %.1f*%.1f",a,b,c);
	    else printf("Myach radiusom %.1f NE proydot cherez pryamougol'nik razmerom %.1f*%.1f",a,b,c);
}
