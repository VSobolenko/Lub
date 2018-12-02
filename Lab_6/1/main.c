#include <stdlib.h>
#include <stdio.h>
#include <math.h>

 
int main()
{
    int n, *ptr, i, j;
    int array_a[30];
    int max;
    int number_max = 0;
    int summ = 0;
    
    do{
        printf("Vvedite kolichestvo elementov massiva : ");
        scanf_s("%d", &n);
    } while (n >= 30);
        if (!(ptr = (int*)malloc(n*sizeof(int))))
    {
        puts("Not enough memory");
    }
    for (i = 0; i < n; i++)
    {
        printf("Chislo %d: ", i);
        scanf_s("%d", &array_a[i]);
    }
 
    max = array_a[0];
    for (i = 1; i < n; i++){
        if (abs(max) < abs(array_a[i])){
            max = array_a[i];
            number_max = i;
        }
    }
    printf("Nomer maksimal'nogo elementa: %d\n", number_max);
 
    for (i = 0; i < n; i++){
        if (array_a[i] > 0){
            for (j = i + 1; j < n; j++){
                summ += array_a[j];
            }
            break;
        }
    }
    printf("Summa elementov posle pervogo polozhitel'nogo: %d\n", summ);
    printf("\n");
    return 0;
}
