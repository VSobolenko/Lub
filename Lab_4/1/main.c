#include <stdio.h>

int main() {
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d %d %d %d %d %d %d %d %d %d", a[0]-n, a[1]-n, a[2]-n, a[3]-n, a[4]-n, a[5]-n, a[6]-n, a[7]-n, a[8]-n, a[9]-n, a[10]-n);
    
return 0;
}
