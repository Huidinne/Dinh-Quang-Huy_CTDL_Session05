#include <stdio.h>
int count(int n) {
    if (n<1) {
        return 0;
    }
    count(n-1);
    printf("%d\n", n);
}
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    count(n);
    return 0;
}