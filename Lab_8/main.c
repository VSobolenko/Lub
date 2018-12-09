
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct pokupatel { 
	char FIO[40];
	char DomAdres[40];
	int Nomer; 
	int kartochka;
}; 
 
struct pokupatel pokupateli[30]; 
struct pokupatel buffer; 

int i,j,n,menyu,x,k,Nomer1,kartochka1,z=0,y,r, s;
char FIO1[30],DomAdres1[30];


int main() {
	printf("Vvedite kol-vo pokupateley: "); 
	scanf("%d",&n); 
	for(i=0;i<n;i++) {
		printf("Pokupatel %d\n", i+1); 
		puts("Vvedite F.I.O.: "); 
		fflush(stdin); 
		gets(pokupateli[i].FIO); 
		puts("Vvedite domashniy adres: "); 
		fflush(stdin); 
		gets(pokupateli[i].DomAdres); 
		puts("Vvedite nomer telefona: "); 
		scanf("%d", &pokupateli[i].Nomer); 
		puts("Vvedite nomer kartochki: "); 
		scanf("%d", &pokupateli[i].kartochka); 
  	} 	
	printf("\n");

	while(1) {
		printf("\n  menyu:\nSortirovka - 1\nPoisk - 2\nIzmeneniye - 3\nUdaleniye - 4\nSpisok - 5\nVykhod - 6 \n"); 
	 	scanf("%d",&menyu);
	 	switch(menyu) {
			case 1: { 	
				printf("\nKriterii sortirovki:\n");
				printf("1-F.I.O.\n");
				printf("2-domashniy adres\n");
				printf("3-nomer telefona\n");
				printf("4-nomer kartochki\n");
				printf("0-Vihod iz kriteria\n");
				scanf("%d",&x);
	
				switch(x){
					case 0:  break;
					case 1:{
						for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if(strcmp(pokupateli[i].FIO, pokupateli[j].FIO)>0){  
								buffer=pokupateli[i]; 
						    	pokupateli[i]=pokupateli[j]; 
								pokupateli[j]=buffer; 
			   					} 
			   
			   			for(i=0;i<n;i++) {
							printf("\nPokupatel %d\n",i+1);
							printf("\nF.I.O.: %s ",pokupateli[i].FIO);
							printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
							printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
							printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
			   			}
						break;
					}
					case 2:{
						for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if(strcmp(pokupateli[i].DomAdres, pokupateli[j].DomAdres)>0){  
								buffer=pokupateli[i]; 
						    	pokupateli[i]=pokupateli[j]; 
								pokupateli[j]=buffer; 
			   				}
			   
			    		for(i=0;i<n;i++) {
							printf("\nPokupatel %d\n",i+1);
							printf("\nF.I.O.: %s ",pokupateli[i].FIO);
							printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
							printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
							printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
			   			}
						break;
					}
					case 3:{
						for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (pokupateli[i].Nomer>pokupateli[j].Nomer){  
							    buffer=pokupateli[i]; 
							    pokupateli[i]=pokupateli[j]; 
							    pokupateli[j]=buffer; 
			   				} 
			   
			   			for(i=0;i<n;i++) {
							printf("\nPokupatel %d\n",i+1);
							printf("\nF.I.O.: %s ",pokupateli[i].FIO);
							printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
							printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
							printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
			   			}
						break;
					}
					case 4:{
						for (i=0; i<n-1; i++)
			 			for (j=i+1; j<n; j++)    
			   				if (pokupateli[i].kartochka>pokupateli[j].kartochka){  
							    buffer=pokupateli[i]; 
							    pokupateli[i]=pokupateli[j]; 
							    pokupateli[j]=buffer; 
			   				} 
			   
			   			for(i=0;i<n;i++) {
							printf("\nPokupatel %d\n",i+1);
							printf("\nF.I.O.: %s ",pokupateli[i].FIO);
							printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
							printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
							printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
			   			}
						break;
					}
				} 
				break;
	   		}
			case 2: {
				while(1) {
					printf("\nKriterii poiska:\n");
					printf("1-F.I.O.\n");
					printf("2-domashniy adres\n");
					printf("3-nomer telefona\n");
					printf("4-nomer kartochki\n");
					printf("0-Vihod iz kriteria\n");
					scanf("%d",&x);
					
					switch(x) {
						case 0:break;
						case 1: {
							z=0;
							printf("Vvedite F.I.O.: ");
							fflush(stdin);
							gets(FIO1);
							for(i=0;i<n;i++) {
								if(strcmp(FIO1,pokupateli[i].FIO)==0) {
									printf("\nPokupatel %d\n",i+1);
									printf("\nF.I.O.: %s ",pokupateli[i].FIO);
									printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
									printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
									printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
				            		z++;
								}						
							}
								if(z==0)
									printf("ne naydeno\n");
							break;
						}
						case 2:	{
					 		z=0;
                     		printf("domashniy adres: ");
					 		fflush(stdin);
					 		gets(DomAdres1);
					 		for(i=0;i<n;i++) {
								if(strcmp(DomAdres1,pokupateli[i].DomAdres)==0) {
									printf("\nPokupatel %d\n",i+1);
									printf("\nF.I.O.: %s ",pokupateli[i].FIO);
									printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
									printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
									printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
				            		z++;
								}						
							}
								if(z==0)
									printf("ne naydeno\n");					
							break;
						}
						case 3: {
							z=0;
							printf("nomer telefona: ");
							fflush(stdin);
							scanf("%d",&Nomer1);
							for(i=0;i<n;i++) {
								if(Nomer1==pokupateli[i].Nomer) {
									printf("\nPokupatel %d\n",i+1);
									printf("\nF.I.O.: %s ",pokupateli[i].FIO);
									printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
									printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
									printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
				            		z++;
								}						
							}
								if(z==0)
									printf("ne naydeno\n");
							break;
						}
						case 4: {
					 		z=0;
					 		printf("nomer kartochki: ");
					 		fflush(stdin);
					 		scanf("%d",&kartochka1);
				 	 		for(i=0;i<n;i++) {
								if(kartochka1==pokupateli[i].kartochka) {
									printf("\nPokupatel %d\n",i+1);
									printf("\nF.I.O.: %s ",pokupateli[i].FIO);
									printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
									printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
									printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
				            		z++;
								}						
							}
								if(z==0)
									printf("Ne naiden\n");
							break;
						}
              
					}
		    		if(x==0)
		    			break;
						continue;
		    	}
				break;
			}
			case 3: {
				while(1) {
			 		printf("\nVvedite pokupatelya kogo nado izmenit' ");
					scanf("%d",&r);
			  		printf("\nVvedite kriterii \n1-F.I.O. \n2-domashniy adres \n3-nomer telefona \n4-nomer kartochki  \n0-Vihod \n");
			 		scanf("%d",&y);
		  	  		switch(y) {
						case 0:break;
						case 1: {
							printf("Novaya F.I.O.: ");
							fflush(stdin);
							gets(FIO1);
							strcpy(pokupateli[r-1].FIO,FIO1);
							break;
						}
					case 2: {
						printf("novyy domashniy adres: ");
						fflush(stdin);
						gets(DomAdres1);
						strcpy(pokupateli[r-1].DomAdres,DomAdres1);
						break;
					}
					case 3: {
						printf("novyy nomer telefona: ");
						scanf("%d",&Nomer1);
						pokupateli[r-1].Nomer=Nomer1;
						break;
					}
					case 4:
					{
						printf("novyy nomer kartochki: ");
						scanf("%d",&kartochka1);
						pokupateli[r-1].kartochka=kartochka1;
						break;
					}
				
				}
					if(y==0)
		    			break;
					continue;
		    	}
				break;
			}
			case 4: {
				printf("Vvedite nPokupatelya kogo nado udalit' ");
				scanf("%d",&s);
				s--;
				printf("\n");
				printf("\nPokupatel %d\n",i+1);
				printf("\nF.I.O.: %s ",pokupateli[i].FIO);
				printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
				printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
				printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
			
				for(s;s<=n;s++) {
				strcpy(pokupateli[s].FIO, pokupateli[s+1].FIO);
				strcpy(pokupateli[s].DomAdres, pokupateli[s+1].DomAdres);
				pokupateli[s].Nomer = pokupateli[s+1].Nomer;
				pokupateli[s].kartochka = pokupateli[s+1].kartochka;
				}
				n--;
				break;
			}
			case 5: {
				for(i=0;i<n;i++) {
					printf("\n");
					printf("\nF.I.O.: %s ",pokupateli[i].FIO);
					printf("\ndomashniy adres: %s ",pokupateli[i].DomAdres);
					printf("\nnomer telefona: %d ",pokupateli[i].Nomer);
					printf("\nnomer kartochki: %d ",pokupateli[i].kartochka);
				}
				break;
	    	}
  			case 6: exit(1);
		}
		continue;
	}
	return 0;
}
