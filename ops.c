#include <stdio.h>

#include "robovac.h"

void ret(Machine* machine) {
    // FIXME: No-op for now.
    machine->reg[REG_IP]++;
}

void invalid(Machine* machine) {
    // FIXME
    fprintf(stderr, "invalid opcode\n");
    machine->reg[REG_IP]++;
}

OpHandler op_handlers[] = {
    &ret,           // 0x00: RET
    &invalid,       // 0x01
    &invalid,       // 0x02
    &invalid,       // 0x03
    &invalid,       // 0x04
    &invalid,       // 0x05
    &invalid,       // 0x06
    &invalid,       // 0x07
    &invalid,       // 0x08
    &invalid,       // 0x09
    &invalid,       // 0x0a
    &invalid,       // 0x0b
    &invalid,       // 0x0c
    &invalid,       // 0x0d
    &invalid,       // 0x0e
    &invalid,       // 0x0f
    &invalid,       // 0x10
    &invalid,       // 0x11
    &invalid,       // 0x12
    &invalid,       // 0x13
    &invalid,       // 0x14
    &invalid,       // 0x15
    &invalid,       // 0x16
    &invalid,       // 0x17
    &invalid,       // 0x18
    &invalid,       // 0x19
    &invalid,       // 0x1a
    &invalid,       // 0x1b
    &invalid,       // 0x1c
    &invalid,       // 0x1d
    &invalid,       // 0x1e
    &invalid,       // 0x1f
    &invalid,       // 0x20
    &invalid,       // 0x21
    &invalid,       // 0x22
    &invalid,       // 0x23
    &invalid,       // 0x24
    &invalid,       // 0x25
    &invalid,       // 0x26
    &invalid,       // 0x27
    &invalid,       // 0x28
    &invalid,       // 0x29
    &invalid,       // 0x2a
    &invalid,       // 0x2b
    &invalid,       // 0x2c
    &invalid,       // 0x2d
    &invalid,       // 0x2e
    &invalid,       // 0x2f
    &invalid,       // 0x30
    &invalid,       // 0x31
    &invalid,       // 0x32
    &invalid,       // 0x33
    &invalid,       // 0x34
    &invalid,       // 0x35
    &invalid,       // 0x36
    &invalid,       // 0x37
    &invalid,       // 0x38
    &invalid,       // 0x39
    &invalid,       // 0x3a
    &invalid,       // 0x3b
    &invalid,       // 0x3c
    &invalid,       // 0x3d
    &invalid,       // 0x3e
    &invalid,       // 0x3f
    &invalid,       // 0x40
    &invalid,       // 0x41
    &invalid,       // 0x42
    &invalid,       // 0x43
    &invalid,       // 0x44
    &invalid,       // 0x45
    &invalid,       // 0x46
    &invalid,       // 0x47
    &invalid,       // 0x48
    &invalid,       // 0x49
    &invalid,       // 0x4a
    &invalid,       // 0x4b
    &invalid,       // 0x4c
    &invalid,       // 0x4d
    &invalid,       // 0x4e
    &invalid,       // 0x4f
    &invalid,       // 0x50
    &invalid,       // 0x51
    &invalid,       // 0x52
    &invalid,       // 0x53
    &invalid,       // 0x54
    &invalid,       // 0x55
    &invalid,       // 0x56
    &invalid,       // 0x57
    &invalid,       // 0x58
    &invalid,       // 0x59
    &invalid,       // 0x5a
    &invalid,       // 0x5b
    &invalid,       // 0x5c
    &invalid,       // 0x5d
    &invalid,       // 0x5e
    &invalid,       // 0x5f
    &invalid,       // 0x60
    &invalid,       // 0x61
    &invalid,       // 0x62
    &invalid,       // 0x63
    &invalid,       // 0x64
    &invalid,       // 0x65
    &invalid,       // 0x66
    &invalid,       // 0x67
    &invalid,       // 0x68
    &invalid,       // 0x69
    &invalid,       // 0x6a
    &invalid,       // 0x6b
    &invalid,       // 0x6c
    &invalid,       // 0x6d
    &invalid,       // 0x6e
    &invalid,       // 0x6f
    &invalid,       // 0x70
    &invalid,       // 0x71
    &invalid,       // 0x72
    &invalid,       // 0x73
    &invalid,       // 0x74
    &invalid,       // 0x75
    &invalid,       // 0x76
    &invalid,       // 0x77
    &invalid,       // 0x78
    &invalid,       // 0x79
    &invalid,       // 0x7a
    &invalid,       // 0x7b
    &invalid,       // 0x7c
    &invalid,       // 0x7d
    &invalid,       // 0x7e
    &invalid,       // 0x7f
    &invalid,       // 0x80
    &invalid,       // 0x81
    &invalid,       // 0x82
    &invalid,       // 0x83
    &invalid,       // 0x84
    &invalid,       // 0x85
    &invalid,       // 0x86
    &invalid,       // 0x87
    &invalid,       // 0x88
    &invalid,       // 0x89
    &invalid,       // 0x8a
    &invalid,       // 0x8b
    &invalid,       // 0x8c
    &invalid,       // 0x8d
    &invalid,       // 0x8e
    &invalid,       // 0x8f
    &invalid,       // 0x90
    &invalid,       // 0x91
    &invalid,       // 0x92
    &invalid,       // 0x93
    &invalid,       // 0x94
    &invalid,       // 0x95
    &invalid,       // 0x96
    &invalid,       // 0x97
    &invalid,       // 0x98
    &invalid,       // 0x99
    &invalid,       // 0x9a
    &invalid,       // 0x9b
    &invalid,       // 0x9c
    &invalid,       // 0x9d
    &invalid,       // 0x9e
    &invalid,       // 0x9f
    &invalid,       // 0xa0
    &invalid,       // 0xa1
    &invalid,       // 0xa2
    &invalid,       // 0xa3
    &invalid,       // 0xa4
    &invalid,       // 0xa5
    &invalid,       // 0xa6
    &invalid,       // 0xa7
    &invalid,       // 0xa8
    &invalid,       // 0xa9
    &invalid,       // 0xaa
    &invalid,       // 0xab
    &invalid,       // 0xac
    &invalid,       // 0xad
    &invalid,       // 0xae
    &invalid,       // 0xaf
    &invalid,       // 0xb0
    &invalid,       // 0xb1
    &invalid,       // 0xb2
    &invalid,       // 0xb3
    &invalid,       // 0xb4
    &invalid,       // 0xb5
    &invalid,       // 0xb6
    &invalid,       // 0xb7
    &invalid,       // 0xb8
    &invalid,       // 0xb9
    &invalid,       // 0xba
    &invalid,       // 0xbb
    &invalid,       // 0xbc
    &invalid,       // 0xbd
    &invalid,       // 0xbe
    &invalid,       // 0xbf
    &invalid,       // 0xc0
    &invalid,       // 0xc1
    &invalid,       // 0xc2
    &invalid,       // 0xc3
    &invalid,       // 0xc4
    &invalid,       // 0xc5
    &invalid,       // 0xc6
    &invalid,       // 0xc7
    &invalid,       // 0xc8
    &invalid,       // 0xc9
    &invalid,       // 0xca
    &invalid,       // 0xcb
    &invalid,       // 0xcc
    &invalid,       // 0xcd
    &invalid,       // 0xce
    &invalid,       // 0xcf
    &invalid,       // 0xd0
    &invalid,       // 0xd1
    &invalid,       // 0xd2
    &invalid,       // 0xd3
    &invalid,       // 0xd4
    &invalid,       // 0xd5
    &invalid,       // 0xd6
    &invalid,       // 0xd7
    &invalid,       // 0xd8
    &invalid,       // 0xd9
    &invalid,       // 0xda
    &invalid,       // 0xdb
    &invalid,       // 0xdc
    &invalid,       // 0xdd
    &invalid,       // 0xde
    &invalid,       // 0xdf
    &invalid,       // 0xe0
    &invalid,       // 0xe1
    &invalid,       // 0xe2
    &invalid,       // 0xe3
    &invalid,       // 0xe4
    &invalid,       // 0xe5
    &invalid,       // 0xe6
    &invalid,       // 0xe7
    &invalid,       // 0xe8
    &invalid,       // 0xe9
    &invalid,       // 0xea
    &invalid,       // 0xeb
    &invalid,       // 0xec
    &invalid,       // 0xed
    &invalid,       // 0xee
    &invalid,       // 0xef
    &invalid,       // 0xf0
    &invalid,       // 0xf1
    &invalid,       // 0xf2
    &invalid,       // 0xf3
    &invalid,       // 0xf4
    &invalid,       // 0xf5
    &invalid,       // 0xf6
    &invalid,       // 0xf7
    &invalid,       // 0xf8
    &invalid,       // 0xf9
    &invalid,       // 0xfa
    &invalid,       // 0xfb
    &invalid,       // 0xfc
    &invalid,       // 0xfd
    &invalid,       // 0xfe
    &invalid,       // 0xff
};