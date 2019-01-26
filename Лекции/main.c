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
	
	int K;
	char P[30];
	printf("Сколько строк выводить?\n");
	scanf("%d", &K);
	printf("КАКИЕ?\n ФИО-FIO\n domashniy adres-DomAdres\n nomer telefona-Nomer\n nomer kartochki-kartochka");
	for(i=0; i<K; i++){
		scanf("%d",&P[i]);
	}
	for(i=0; i<K; i++){
		printf("%d",pokupateli[i].P[i]);
	}
	
	
}
