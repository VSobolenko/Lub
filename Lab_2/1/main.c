#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"Russian"); 
	
	float a, b, c, x;
	
	printf("������� ������ ������: ");
	scanf("%f", &a);
	printf("������� 1-� ������� ��������������: ");
	scanf("%f", &b);
	printf("������� 2-� ������� ��������������: ");
	scanf("%f", &c);
	
	x = a*2;	
	if (x<b && x<c) printf("��� �������� %.1f ������ ����� ������������� �������� %.1f*%.1f",a,b,c);
	    else printf("��� �������� %.1f �� ������ ����� ������������� �������� %.1f*%.1f",a,b,c);

	return 0;
		
}
	

