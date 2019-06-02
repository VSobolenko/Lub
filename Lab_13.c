#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int size = 0, nubber = 0, count = 0, j = 0;      
	float ArrayY[size - nubber];
	int Coun;
	float Buffer;            
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
	for (int i = 0; i < size; i++) {
		if ( ArrayX[i] > 0)
			count++;
		Buffer = ArrayX[i];
		Coun = i - 1;
		while ( Coun >= 0 && ArrayX[Coun] < Buffer) {
			ArrayX[Coun+1] = ArrayX[Coun];
			ArrayX[Coun] = Buffer;
			Coun--;
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
