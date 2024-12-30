#include <stdio.h>

// Outer structure
struct Data
 {
    int dataType; // 1 for int, 2 for float, 3 for string
    union Values 
    {
        int intValue;
        float floatValue;
        char stringValue[50];
    } value; // Nested union
};

int main() {
    struct Data data;

    // Input data type
    printf("Enter data type (1 for int, 2 for float, 3 for string): ");
    scanf("%d", &data.dataType);

    // Based on data type, input corresponding value
    if (data.dataType == 1) 
    {
        printf("Enter an integer value: ");
        scanf("%d", &data.value.intValue);
    } 
    else if (data.dataType == 2)
    {
        printf("Enter a float value: ");
        scanf("%f", &data.value.floatValue);
    } 
    else if (data.dataType == 3) 
    {
        printf("Enter a string value: ");
        scanf("%s", data.value.stringValue);
    }

    
    printf("\nData:\n");
    if (data.dataType == 1) 
    {
        printf("Integer Value: %d\n", data.value.intValue);
    } 
    else if (data.dataType == 2) 
    {
        printf("Float Value: %f\n", data.value.floatValue);
    } 
    else if (data.dataType == 3)
    {
        printf("String Value: %s\n", data.value.stringValue);
    }

    return 0;
}
