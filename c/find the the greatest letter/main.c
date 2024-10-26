#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bubble_sort(char a[], int n) {
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n-1 ; j++) {
            if (a[j] > a[j + 1]) {
                char temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[26];
    scanf("%s", str);
    int len = strlen(str);

    char upper[len];
    char lower[len];
    int ui = 0, li = 0;

    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
            upper[ui++] = str[i];
        } else {
            lower[li++] = str[i];
        }
    }
    upper[ui] = '\0';
    lower[li] = '\0';

    bubble_sort(upper, ui);
    bubble_sort(lower, li);

    for (int i = ui - 1; i >= 0; i--) {
        for (int j = li - 1; j >= 0; j--) {
            if (tolower(upper[i]) == lower[j]) {
                printf("%c", upper[i]);
                return 0;
            }
        }
    }

    return 0;
}

