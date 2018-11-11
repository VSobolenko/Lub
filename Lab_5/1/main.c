#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main ()
{
    int i,j,n,m,s;
	int c=0,k=0;
	float a[n][n];
	
	printf("Vvedite kol-vo strok = ");
	scanf("%d",&n);
	printf("Vvedite kol-vo stolbtsov = ");
	scanf("%d",&m);
	printf("\n");
	
	if (n!=m){
		printf("Tol'ko kvadratnaya matritsa");
		return 0;
	}

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
    for (j=0;j<m;j++){
    	s=0;
        for (i=0;i<n;i++)
	    if(a[i][j]>0){
	  		s+=a[i][j];
	    }      
        printf("Summa  polozhitel'nykh elementov %d-stolbca matrici = %d\n", j+1, s);
    }	 
     
    for(i=0;i<n;i++){
    	c+=fabs(a[i][n-2-i]);        	              
    }
     
    for(i=0;i<n;i++){
    	k+=fabs(a[i][n-i]);        	              
    }
   
    if(c>k) printf("\nMinimum sredi summ moduley elementov diagonaley, parallel'nykh pobochnoy diagonali matritsy raven = %d",k);
    else if (k>c) printf("\nMinimum sredi summ moduley elementov diagonaley, parallel'nykh pobochnoy diagonali matritsy raven = %d",c);
    else if (c=k)printf("\nSumma moduley elementov diagonaley, parallel'nykh pobochnoy diagonali matritsy ravna");
  
    return 0;   
}
