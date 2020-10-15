#include<stdio.h>
#include<stdlib.h>

int main(void) { 
    float Array[3][4]; 
    int i,j,k; 
    float Buffer; 
    float x1 = 0, x2 = 0, x3 = 0;

    for ( i = 0; i < 3; i++) { 
        for ( j = 0; j < 4; j++) { 
            printf ("Enter Array[%d,%d]: ", i+1, j+1); 
            scanf ("%f", &Array[i][j]);
        } 
    } 
    Buffer = Array[0][0];

    for ( j = 0; j < 4; j++) { 
        Array[0][j]/= Buffer; 
    } 
    Buffer = 0; 
    Buffer =(-1)*Array[1][0];

    for ( j = 0; j < 4; j++) { 
        Array[0][j]*= Buffer; 
        Array[1][j] = Array[0][j] + Array[1][j]; 
        Array[0][j]/= Buffer;
    } 
    Buffer = 0; 
    Buffer =(-1)*Array[2][0];

    for ( j = 0; j < 4; j++) { 
        Array[0][j]*= Buffer; 
        Array[2][j] = Array[0][j] + Array[2][j]; 
        Array[0][j]/= Buffer;
    } 
    Buffer = 0; 
    Buffer = Array[1][1];

    for ( j = 0; j < 4; j++) { 
        Array[1][j]/= Buffer; 
    }
    Buffer = 0; 
    Buffer = Array[2][1]*(-1);

    for ( j = 0; j < 4; j++) { 
        Array[1][j]*= Buffer; 
        Array[2][j] = Array[1][j] + Array[2][j]; 
        Array[1][j]/= Buffer;
    } 
    Buffer = 0; 
    Buffer = Array[2][2];

    for ( j = 0; j < 4; j++) { 
        Array[2][j]/= Buffer; 
    } 
    Buffer = 0;

    x3 = Array[2][3]; 
    x2 = Array[1][3] + (-1)*Array[1][2]*x3; 
    x1 = Array[0][3] + (-1)*Array[0][1]*x2 + (-1)*Array[0][2]*x3;

    printf ("Answer:\n x1 = %.2f\nx2 = %.2f\nx3 = %.2f\n", x1, x2, x3);

    return 0;
}