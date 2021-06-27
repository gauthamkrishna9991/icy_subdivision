#include <stdio.h>
#include <stdint.h>
#include <limits.h>

struct lc3_memory {
    uint16_t mem[UINT16_MAX + 1];
};

enum {
    R_R0 = 0,
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC,
    R_COND,
    R_COUNT
};

struct lc3_register {
    uint16_t R[R_COUNT];
};

enum {
    OP_BR,      // break
    OP_ADD,     // add
    OP_LD,      // load
    OP_ST,      // store
    OP_JSR,     // jump register
    OP_AND,     // bitwise and
    OP_LDR,     // load register
    OP_STR,     // store register
    OP_RTI,     // unused
    OP_NOT,     // bitwise not
    OP_LDI,     // load indirect
    OP_STI,     // store indirect
    OP_JMP,     // jump
    OP_RES,     // reserved
    OP_LEA,     // load effective address
    OP_TRAP     // execute trap
};

struct lc3_chip {
    // chip memory
    struct lc3_memory mem;
    // chip register
    struct lc3_register reg;
};

int
main(
    int argc,
    char* argv[]
) {
    printf("SIZE OF CHIP: %ld", sizeof(struct lc3_chip));
    return (0);
}