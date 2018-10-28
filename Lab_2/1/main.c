#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"Russian"); 
	
	float a, b, c, x;
	
	printf("¬ведите радиус м€чика: ");
	scanf("%f", &a);
	printf("¬ведите 1-ю сторону пр€моугольника: ");
	scanf("%f", &b);
	printf("¬ведите 2-ю сторону пр€моугольника: ");
	scanf("%f", &c);
	
	x = a*2;	
	if (x<b && x<c) printf("ћ€ч радиусом %.1f пройдЄт через пр€моугольник размером %.1f*%.1f",a,b,c);
	    else printf("ћ€ч радиусом %.1f не пройдЄт через пр€моугольник размером %.1f*%.1f",a,b,c);

	return 0;
		
}
	

