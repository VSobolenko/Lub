#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"Russian"); 
	
	int a, b, c;
	
	printf("������� 1-� ������� � ������������: ");
	scanf("%d", &a);
	printf("������� 2-� ������� B ������������: ");
	scanf("%d", &b);
	printf("������� 3-� ������� C ������������: ");
	scanf("%d", &c);
		
	if (a+b>c && b+c>a && a+c>b) printf("����������� �������� A=%.0d B=%.0d �=%.0d ����������",a,b,c);
		else  printf("����������� �������� A=%.0d B=%.0d �=%.0d �� ����������",a,b,c);
	return 0;		
}
	

