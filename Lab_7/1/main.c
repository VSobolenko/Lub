#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int i,j,n,m,k;
	float a[50][50];
	
	printf("Vvedite kol-vo strok = ");
	scanf("%d",&n);
	printf("Vvedite kol-vo stolbtsov = ");
	scanf("%d",&m);
	printf("\n");

	for(i=0;i<n;i++)
	for(j=0;j<m;j++){
		printf("Vvedite element [%d,%d] - ", i+1, j+1);
		scanf("%f",&a[i][j]);
	}
	
	printf("\nVasha matritsa\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
	 	printf(" %.f  ",a[i][j]);
	 	printf("\n");
	}	 
  	printf("\n");
  	
  
  	for (i=0;i<n;i++){
  		for(j=0;j<m;j++)
        if (a[i][j]<0) 
        printf("%d stroka soderzhit otritsatel'nyy element\n ",i+1);
  	}
   
    return 0;   
}
