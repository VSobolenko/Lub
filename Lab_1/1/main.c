#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;	
	
	printf("Enter variable: ");
	scanf("%d",&x);
	
	printf("Answer: %d", resl(x));
 	return 0;
}

int resl(int y) { 
	return y*y*y*8; 
}
