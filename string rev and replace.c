#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "abcd1234";
    int length = strlen(input);
int i;
    // Reverse the characters in the string
    for (i = 0; i < length / 2; i++) {
        char temp = input[i];
        input[i] = input[length - i - 1];
        input[length - i - 1] = temp;
    }

    // Replace the digits with spaces
    for (i = 0; i < length; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            input[i] = ' ';
        }
    }

    // Print the modified string
    printf("%s\n", input);

    return 0;
}
