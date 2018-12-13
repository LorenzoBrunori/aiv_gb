#include <string.h>

typedef unsigned char u8_t;
typedef signed char s8_t;
typedef unsigned short u16_t;
typedef signed short s16_t;
typedef unsigned long long u64_t;

#define SET_Z(gb) gb.f |= 0x80
#define UNSET_Z(gb) gb.f &= ~0x80

#define SET_N(gb) gb.f |= 0x40
#define UNSET_N(gb) gb.f &= ~0x40

#define SET_H(gb) gb.f |= 0x20
#define UNSET_H(gb) gb.f &= ~0x20

#define SET_C(gb) gb.f |= 0x10
#define UNSET_C(gb) gb.f &= ~0x10

#define CARTRIDGE_SIZE 16384

typedef struct aiv_gameboy
{
    // AF
    union {
        u16_t af;
        struct
        {
            u8_t f;
            u8_t a;
        };
    };

    // BC
    union {
        u16_t bc;
        struct
        {
            u8_t c;
            u8_t b;
        };
    };

    // DE
    union {
        u16_t de;
        struct
        {
            u8_t e;
            u8_t d;
        };
    };

    // HL
    union {
        u16_t hl;
        struct
        {
            u8_t l;
            u8_t h;
        };
    };

    u16_t pc;
    u16_t sp;

    u64_t ticks;

    // opcodes table, each entry is a pointer to a function
    int (*opcodes[256])(struct aiv_gameboy *);

    u8_t cartridge[CARTRIDGE_SIZE];

} aiv_gameboy;

u8_t aiv_gb_memory_read8(aiv_gameboy *gb, u16_t address);
void aiv_gb_memory_write8(aiv_gameboy *gb, u16_t address, u8_t value);
u16_t aiv_gb_memory_read16(aiv_gameboy *gb, u16_t address);
void aiv_gb_memory_write16(aiv_gameboy *gb, u16_t address, u16_t value);

void aiv_gb_register_opcodes_00(aiv_gameboy *gb);
void aiv_gb_register_opcodes_10(aiv_gameboy *gb);
void aiv_gb_register_opcodes_20(aiv_gameboy *gb);
void aiv_gb_register_opcodes_30(aiv_gameboy *gb);
void aiv_gb_register_opcodes_40(aiv_gameboy *gb);
void aiv_gb_register_opcodes_50(aiv_gameboy *gb);
void aiv_gb_register_opcodes_60(aiv_gameboy *gb);
void aiv_gb_register_opcodes_70(aiv_gameboy *gb);
void aiv_gb_register_opcodes_80(aiv_gameboy *gb);
void aiv_gb_register_opcodes_90(aiv_gameboy *gb);
void aiv_gb_register_opcodes_a0(aiv_gameboy *gb);
void aiv_gb_register_opcodes_b0(aiv_gameboy *gb);
void aiv_gb_register_opcodes_c0(aiv_gameboy *gb);
void aiv_gb_register_opcodes_d0(aiv_gameboy *gb);
void aiv_gb_register_opcodes_e0(aiv_gameboy *gb);
void aiv_gb_register_opcodes_f0(aiv_gameboy *gb);

int aiv_gb_tick(aiv_gameboy *gb);
int aiv_gb_loop(aiv_gameboy *gb);
void aiv_gb_init(aiv_gameboy *gb);