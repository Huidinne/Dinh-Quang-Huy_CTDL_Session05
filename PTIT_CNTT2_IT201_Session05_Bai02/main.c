#include <stdio.h>
int sum(int n) {
    int a;
    if (n == 0) {
        return 0;
    }
    a = n + sum(n - 1);
    return a;
}
int main(void) {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = sum(n);
    printf(" %d\n", result);
    return 0;
}