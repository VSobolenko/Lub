#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"Russian"); 
	
	int k;
	
	printf("Введите цифру от 1до 10: ");
	scanf("%d", &k);
	
	switch(k)
	{
		case 1 : printf("I"); break;
		case 2 : printf("II"); break;
		case 3 : printf("III"); break;
		case 4 : printf("IV"); break;
		case 5 : printf("V"); break;
		case 6 : printf("VI"); break;
		case 7 : printf("VII"); break;
		case 8 : printf("VIII"); break;
		case 9 : printf("IX"); break;
		case 10 : printf("X"); break;
		default : printf("Неверное значение");		
	}	
	return 0;		
}

	

