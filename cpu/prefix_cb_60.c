#include <aiv_gb.h>

//BIT 4,B
static int aiv_gb_prefix_cb_60(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.b & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 4,C
static int aiv_gb_prefix_cb_61(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.c & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 4,D
static int aiv_gb_prefix_cb_62(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.d & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 4,E
static int aiv_gb_prefix_cb_63(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.e & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 4,H
static int aiv_gb_prefix_cb_64(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.h & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 4,L
static int aiv_gb_prefix_cb_65(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.l & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 4,HL
static int aiv_gb_prefix_cb_66(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.hl & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 4,A
static int aiv_gb_prefix_cb_67(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.a & 0x10);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,B
static int aiv_gb_prefix_cb_68(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.b & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,C
static int aiv_gb_prefix_cb_69(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.c & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,D
static int aiv_gb_prefix_cb_6a(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.d & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,E
static int aiv_gb_prefix_cb_6b(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.e & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,H
static int aiv_gb_prefix_cb_6c(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.h & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,L
static int aiv_gb_prefix_cb_6d(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.l & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,HL
static int aiv_gb_prefix_cb_6e(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.hl & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
//BIT 5,A
static int aiv_gb_prefix_cb_6f(aiv_gameboy *gb)
    {
        aiv_gb_set_flag(gb,ZERO,register.a & 0x20);
        aiv_gb_set_flag(gb,NEG,0);
        aiv_gb_set_flag(gb,HALF,1);
        return 8;
    }
void aiv_gb_register_prefix_cb_60(aiv_gameboy *gb)
    {
        gb->prefix_cb[0x60] = aiv_gb_prefix_cb_60;
        gb->prefix_cb[0x61] = aiv_gb_prefix_cb_61;
        gb->prefix_cb[0x62] = aiv_gb_prefix_cb_62;
        gb->prefix_cb[0x63] = aiv_gb_prefix_cb_63;
        gb->prefix_cb[0x64] = aiv_gb_prefix_cb_64;
        gb->prefix_cb[0x65] = aiv_gb_prefix_cb_65;
        gb->prefix_cb[0x66] = aiv_gb_prefix_cb_66;
        gb->prefix_cb[0x67] = aiv_gb_prefix_cb_67;
        gb->prefix_cb[0x68] = aiv_gb_prefix_cb_68;
        gb->prefix_cb[0x69] = aiv_gb_prefix_cb_69;
        gb->prefix_cb[0x6a] = aiv_gb_prefix_cb_6a;
        gb->prefix_cb[0x6b] = aiv_gb_prefix_cb_6b;
        gb->prefix_cb[0x6c] = aiv_gb_prefix_cb_6c;
        gb->prefix_cb[0x6d] = aiv_gb_prefix_cb_6d;
        gb->prefix_cb[0x6e] = aiv_gb_prefix_cb_6e;
        gb->prefix_cb[0x6f] = aiv_gb_prefix_cb_6f;
    }