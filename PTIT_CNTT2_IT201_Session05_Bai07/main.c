#include <stdio.h>
void getFibonanciOfArray(int fibonaci[], int i, int n, int prev , int curr ) {
    if (i >= n) {
       return ;
    }
    if (i==0) {
        fibonaci[i] = 0;
        getFibonanciOfArray(fibonaci, i+1, n, 0, 1);
    } else if (i==1) {
        fibonaci[i] = 1;
        getFibonanciOfArray(fibonaci, i+1, n, 0, 1);
    }else {
        fibonaci[i] = prev + curr;
        getFibonanciOfArray(fibonaci, i+1, n, curr, fibonaci[i]);
    }
}
int main(void) {
    int n;
    scanf("%d", &n);
    int fibonaci[n];
    getFibonanciOfArray(fibonaci,0,n,0,1);
    for (int i = 0; i < n; i++) {
        printf("%d", fibonaci[i]);
    }
    return 0;
}

