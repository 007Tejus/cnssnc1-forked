#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("\nOriginal string: %s\n", str);

    // AND operation with 127
    printf("\nString with '&' (AND) of 127\n");
    for (int i = 0; str[i] != '\0'; i++) {
        int result_int = str[i] & 127;
        char result_char = (char)result_int;
        printf("%c & 127 = %d, Result char = %c\n", str[i], result_int, result_char);
    }

    // OR operation with 127
    printf("\nString with '|' (OR) of 127\n");
    for (int i = 0; str[i] != '\0'; i++) {
        int result_int = str[i] | 127;
        char result_char = (char)result_int;
        printf("%c | 127 = %d, Result char = %c\n", str[i], result_int, result_char);
    }

    // XOR operation with 127
    printf("\nString with '^' (XOR) of 127\n");
    for (int i = 0; str[i] != '\0'; i++) {
        int result_int = str[i] ^ 127;
        char result_char = (char)result_int;
        printf("%c ^ 127 = %d, Result char = %c\n", str[i], result_int, result_char);
    }

    return 0;
}



//i changed these lines for my git course to understand the git pull request 