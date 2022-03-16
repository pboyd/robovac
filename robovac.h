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

#define SIGN(value) ((uint32_t)value >> 31)

// Flags register
#define REG_FL 14

// Instruction pointer
#define REG_IP 15

// Flags
#define FLAG_ZF     1       // Zero flag
#define FLAG_OF     1<<1    // Overflow flag
#define FLAG_CF     1<<2    // Carry flag
#define FLAG_SF     1<<3    // Sign flag

typedef struct Machine {
    uint8_t* memory;
    uint32_t reg[16];
} Machine;

typedef void (*OpHandler)(Machine* machine);
extern OpHandler op_handlers[];
