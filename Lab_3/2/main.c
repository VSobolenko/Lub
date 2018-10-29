#include <stdio.h>
#include <locale.h>

void main(){	
	setlocale(LC_ALL,"Russian");
	
    int n,m,t,i,x;
	
	printf("Введите Кол-во участников(N): " );
	scanf("%d", &n);
	printf("Введите счёт(М): " );
	scanf("%d", &m);
	printf("С какого участника ничинать считать?(Т): " );
	scanf("%d", &t);
	
	if (t<=n)
	{
		if (m>n)
		{
			for (i=0; i<m; i++)	
			while ((t+(m-n*i))<n){				
				printf("Ответ: %d",x);
			    return 0;
			}				
		}
		else if (m<n)
		{
			while (x<((t-1)+m))
			{
				printf("Ответ: %d",x);
			    return 0;
			}			
		}
		else if (m=n)
		{
			x == m;
			printf("Ответ: %d",x);
			return 0;
		}
	}
	else printf("Ошибка");
}
