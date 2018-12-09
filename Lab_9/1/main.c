#include<stdio.h>
#include <locale.h>
#include <string.h>
	
struct text { 
	char a[40];
};


struct text texts[30];
struct text buffer;
int n,i,j,z;

int main()
{
	setlocale(LC_ALL, "russian");
    printf("kol-vo strok ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
		printf("%d-ya stroka: ", i+1); 
		fflush(stdin); 
		gets(texts[i].a);
	}
	
	FILE *f1;
 	if(!(f1 = fopen("F1.txt", "w+t")))
 	{
 		printf("Невозможно создать файл\n"); return 0;
 	}
 	for(i=0;i<n;i++) {
		fprintf(f1,"\n%d: %s ",i+1,texts[i].a);
 	}
 
	printf("Данные записаны в файл F1\n");
 	fclose(f1);
 	
 
 	for (i=0; i<n-1; i++)
		for (j=i+1; j<n; j++)
			if (strncmp(texts[i].a, texts[j].a,1) <0)
			{
				buffer=texts[i]; 
				texts[i]=texts[j]; 
				texts[j]=buffer; 
			}
	



 	FILE *f2;
 	if(!(f2 = fopen("F2.txt", "w+t")))
 	{
 		printf("Невозможно создать файл\n"); return 0;
 	}
 	
 	for (i=0; i<n; i++)
	{
		fprintf(f2,"%s\n ", buffer);
    }
 
	printf("Данные записаны в файл F2\n");
 	fclose(f2);
 	return 0;
}




/*  #include <locale.h>         setlocale(LC_ALL, "russian");             */
