#include <stdio.h>
#include <conio.h>

void main()
{
	int i,k,c,j;
	
    printf("Kolichestvo elementov massiva: ");
    scanf("%d", &k);
    
    int a[k];    
    for(i=1;i<=k;i++){
    	printf("Vvedite element massiva a[%d]= ",i);
    	scanf("%d", &a[i]);
    }
   c=0; 
        for (i = 0; i<=k; i++) {
            if (a[i] >0) 
        	    c++;
            
	    }     
    printf("Kolichestvo razlichnih elementov = %d",c);
   
    getch(); 
}
