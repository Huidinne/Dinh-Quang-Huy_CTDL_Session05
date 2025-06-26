#include <stdio.h>
int convert(char str[], int i, int res) {
    if (str[i] == '\0') {
        return 1;
    }
    if (str[i] < '0' || str[i] > '9') {
        return -1;
    }
    return convert(str, i + 1, res * 10 + (str[i] - '0'));
}

int main() {
    char str[10];
    scanf("%s", str);
    int minus = (str[0] == '-');
    int startIndex;
    if (minus) {
        startIndex = 1;
    } else {
        startIndex = 0;
    }
    int result = convert(str, startIndex, 0);
    if (result == -1)
        printf("Khong hop le\n");
    else {
        if (minus) {
            result = -result;
        }
        printf("%d\n", result);
    }
    return 0;
}