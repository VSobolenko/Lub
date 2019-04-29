#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int size = 0, nubber = 0, count = 0, j = 0;                  
	printf ("Size of first array: ");
	scanf ("%d", &size);

	float ArrayX[size];
	
	srand ( time ( 0 ) );
	
	for (int i = 0; i < size; i++) {
		ArrayX[i] =(float)(rand()%20001)/100-100;
		if ( ArrayX[i] == 0)
			nubber++;
	}
	printf ("Array X: \n");	

	for ( int i = 0; i < size; i++) {
		printf ("%f\n", ArrayX[i] );
	}
	printf ("\n");

	float ArrayY[size - nubber];
	int item;
	float buf;
	for (int i = 0; i < size; i++) {
		if ( ArrayX[i] > 0)
			count++;
		buf = ArrayX[i];
		item = i - 1;
		while ( item >= 0 && ArrayX[item] < buf) {
			ArrayX[item+1] = ArrayX[item];
			ArrayX[item] = buf;
			item--;
		}
	}
	for (int i = count - 1; i >= 0; i--) {
		ArrayY[j] = ArrayX[i];
		j++;
	}
	for (int i = size - 1; i >= count + nubber; i-- ) {
		ArrayY[j] = ArrayX[i];
		j++;	
	}
	
	printf ("Array Y: \n");	
	for ( int i = 0; i < size - nubber; i++) {
		printf ("%f\n", ArrayY[i] );
	}

	return 0;
}
