#include <stdio.h>
#include <locale.h>

void main(){	
	setlocale(LC_ALL,"Russian");
	
    int a, x, y, z;
	
	printf("������� ����������� ����� �� 10 �� 50: " );
	scanf("%d", &a);
	
	for (x=0; x<=10; x++)
	for (y=0; y<=10; y++)
	for (z=0; z<=10; z++)
	
	while (x+y*3+z*5 == a && x+y+z == 10)
	{
		printf("�� ������ ��������� �� %d*5 + %d*3 + %d = %d",z,y,x,a);	
		return 0;	
	}
	while (x+y*3+z*5 != a && x+y+z != 10)
	{
		printf("��������� ������!");		
		return 0;
	}
}
