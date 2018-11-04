#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void main ()
{
	int i,j,n,m,s,c=0,k=0;
	float a[10][10];
	
	n=3;
	m=3;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++){
		printf("Vvedite element [%d,%d] - ", i+1, j+1);
		scanf("%f",&a[i][j]);
	}
	
	 for(i=0;i<n;i++){
	 	for(j=0;j<m;j++)
	 	printf("  %.f ",a[i][j]);
	 	printf("\n");
	 }	 

     for (j=0;j<m;j++){
         s=0;
         for (i=0;i<n;i++)
	     if(a[i][j]>0){
	  	    s+=a[i][j];
	     }      
         printf("Summa  polozhitel'nykh elementov %d-stolbca matrici = %d\n", j+1, s);
     }	 
     
     for(i=0;i<=n;i++){     
        for (j==m; j>0;j--){
        	 c+=a[i][j-1];               
        }
    }
     printf("%d \n",c);
     
    for (j==m; j>0;j--){     
        for(i=0;i<=n;i++){
        	k+=a[i-2][j-1];               
        }
    }
     printf("%d \n",k);
     
     if(fabs(s)>fabs(k)) printf("Verkhnyaya bol'she");
     else printf("Nizhnyaya bol'she");
  
    return 0;
     
}
