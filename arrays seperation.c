#include <stdio.h>

int main() {
    int numbers[] = {10, 23, 45, 20, 72, 61};
    int evenCount = 0, oddCount = 0;
int i;
    printf("Even numbers: ");
    for ( i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            evenCount++;
        }
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
            oddCount++;
        }
    }

    printf("\nCount of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);

    return 0;
}

