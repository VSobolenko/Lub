#include <stdio.h>  
#include <conio.h> 
 
int Enumeration(int M, int T, int N)
{
    int count = M - T,i;
    for( i = 1; ; i++, count++)
    {
        if(count == M)
            break;
        if(N < i)
            i = 1;
    }
    return i;
}
 
int main()
{
    int i,N,M,T;
    do
    {
        printf("Enter N : ");
        scanf("%d",&N);
        printf("Enter M : ");
        scanf("%d",&M);
        printf("Enter T : ");
        scanf("%d",&T);
        for(i = 0; i < 5; i++)
        {
            printf(
                "CIRCLE : %d IN CIRCLE : %d COMPETITOR : %d - OUT\r\n", 
                i + 1,
                N - i,
                Enumeration(M, ((i == 0) ? T : 1), N - i) + i
            );
        }
        printf("Press \'y\' for new input\r\n");
    }
    while(getch() == 'y');
    return 0;
}
