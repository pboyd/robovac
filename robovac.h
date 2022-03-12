#include <sys/types.h>
#include <stdint.h>

// Instruction pointer
#define REG_IP 15

typedef struct Machine {
    uint8_t* memory;
    uint32_t reg[16];
} Machine;

typedef void (*OpHandler)(Machine* machine);
extern OpHandler op_handlers[];
