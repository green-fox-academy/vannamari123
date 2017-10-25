#include <stdio.h>
#include <stdint.h>

//TODO: Change the bits to 64

//TODO: print out the structure members

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

int main()
{

    struct Computer computer = {3.2, 8, 32};
    computer.bits = 64;
    printf("CPU speed: %.1f GHz\nRAM size: %dGB\nBits: %d\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

    return 0;
}
