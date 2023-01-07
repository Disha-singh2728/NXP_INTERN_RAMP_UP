#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t message_id;      // bits 1-4
    uint32_t source_addr;     // bits 5-10
    uint32_t dest_addr;       // bits 11-15
    uint32_t data;            // bits 20-30

    // Read in user inputs
    printf("Enter message id (bits 1-4): ");
    scanf("%u", &message_id);

    printf("Enter source address (bits 5-10): ");
    scanf("%u", &source_addr);

    printf("Enter destination address (bits 11-15): ");
    scanf("%u", &dest_addr);

    printf("Enter data/message (bits 20-30): ");
    scanf("%u", &data);

    // Set reserved bits to 1
    uint32_t reserved = ~0;
    reserved = reserved >> (32 - 20);
    reserved = reserved << 15;

    // Create the 32-bit number
    uint32_t number = message_id;
    number = number << 10;
    number = number | source_addr;
    number = number << 5;
    number = number | dest_addr;
    number = number << 10;
    number = number | data;
    number = number | reserved;

    printf("32-bit number: %u\n", number);

    return 0;
}