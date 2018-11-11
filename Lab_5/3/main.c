#include <stdio.h>
#include <stdlib.h>

void main()
{
	int N=3;
    int a[N][N],i,j,k,m;
    for(i=0;i<N;i++)
	for(j=0;j<N;j++){
		printf("Vvedite element [%d,%d] - ", i+1, j+1);
		scanf("%i",&a[i][j]);
}
    for (i=0;i<N;i++)
        for(j=0;j<N;j++)
        if (a[i][j]<0) for(k=0,m=i;k<N;k++) a[k][m]/=2;
    for (i=0;i<N;i++)
        for(j=0;j<N;j++) {printf("%i ",a[i][j]); if(j==2) printf("\n");}
    return 0;
}
