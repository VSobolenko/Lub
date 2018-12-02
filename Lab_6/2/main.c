#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
void main(){
	int i,j,n,m,s,s1,s2,s3,*ptr;
	float a[100][100];	
	n=3;
	m=3;	
	for(i=0;i<n;i++)
	for(j=0;j<m;j++){
		printf("Vvedite element [%d,%d] - ", i+1, j+1);
		scanf("%f",&a[i][j]);
	}	
	if(!(ptr=(int*)malloc(n*sizeof(int)))){
		puts("Not enough memory"); 
		getch(); 
		return;
	} 
	printf("\nVasha matritsa\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
	 	printf(" %.f  ",a[i][j]);
	 	printf("\n");
	}	 	
 	s1=0;
 	s2=0;
 	s3=0; 			
 	for (j=0;j<m;j++){
 		if (a[0][j]>0 && (int) a[0][j]%2==0){
 			s1+=a[0][j];
 		}
	}	
	for (j=0;j<m;j++){
 		if (a[1][j]>0 && (int) a[1][j]%2==0){
 			s2+=a[1][j];
 		}
	}	
	for (j=0;j<m;j++){
 		if (a[2][j]>0 && (int) a[2][j]%2==0){
 			s3+=a[2][j];
 		}
	}
	printf("Summa polozhitel'nykh chotnykh elementov 1-stroki = %d;\nSumma polozhitel'nykh chotnykh elementov 2-stroki = %d;\nSumma polozhitel'nykh chotnykh elementov 3-stroki = %d;\n ",s1,s2,s3);
	printf("\n");
	
	if(s1>s2 && s2>s3){
		printf("\nStroki raspolozheny v poryadke vozrastaniya:\n");
		for(i=2;i<3;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
		 	printf("\n");
		}
		for(i=1;i<2;i++){
			for(j=0;j<m;j++)
		 	printf(" %.f  ",a[i][j]);
		 	printf("\n");
		}
		for(i=0;i<1;i++){
			for(j=0;j<m;j++)
			printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
	}
	if (s1>s3 && s3>s2){
		printf("\nStroki raspolozheny v poryadke vozrastaniya:\n");	
		for(i=1;i<2;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
		for(i=2;i<3;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}	
		for(i=0;i<1;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}	
	}
	if (s2>s1 && s1>s3){
		printf("\nStroki raspolozheny v poryadke vozrastaniya:\n");
		for(i=2;i<3;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
		for(i=0;i<1;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
		for(i=1;i<2;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}

	}
	if (s2>s3 && s3>s1){
		printf("\nStroki raspolozheny v poryadke vozrastaniya:\n");
		for(i=0;i<1;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}		
		for(i=2;i<3;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
		for(i=1;i<2;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}	
	}
	if (s3>s1 && s1>s2){
		printf("\nStroki raspolozheny v poryadke vozrastaniya:\n");
		for(i=1;i<2;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
		for(i=0;i<1;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
		for(i=2;i<3;i++){
			for(j=0;j<m;j++)
	 		printf(" %.f  ",a[i][j]);
	 		printf("\n");
		}
	}
	if (s3>s2 && s2>s1){
		printf("\nStroki raspolozheny v poryadke vozrastaniya:\n");
		for(i=0;i<n;i++){
		for(j=0;j<m;j++)
	 	printf(" %.f  ",a[i][j]);
	 	printf("\n");
	}
	}
	if (s1==s2 || s1==s3 || s3==s2){
		printf("Summa polozhitel'nykh chotnykh elementov 2-kh ili boleye strok sovpadayut, poetomu, v poryadke vozrastaniya, stroki raspolozhit' nel'zya");
	}
	        
}
