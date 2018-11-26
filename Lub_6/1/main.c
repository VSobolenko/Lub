#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main(){
	int i, n;
	float b[30], max;
	do{
		printf("Vvedite kol-vo elementov massiva (<30)\n");
		scanf("%d",&n);
	} while (n>=30);
	for (i=0;i<n;i++)
	{
		printf("Vvedite element [%d]\n", i+1);
		scanf("%f",b+i);
	}

	max=*b;
	for (i=0;i<n;i++)
	if (fabs(*(b+i))>fabs(max)){
		max=*(b+i);
		
	}
	printf("Max element po modyl'u = %.2f\n", max);	


}
