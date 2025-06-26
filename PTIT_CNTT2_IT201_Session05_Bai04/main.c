#include <stdio.h>
int sum(int a, int b) {
    if (a > b) {
        return 0;
    }
    return a + sum(a + 1, b);
}
int main(void) {
    int a,b, result;
    printf("Enter a number: ");
    scanf("%d %d", &a ,&b);
    result = sum(a,b);
    printf(" %d\n", result);
    return 0;
}