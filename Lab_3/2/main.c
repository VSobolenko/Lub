#include <stdio.h>
#include <locale.h>

void main(){	
	setlocale(LC_ALL,"Russian");
	
    int n,m,t,i,x;
	
	printf("������� ���-�� ����������(N): " );
	scanf("%d", &n);
	printf("������� ����(�): " );
	scanf("%d", &m);
	printf("� ������ ��������� �������� �������?(�): " );
	scanf("%d", &t);
	
	if (t<=n)
	{
		if (m>n)
		{
			for (i=0; i<m; i++)	
			while ((t+(m-n*i))<n){				
				printf("�����: %d",x);
			    return 0;
			}				
		}
		else if (m<n)
		{
			while (x<((t-1)+m))
			{
				printf("�����: %d",x);
			    return 0;
			}			
		}
		else if (m=n)
		{
			x == m;
			printf("�����: %d",x);
			return 0;
		}
	}
	else printf("������");
}
