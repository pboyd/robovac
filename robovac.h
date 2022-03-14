#include <sys/types.h>
#include <stdint.h>

#define load_uint16t(src, dest) \
    *(dest) = \
    (uint32_t)((src)[0]) << 8 | \
    (uint32_t)((src)[1])

#define load_uint32t(src, dest) \
    *(dest) = \
    (uint32_t)((src)[0]) << 24 | \
    (uint32_t)((src)[1]) << 16 | \
    (uint32_t)((src)[2]) << 8 | \
    (uint32_t)((src)[3])

// Instruction pointer
#define REG_IP 15

#define REGISTER_COUNT 16

typedef struct Machine {
    uint8_t* memory;
    uint32_t reg[REGISTER_COUNT];
} Machine;

typedef void (*OpHandler)(Machine* machine);
extern OpHandler op_handlers[];
