#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int HashFunction(int k) {
    int N=13; double A=0.618033;
    int h=N*fmod(k*A, 1);
    return h;
}

int main() {
    int i, r, n, average, sum;
    printf ("Enter the number of random numbers = ");
    do {
        scanf("%d", &n);
    } while (n<1);

    int Numbers[n], Function[n];

    srand(time(NULL));

    for (i = 0; i < n; i++) {
        r = rand();
        Numbers[i] = r;
        printf ("%d ", Numbers[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        r = Numbers[i];
        Function[i] = HashFunction(r);
        printf ("%d ", Function[i]);
    }

    sum = 0;
    for (i = 0; i < n; i++) {
        sum +=Function[i];
    }

    //printf ("\nsum = %d ", sum);
    average = sum / n;
    //printf ("\naverage = %d ", average);

    sum = 0;
    for (i = 0 ; i < n; i++) {
        r = Function[i];
        if (r > average) {
            sum ++;           
        }
    }
    printf("\n");

    printf ("More than average %d ", sum);

    return 0;
}
