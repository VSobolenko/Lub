#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,n,m,k;
	float a[100][100];
	
	printf("Vvedite razmernoct matrisi = ");
	scanf("%d",&n);
	printf("\n");	
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++){
		printf("Vvedite element [%d,%d] - ", i+1, j+1);
		scanf("%f",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
	 	printf(" %.f  ",a[i][j]);
	 	printf("\n");
	}
	printf("\n");
	
	for (i=0;i<n;i++)
    for(j=0;j<n;j++)
     if (a[i][j]<0) 
	  for(k=0,m=i;k<n;k++) 
	  a[k][m]/=2;	
	printf("\n");
		
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	 	printf(" %.f  ",a[i][j]);
	 if(j==n) printf("\n");
	}
	return 0;
}

