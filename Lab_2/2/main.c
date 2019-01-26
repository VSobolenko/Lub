#include <stdio.h>

void main() {
	 	
	int a, b, c;
	
	printf("Vvedite 1-yu storonu A treugol'nika: ");
	scanf("%d", &a);
	printf("Vvedite 2-yu storonu B treugol'nika: ");
	scanf("%d", &b);
	printf("Vvedite 3-yu storonu C treugol'nika: ");
	scanf("%d", &c);
		
	rez(a,b,c);
	return 0;		
}
int rez(int a, int b, int c) {
	if (a+b>c && b+c>a && a+c>b) printf("Treugol'nik razmerom A=%d B=%d C=%d sushchestvuyet",a,b,c);
		else  printf("Treugol'nik razmerom A=%d B=%d C=%d NE sushchestvuyet",a,b,c);
}
	

