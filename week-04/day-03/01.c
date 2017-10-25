#include <stdio.h>
#include <stdint.h>

// TODO:
// Print out the size of both structs (use sizeof() function)

struct Bitfield{
    uint8_t boolean_value_1:1;
    uint8_t boolean_value_2:1;
    uint8_t boolean_value_3:1;
    uint8_t boolean_value_4:1;
    uint8_t boolean_value_5:1;
    uint8_t boolean_value_6:1;
    uint8_t boolean_value_7:1;
    uint8_t boolean_value_8:1;
} bitfield;

struct NotBitfield{
    uint8_t boolean_value_1;
    uint8_t boolean_value_2;
    uint8_t boolean_value_3;
    uint8_t boolean_value_4;
    uint8_t boolean_value_5;
    uint8_t boolean_value_6;
    uint8_t boolean_value_7;
    uint8_t boolean_value_8;
} notbitfield;

int main()
{

    printf("Memory size of structure Bitfield: %d\n", sizeof(bitfield));
    printf("Memory size of structure NotBitfield: %d\n",sizeof(notbitfield));

    return 0;
}
