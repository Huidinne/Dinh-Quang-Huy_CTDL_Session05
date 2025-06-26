#include <stdio.h>
#include <string.h>
int kiemTraDoiXung(char arr[], int left , int right) {
    if (left >= right) {
        return 1;
    }
    if (arr[left] != arr[right]) {
        return 0;
    }
    return kiemTraDoiXung(arr, left+1, right -1);
}
int main(void) {
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);
    int result = kiemTraDoiXung(str, 0, len-1);
    if (result == 0) {
        printf("Chuoi khong doi xung\n");
    }else {
        printf("Chuoi doi xung\n");
    }
    return 0;
}