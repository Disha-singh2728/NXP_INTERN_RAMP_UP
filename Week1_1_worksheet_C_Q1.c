#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Define the structure
typedef struct {
    uint32_t data;
    char string[256];
    uint8_t binary;
} MyStruct;

int main(void) {
    // Create the object of the structure using a pointer
    MyStruct* obj = malloc(sizeof(MyStruct));

    // Initialize the data values of the structure
    obj->data = 65535;
    strcpy(obj->string, "Hello, world!");
    obj->binary = 0b10101010;

    // Print the data values in hexadecimal format
    printf("obj->data = 0x%X\n", obj->data);
    printf("obj->string = %s\n", obj->string);
    printf("obj->binary = 0x%X\n", obj->binary);

    // Free the object
    free(obj);

    return 0;
}