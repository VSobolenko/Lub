#include <stdio.h>
#include <conio.h>
#include <math.h>
void main (){
	int i, n;
	float b[30], s=0, max;
	/*do{
		printf("Vvedite kol-vo elementov massiva (<30)\n");
		scanf("%d",&n);
	} 
	while (n>=30);*/
	n=4;
	
	for (i=0;i<n;i++){
		printf("Vvedite element [%d]\n", i+1);
		scanf("%f",b+i);
	}
	for (i=0;i<n;i++)
	s+=*(b+i);
	printf("Summa elementov matrici = %.2f\n", s);
	
	
	for (i=0;i<n;i++){
		max=*b;
			if (fabs(*(b+i))>max)
				max=*(b+i);
	}
	printf("Nomer maksimal'nogo elementa matrici po modyl'u = %d\n", ??????????????????);


}
