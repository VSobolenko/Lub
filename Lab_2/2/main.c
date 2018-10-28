#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"Russian"); 
	
	int a, b, c;
	
	printf("Введите 1-ю сторону А треугольника: ");
	scanf("%d", &a);
	printf("Введите 2-ю сторону B треугольника: ");
	scanf("%d", &b);
	printf("Введите 3-ю сторону C треугольника: ");
	scanf("%d", &c);
		
	if (a+b>c && b+c>a && a+c>b) printf("Треугольник размером A=%.0d B=%.0d С=%.0d существует",a,b,c);
		else  printf("Треугольник размером A=%.0d B=%.0d С=%.0d не существует",a,b,c);
	return 0;		
}
	

