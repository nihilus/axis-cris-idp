/* IDP emulator for cris.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 2000-2010 Red Hat, Inc.

This file is part of the Red Hat simulators.


*/


#include "cris.hpp"

// ********** x-invalid: --invalid--

static int
cris_emu_x_invalid (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

  {
    return 0;
  }

  return 0;
}

// ********** move.b-r: move.b move.m ${Rs},${Rd}

static int
cris_emu_move_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_newval;
  tmp_newval = [&valid](){ valid = 0; return 0; }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** move.w-r: move.w move.m ${Rs},${Rd}

static int
cris_emu_move_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_newval;
  tmp_newval = [&valid](){ valid = 0; return 0; }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** move.d-r: move.d move.m ${Rs},${Rd}

static int
cris_emu_move_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_newval;
  tmp_newval = [&valid](){ valid = 0; return 0; }();
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** moveq: moveq $i,$Rd

static int
cris_emu_moveq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_newval;
  tmp_newval = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movs.b-r: movs.b movs.m ${Rs},${Rd}

static int
cris_emu_movs_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_newval = EXTQISI (tmp_tmpops);
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movs.w-r: movs.w movs.m ${Rs},${Rd}

static int
cris_emu_movs_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_newval = EXTHISI (tmp_tmpops);
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movu.b-r: movu.b movu.m ${Rs},${Rd}

static int
cris_emu_movu_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ZEXTQISI (tmp_tmpops);
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movu.w-r: movu.w movu.m ${Rs},${Rd}

static int
cris_emu_movu_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ZEXTHISI (tmp_tmpops);
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movecbr: move.b ${sconst8},${Rd}

static int
cris_emu_movecbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_newval;
  tmp_newval = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** movecwr: move.w ${sconst16},${Rd}

static int
cris_emu_movecwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_newval;
  tmp_newval = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** movecdr: move.d ${const32},${Rd}

static int
cris_emu_movecdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_newval;
  tmp_newval = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 6;
}

// ********** movscbr: movs.b ${sconst8},${Rd}

static int
cris_emu_movscbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_newval;
  tmp_newval = EXTQISI (TRUNCSIQI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr));
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** movscwr: movs.w ${sconst16},${Rd}

static int
cris_emu_movscwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_newval;
  tmp_newval = EXTHISI (TRUNCSIHI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr));
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** movucbr: movu.b ${uconst8},${Rd}

static int
cris_emu_movucbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_newval;
  tmp_newval = ZEXTQISI (TRUNCSIQI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr));
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** movucwr: movu.w ${uconst16},${Rd}

static int
cris_emu_movucwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_newval;
  tmp_newval = ZEXTHISI (TRUNCSIHI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr));
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** addq: addq $j,$Rd

static int
cris_emu_addq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subq: subq $j,$Rd

static int
cris_emu_subq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmp-r.b-r: cmp-r.b $Rs,$Rd

static int
cris_emu_cmp_r_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmp-r.w-r: cmp-r.w $Rs,$Rd

static int
cris_emu_cmp_r_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmp-r.d-r: cmp-r.d $Rs,$Rd

static int
cris_emu_cmp_r_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmp-m.b-m: cmp-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_cmp_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmp-m.w-m: cmp-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_cmp_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmp-m.d-m: cmp-m.d [${Rs}${inc}],${Rd}

static int
cris_emu_cmp_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmpcbr: cmp.b $sconst8,$Rd

static int
cris_emu_cmpcbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = TRUNCSIQI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** cmpcwr: cmp.w $sconst16,$Rd

static int
cris_emu_cmpcwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = TRUNCSIHI (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** cmpcdr: cmp.d $const32,$Rd

static int
cris_emu_cmpcdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 6;
}

// ********** cmpq: cmpq $i,$Rd

static int
cris_emu_cmpq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmps-m.b-m: cmps-m.b [${Rs}${inc}],$Rd

static int
cris_emu_cmps_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmps-m.w-m: cmps-m.w [${Rs}${inc}],$Rd

static int
cris_emu_cmps_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmpscbr: [${Rs}${inc}],$Rd

static int
cris_emu_cmpscbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** cmpscwr: [${Rs}${inc}],$Rd

static int
cris_emu_cmpscwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI (TRUNCSIHI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** cmpu-m.b-m: cmpu-m.b [${Rs}${inc}],$Rd

static int
cris_emu_cmpu_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmpu-m.w-m: cmpu-m.w [${Rs}${inc}],$Rd

static int
cris_emu_cmpu_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** cmpucbr: [${Rs}${inc}],$Rd

static int
cris_emu_cmpucbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** cmpucwr: [${Rs}${inc}],$Rd

static int
cris_emu_cmpucwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI (TRUNCSIHI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** move-m.b-m: move-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_move_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmp, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmp, 0);
ANDIF (EQQI (tmp_tmp, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** move-m.w-m: move-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_move_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmp, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmp, 0);
ANDIF (EQHI (tmp_tmp, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** move-m.d-m: move-m.d [${Rs}${inc}],${Rd}

static int
cris_emu_move_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
tmp_tmp;
{
LTSI (tmp_tmp, 0);
ANDIF (EQSI (tmp_tmp, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movs-m.b-m: movs-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_movs_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = EXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
tmp_tmp;
tmp_tmp;
}
{
LTSI (tmp_tmp, 0);
ANDIF (EQSI (tmp_tmp, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movs-m.w-m: movs-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_movs_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = EXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
tmp_tmp;
tmp_tmp;
}
{
LTSI (tmp_tmp, 0);
ANDIF (EQSI (tmp_tmp, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movu-m.b-m: movu-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_movu_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = ZEXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
tmp_tmp;
tmp_tmp;
}
{
LTSI (tmp_tmp, 0);
ANDIF (EQSI (tmp_tmp, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** movu-m.w-m: movu-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_movu_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = ZEXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
tmp_tmp;
tmp_tmp;
}
{
LTSI (tmp_tmp, 0);
ANDIF (EQSI (tmp_tmp, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** move-r-sprv32: move ${Rs},${Pd}

static int
cris_emu_move_r_sprv32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  SI tmp_rno;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
  tmp_rno = cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr;
{
tmp_tmp;
}
{
0;
0;
}
}

  return 2;
}

// ********** move-spr-rv32: move ${Ps},${Rd-sfield}

static int
cris_emu_move_spr_rv32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_grno;
  SI tmp_prno;
  SI tmp_newval;
  tmp_prno = cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr;
  tmp_newval = [&valid](){ valid = 0; return 0; }();
{
tmp_newval;
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
tmp_newval;
tmp_newval;
tmp_newval;
tmp_newval;
tmp_newval;
tmp_newval;
tmp_newval;
tmp_newval;
tmp_newval;
tmp_newval;
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
tmp_newval;
}
{
0;
0;
}
}

  return 2;
}

// ********** move-m-sprv32: move [${Rs}${inc}],${Pd}

static int
cris_emu_move_m_sprv32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_rno;
  SI tmp_newval;
  tmp_rno = cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr;
{
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = EXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_newval = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
}
tmp_newval;
{
0;
0;
}
}

  return 2;
}

// ********** move-c-sprv32-p2: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p2 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p3: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p3 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p5: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p5 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p6: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p6 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p7: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p7 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p9: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p9 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p10: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p10 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p11: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p11 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p12: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p12 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p13: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p13 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p14: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p14 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-c-sprv32-p15: move ${const32},${Pd}

static int
cris_emu_move_c_sprv32_p15 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** move-spr-mv32: move ${Ps},[${Rd-sfield}${inc}]

static int
cris_emu_move_spr_mv32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_rno;
  tmp_rno = cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr;
{
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
}
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
}
{
0;
0;
}
}

  return 2;
}

// ********** move-ss-r: move ${Ss},${Rd-sfield}

static int
cris_emu_move_ss_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
[&valid](){ valid = 0; return 0; }();
{
0;
0;
}
}

  return 2;
}

// ********** move-r-ss: move ${Rs},${Sd}

static int
cris_emu_move_r_ss (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
[&valid](){ valid = 0; return 0; }();
{
0;
0;
}
}

  return 2;
}

// ********** movem-r-m-v32: movem ${Rs-dfield},[${Rd-sfield}${inc}]

static int
cris_emu_movem_r_m_v32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
  SI tmp_dummy;
  tmp_dummy = [&valid](){ valid = 0; return 0; }();
}
  tmp_addr = [&valid](){ valid = 0; return 0; }();
{
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
}
{
tmp_addr;
}
{
0;
0;
}
}

  return 2;
}

// ********** movem-m-r-v32: movem [${Rs}${inc}],${Rd}

static int
cris_emu_movem_m_r_v32 (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
  tmp_addr = [&valid](){ valid = 0; return 0; }();
{
  SI tmp_dummy;
  tmp_dummy = [&valid](){ valid = 0; return 0; }();
}
{
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
{
{
  SI tmp_tmp;
  tmp_tmp = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
tmp_tmp;
  tmp_addr = ADDSI (tmp_addr, 4);
}
}
}
{
tmp_addr;
}
{
0;
0;
}
}

  return 2;
}

// ********** add.b-r: add.b $Rs,$Rd

static int
cris_emu_add_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), ORIF (ANDIF (LTQI (tmp_tmpopd, 0), GEQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (GEQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** add.w-r: add.w $Rs,$Rd

static int
cris_emu_add_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), ORIF (ANDIF (LTHI (tmp_tmpopd, 0), GEHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (GEHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** add.d-r: add.d $Rs,$Rd

static int
cris_emu_add_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** add-m.b-m: add-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_add_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), ORIF (ANDIF (LTQI (tmp_tmpopd, 0), GEQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (GEQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** add-m.w-m: add-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_add_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), ORIF (ANDIF (LTHI (tmp_tmpopd, 0), GEHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (GEHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** add-m.d-m: add-m.d [${Rs}${inc}],${Rd}

static int
cris_emu_add_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** addcbr: add.b ${sconst8}],${Rd}

static int
cris_emu_addcbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), ORIF (ANDIF (LTQI (tmp_tmpopd, 0), GEQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (GEQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** addcwr: add.w ${sconst16}],${Rd}

static int
cris_emu_addcwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), ORIF (ANDIF (LTHI (tmp_tmpopd, 0), GEHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (GEHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** addcdr: add.d ${const32}],${Rd}

static int
cris_emu_addcdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 6;
}

// ********** adds.b-r: adds.b $Rs,$Rd

static int
cris_emu_adds_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** adds.w-r: adds.w $Rs,$Rd

static int
cris_emu_adds_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** adds-m.b-m: adds-m.b [${Rs}${inc}],$Rd

static int
cris_emu_adds_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** adds-m.w-m: adds-m.w [${Rs}${inc}],$Rd

static int
cris_emu_adds_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** addscbr: [${Rs}${inc}],$Rd

static int
cris_emu_addscbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** addscwr: [${Rs}${inc}],$Rd

static int
cris_emu_addscwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI (TRUNCSIHI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** addu.b-r: addu.b $Rs,$Rd

static int
cris_emu_addu_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** addu.w-r: addu.w $Rs,$Rd

static int
cris_emu_addu_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** addu-m.b-m: addu-m.b [${Rs}${inc}],$Rd

static int
cris_emu_addu_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** addu-m.w-m: addu-m.w [${Rs}${inc}],$Rd

static int
cris_emu_addu_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** adducbr: [${Rs}${inc}],$Rd

static int
cris_emu_adducbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** adducwr: [${Rs}${inc}],$Rd

static int
cris_emu_adducwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI (TRUNCSIHI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** sub.b-r: sub.b $Rs,$Rd

static int
cris_emu_sub_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** sub.w-r: sub.w $Rs,$Rd

static int
cris_emu_sub_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** sub.d-r: sub.d $Rs,$Rd

static int
cris_emu_sub_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** sub-m.b-m: sub-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_sub_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** sub-m.w-m: sub-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_sub_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** sub-m.d-m: sub-m.d [${Rs}${inc}],${Rd}

static int
cris_emu_sub_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subcbr: sub.b ${sconst8}],${Rd}

static int
cris_emu_subcbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** subcwr: sub.w ${sconst16}],${Rd}

static int
cris_emu_subcwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** subcdr: sub.d ${const32}],${Rd}

static int
cris_emu_subcdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 6;
}

// ********** subs.b-r: subs.b $Rs,$Rd

static int
cris_emu_subs_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subs.w-r: subs.w $Rs,$Rd

static int
cris_emu_subs_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subs-m.b-m: subs-m.b [${Rs}${inc}],$Rd

static int
cris_emu_subs_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subs-m.w-m: subs-m.w [${Rs}${inc}],$Rd

static int
cris_emu_subs_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subscbr: [${Rs}${inc}],$Rd

static int
cris_emu_subscbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** subscwr: [${Rs}${inc}],$Rd

static int
cris_emu_subscwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = EXTHISI (TRUNCSIHI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** subu.b-r: subu.b $Rs,$Rd

static int
cris_emu_subu_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subu.w-r: subu.w $Rs,$Rd

static int
cris_emu_subu_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subu-m.b-m: subu-m.b [${Rs}${inc}],$Rd

static int
cris_emu_subu_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI ([&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subu-m.w-m: subu-m.w [${Rs}${inc}],$Rd

static int
cris_emu_subu_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI ([&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** subucbr: [${Rs}${inc}],$Rd

static int
cris_emu_subucbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** subucwr: [${Rs}${inc}],$Rd

static int
cris_emu_subucwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI (TRUNCSIHI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 4;
}

// ********** addc-r: addc $Rs,$Rd

static int
cris_emu_addc_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
1;
{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}
}

  return 2;
}

// ********** addc-m: addc [${Rs}${inc}],${Rd}

static int
cris_emu_addc_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
1;
{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}
}

  return 2;
}

// ********** addc-c: addc ${const32},${Rd}

static int
cris_emu_addc_c (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
1;
{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}
}

  return 6;
}

// ********** lapc-d: lapc.d ${const32-pcrel},${Rd}

static int
cris_emu_lapc_d (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 6;
}

// ********** lapcq: lapcq ${qo},${Rd}

static int
cris_emu_lapcq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
0;
}
}

  return 2;
}

// ********** addi.b-r: addi.b ${Rs-dfield}.m,${Rd-sfield}

static int
cris_emu_addi_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), MULSI ([&valid](){ valid = 0; return 0; }(), 1));
{
0;
0;
}
}

  return 2;
}

// ********** addi.w-r: addi.w ${Rs-dfield}.m,${Rd-sfield}

static int
cris_emu_addi_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), MULSI ([&valid](){ valid = 0; return 0; }(), 2));
{
0;
0;
}
}

  return 2;
}

// ********** addi.d-r: addi.d ${Rs-dfield}.m,${Rd-sfield}

static int
cris_emu_addi_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), MULSI ([&valid](){ valid = 0; return 0; }(), 4));
{
0;
0;
}
}

  return 2;
}

// ********** neg.b-r: neg.b $Rs,$Rd

static int
cris_emu_neg_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = 0;
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** neg.w-r: neg.w $Rs,$Rd

static int
cris_emu_neg_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = 0;
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_newval, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** neg.d-r: neg.d $Rs,$Rd

static int
cris_emu_neg_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = 0;
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}

  return 2;
}

// ********** test-m.b-m: test-m.b [${Rs}${inc}]

static int
cris_emu_test_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
{
  QI tmp_tmpopd;
  QI tmp_tmpops;
  BI tmp_carry;
  QI tmp_newval;
  tmp_tmpops = 0;
  tmp_tmpopd = tmp_tmpd;
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCQI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), ORIF (ANDIF (GEQI (tmp_tmpopd, 0), LTQI (tmp_newval, 0)), ANDIF (LTQI (tmp_tmpops, 0), LTQI (tmp_newval, 0))));
LTQI (tmp_newval, 0);
ANDIF (EQQI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEQI (tmp_tmpops, 0), LTQI (tmp_tmpopd, 0)), GEQI (tmp_newval, 0)), ANDIF (ANDIF (LTQI (tmp_tmpops, 0), GEQI (tmp_tmpopd, 0)), LTQI (tmp_newval, 0)));
{
0;
0;
}
}
}
}

  return 2;
}

// ********** test-m.w-m: test-m.w [${Rs}${inc}]

static int
cris_emu_test_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
{
  HI tmp_tmpopd;
  HI tmp_tmpops;
  BI tmp_carry;
  HI tmp_newval;
  tmp_tmpops = 0;
  tmp_tmpopd = tmp_tmpd;
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCHI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), ORIF (ANDIF (GEHI (tmp_tmpopd, 0), LTHI (tmp_newval, 0)), ANDIF (LTHI (tmp_tmpops, 0), LTHI (tmp_newval, 0))));
LTHI (tmp_newval, 0);
ANDIF (EQHI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GEHI (tmp_tmpops, 0), LTHI (tmp_tmpopd, 0)), GEHI (tmp_newval, 0)), ANDIF (ANDIF (LTHI (tmp_tmpops, 0), GEHI (tmp_tmpopd, 0)), LTHI (tmp_newval, 0)));
{
0;
0;
}
}
}
}

  return 2;
}

// ********** test-m.d-m: test-m.d [${Rs}${inc}]

static int
cris_emu_test_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = 0;
  tmp_tmpopd = tmp_tmpd;
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = SUBCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
((void) 0); /*nop*/
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), ORIF (ANDIF (GESI (tmp_tmpopd, 0), LTSI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (GESI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}
}

  return 2;
}

// ********** move-r-m.b-m: move-r-m.b ${Rs-dfield},[${Rd-sfield}${inc}]

static int
cris_emu_move_r_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = [&valid](){ valid = 0; return 0; }();
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
}
{
0;
0;
}
}

  return 2;
}

// ********** move-r-m.w-m: move-r-m.w ${Rs-dfield},[${Rd-sfield}${inc}]

static int
cris_emu_move_r_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = [&valid](){ valid = 0; return 0; }();
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
}
{
0;
0;
}
}

  return 2;
}

// ********** move-r-m.d-m: move-r-m.d ${Rs-dfield},[${Rd-sfield}${inc}]

static int
cris_emu_move_r_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = [&valid](){ valid = 0; return 0; }();
{
  SI tmp_addr;
  BI tmp_postinc;
  tmp_postinc = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
  tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
{
{
{
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
[&valid](){ valid = 0; return 0; }();
}
1;
}
{ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_W); }
}
{
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
}
{
0;
0;
}
}

  return 2;
}

// ********** muls.b: muls.b $Rs,$Rd

static int
cris_emu_muls_b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_src1;
  DI tmp_src2;
  DI tmp_tmpr;
  tmp_src1 = EXTQIDI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_src2 = EXTQIDI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpr = MULDI (tmp_src1, tmp_src2);
TRUNCDISI (tmp_tmpr);
TRUNCDISI (SRLDI (tmp_tmpr, 32));
{
ANDIF ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
LTDI (tmp_tmpr, 0);
ANDIF (EQDI (tmp_tmpr, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
NEDI (tmp_tmpr, EXTSIDI (TRUNCDISI (tmp_tmpr)));
{
0;
0;
}
}
}

  return 2;
}

// ********** muls.w: muls.w $Rs,$Rd

static int
cris_emu_muls_w (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_src1;
  DI tmp_src2;
  DI tmp_tmpr;
  tmp_src1 = EXTHIDI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_src2 = EXTHIDI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpr = MULDI (tmp_src1, tmp_src2);
TRUNCDISI (tmp_tmpr);
TRUNCDISI (SRLDI (tmp_tmpr, 32));
{
ANDIF ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
LTDI (tmp_tmpr, 0);
ANDIF (EQDI (tmp_tmpr, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
NEDI (tmp_tmpr, EXTSIDI (TRUNCDISI (tmp_tmpr)));
{
0;
0;
}
}
}

  return 2;
}

// ********** muls.d: muls.d $Rs,$Rd

static int
cris_emu_muls_d (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_src1;
  DI tmp_src2;
  DI tmp_tmpr;
  tmp_src1 = EXTSIDI (TRUNCSISI ([&valid](){ valid = 0; return 0; }()));
  tmp_src2 = EXTSIDI (TRUNCSISI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpr = MULDI (tmp_src1, tmp_src2);
TRUNCDISI (tmp_tmpr);
TRUNCDISI (SRLDI (tmp_tmpr, 32));
{
ANDIF ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
LTDI (tmp_tmpr, 0);
ANDIF (EQDI (tmp_tmpr, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
NEDI (tmp_tmpr, EXTSIDI (TRUNCDISI (tmp_tmpr)));
{
0;
0;
}
}
}

  return 2;
}

// ********** mulu.b: mulu.b $Rs,$Rd

static int
cris_emu_mulu_b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_src1;
  DI tmp_src2;
  DI tmp_tmpr;
  tmp_src1 = ZEXTQIDI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_src2 = ZEXTQIDI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpr = MULDI (tmp_src1, tmp_src2);
TRUNCDISI (tmp_tmpr);
TRUNCDISI (SRLDI (tmp_tmpr, 32));
{
ANDIF ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
LTDI (tmp_tmpr, 0);
ANDIF (EQDI (tmp_tmpr, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
NEDI (tmp_tmpr, ZEXTSIDI (TRUNCDISI (tmp_tmpr)));
{
0;
0;
}
}
}

  return 2;
}

// ********** mulu.w: mulu.w $Rs,$Rd

static int
cris_emu_mulu_w (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_src1;
  DI tmp_src2;
  DI tmp_tmpr;
  tmp_src1 = ZEXTHIDI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_src2 = ZEXTHIDI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpr = MULDI (tmp_src1, tmp_src2);
TRUNCDISI (tmp_tmpr);
TRUNCDISI (SRLDI (tmp_tmpr, 32));
{
ANDIF ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
LTDI (tmp_tmpr, 0);
ANDIF (EQDI (tmp_tmpr, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
NEDI (tmp_tmpr, ZEXTSIDI (TRUNCDISI (tmp_tmpr)));
{
0;
0;
}
}
}

  return 2;
}

// ********** mulu.d: mulu.d $Rs,$Rd

static int
cris_emu_mulu_d (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  DI tmp_src1;
  DI tmp_src2;
  DI tmp_tmpr;
  tmp_src1 = ZEXTSIDI (TRUNCSISI ([&valid](){ valid = 0; return 0; }()));
  tmp_src2 = ZEXTSIDI (TRUNCSISI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpr = MULDI (tmp_src1, tmp_src2);
TRUNCDISI (tmp_tmpr);
TRUNCDISI (SRLDI (tmp_tmpr, 32));
{
ANDIF ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
LTDI (tmp_tmpr, 0);
ANDIF (EQDI (tmp_tmpr, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
NEDI (tmp_tmpr, ZEXTSIDI (TRUNCDISI (tmp_tmpr)));
{
0;
0;
}
}
}

  return 2;
}

// ********** mcp: mcp $Ps,$Rd

static int
cris_emu_mcp (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
1;
1;
{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  BI tmp_carry;
  SI tmp_newval;
  tmp_tmpops = [&valid](){ valid = 0; return 0; }();
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_carry = [&valid](){ valid = 0; return 0; }();
  tmp_newval = ADDCSI (tmp_tmpopd, tmp_tmpops, [&](){ 0; return tmp_carry; }());
tmp_newval;
{
ORIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), ORIF (ANDIF (LTSI (tmp_tmpopd, 0), GESI (tmp_newval, 0)), ANDIF (LTSI (tmp_tmpops, 0), GESI (tmp_newval, 0))));
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), ORIF ([&valid](){ valid = 0; return 0; }(), NOTBI ([&valid](){ valid = 0; return 0; }())));
ORIF (ANDIF (ANDIF (LTSI (tmp_tmpops, 0), LTSI (tmp_tmpopd, 0)), GESI (tmp_newval, 0)), ANDIF (ANDIF (GESI (tmp_tmpops, 0), GESI (tmp_tmpopd, 0)), LTSI (tmp_newval, 0)));
{
0;
0;
}
}
}
}

  return 2;
}

// ********** dstep: dstep $Rs,$Rd

static int
cris_emu_dstep (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  SI tmp_tmps;
  SI tmp_tmpd;
  tmp_tmps = [&valid](){ valid = 0; return 0; }();
  tmp_tmp = SLLSI ([&valid](){ valid = 0; return 0; }(), 1);
  tmp_tmpd = [&](){ SUBSI (tmp_tmp, tmp_tmps); return tmp_tmp; }();
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** abs: abs $Rs,$Rd

static int
cris_emu_abs (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ABSSI ([&valid](){ valid = 0; return 0; }());
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** and.b-r: and.b $Rs,$Rd

static int
cris_emu_and_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = ANDQI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** and.w-r: and.w $Rs,$Rd

static int
cris_emu_and_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = ANDHI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** and.d-r: and.d $Rs,$Rd

static int
cris_emu_and_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ANDSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** and-m.b-m: and-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_and_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = ANDQI ([&valid](){ valid = 0; return 0; }(), [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** and-m.w-m: and-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_and_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = ANDHI ([&valid](){ valid = 0; return 0; }(), [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** and-m.d-m: and-m.d [${Rs}${inc}],${Rd}

static int
cris_emu_and_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ANDSI ([&valid](){ valid = 0; return 0; }(), [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** andcbr: and.b ${sconst8}],${Rd}

static int
cris_emu_andcbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = ANDQI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** andcwr: and.w ${sconst16}],${Rd}

static int
cris_emu_andcwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = ANDHI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** andcdr: and.d ${const32}],${Rd}

static int
cris_emu_andcdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ANDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 6;
}

// ********** andq: andq $i,$Rd

static int
cris_emu_andq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ANDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** orr.b-r: orr.b $Rs,$Rd

static int
cris_emu_orr_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = ORQI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** orr.w-r: orr.w $Rs,$Rd

static int
cris_emu_orr_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = ORHI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** orr.d-r: orr.d $Rs,$Rd

static int
cris_emu_orr_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ORSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** or-m.b-m: or-m.b [${Rs}${inc}],${Rd}

static int
cris_emu_or_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = ORQI ([&valid](){ valid = 0; return 0; }(), [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** or-m.w-m: or-m.w [${Rs}${inc}],${Rd}

static int
cris_emu_or_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = ORHI ([&valid](){ valid = 0; return 0; }(), [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** or-m.d-m: or-m.d [${Rs}${inc}],${Rd}

static int
cris_emu_or_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ORSI ([&valid](){ valid = 0; return 0; }(), [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }());
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** orcbr: or.b ${sconst8}],${Rd}

static int
cris_emu_orcbr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  tmp_tmpd = ORQI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** orcwr: or.w ${sconst16}],${Rd}

static int
cris_emu_orcwr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  tmp_tmpd = ORHI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** orcdr: or.d ${const32}],${Rd}

static int
cris_emu_orcdr (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ORSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 6;
}

// ********** orq: orq $i,$Rd

static int
cris_emu_orq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = ORSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** xor: xor $Rs,$Rd

static int
cris_emu_xor (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = XORSI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** swap: swap${swapoption} ${Rs}

static int
cris_emu_swap (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmps;
  SI tmp_tmpd;
  tmp_tmps = [&valid](){ valid = 0; return 0; }();
  tmp_tmpd = [&](){   SI tmp_tmpcode;
  SI tmp_tmpval;
  SI tmp_tmpres;
  tmp_tmpcode = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
;   tmp_tmpval = tmp_tmps;
; {
  tmp_tmpres = ([&valid](){ valid = 0; return 0; }(), 0);
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = tmp_tmpval;
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
  tmp_tmpres = [&](){   SI tmp_tmpb;
  tmp_tmpb = tmp_tmpval;
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = [&](){   SI tmp_tmpb;
  tmp_tmpb = tmp_tmpval;
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
  tmp_tmpres = [&](){   SI tmp_tmpb;
  tmp_tmpb = tmp_tmpval;
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = [&](){   SI tmp_tmpb;
  tmp_tmpb = tmp_tmpval;
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
  tmp_tmpres = [&](){   SI tmp_tmpb;
  tmp_tmpb = [&](){   SI tmp_tmpb;
  tmp_tmpb = tmp_tmpval;
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = [&](){   SI tmp_tmpb;
  tmp_tmpb = [&](){   SI tmp_tmpb;
  tmp_tmpb = tmp_tmpval;
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
  tmp_tmpres = INVSI (tmp_tmpval);
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = INVSI (tmp_tmpval);
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
  tmp_tmpres = [&](){   SI tmp_tmpb;
  tmp_tmpb = INVSI (tmp_tmpval);
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = [&](){   SI tmp_tmpb;
  tmp_tmpb = INVSI (tmp_tmpval);
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
  tmp_tmpres = [&](){   SI tmp_tmpb;
  tmp_tmpb = INVSI (tmp_tmpval);
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = [&](){   SI tmp_tmpb;
  tmp_tmpb = INVSI (tmp_tmpval);
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
  tmp_tmpres = [&](){   SI tmp_tmpb;
  tmp_tmpb = [&](){   SI tmp_tmpb;
  tmp_tmpb = INVSI (tmp_tmpval);
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
  tmp_tmpres = [&](){   SI tmp_tmpr;
  tmp_tmpr = [&](){   SI tmp_tmpb;
  tmp_tmpb = [&](){   SI tmp_tmpb;
  tmp_tmpb = INVSI (tmp_tmpval);
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 16), 0xffff0000), ANDSI (SRLSI (tmp_tmpb, 16), 65535)); }();
; return ORSI (ANDSI (SLLSI (tmp_tmpb, 8), 0xff00ff00), ANDSI (SRLSI (tmp_tmpb, 8), 16711935)); }();
; return ORSI (SLLSI (ANDSI (tmp_tmpr, 16843009), 7), ORSI (SLLSI (ANDSI (tmp_tmpr, 33686018), 5), ORSI (SLLSI (ANDSI (tmp_tmpr, 67372036), 3), ORSI (SLLSI (ANDSI (tmp_tmpr, 134744072), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 269488144), 1), ORSI (SRLSI (ANDSI (tmp_tmpr, 538976288), 3), ORSI (SRLSI (ANDSI (tmp_tmpr, 1077952576), 5), SRLSI (ANDSI (tmp_tmpr, 0x80808080), 7)))))))); }();
}
; return tmp_tmpres; }();
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** asrr.b-r: asrr.b $Rs,$Rd

static int
cris_emu_asrr_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmpd;
  SI tmp_cnt1;
  SI tmp_cnt2;
  tmp_cnt1 = [&valid](){ valid = 0; return 0; }();
  tmp_cnt2 = [&](){ 31; return ANDSI (tmp_cnt1, 31); }();
  tmp_tmpd = SRASI (EXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }())), tmp_cnt2);
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** asrr.w-r: asrr.w $Rs,$Rd

static int
cris_emu_asrr_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmpd;
  SI tmp_cnt1;
  SI tmp_cnt2;
  tmp_cnt1 = [&valid](){ valid = 0; return 0; }();
  tmp_cnt2 = [&](){ 31; return ANDSI (tmp_cnt1, 31); }();
  tmp_tmpd = SRASI (EXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }())), tmp_cnt2);
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** asrr.d-r: asrr.d $Rs,$Rd

static int
cris_emu_asrr_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt1;
  SI tmp_cnt2;
  tmp_cnt1 = [&valid](){ valid = 0; return 0; }();
  tmp_cnt2 = [&](){ 31; return ANDSI (tmp_cnt1, 31); }();
  tmp_tmpd = SRASI (EXTSISI (TRUNCSISI ([&valid](){ valid = 0; return 0; }())), tmp_cnt2);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** asrq: asrq $c,${Rd}

static int
cris_emu_asrq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = SRASI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lsrr.b-r: lsrr.b $Rs,$Rd

static int
cris_emu_lsrr_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt;
  tmp_cnt = ANDSI ([&valid](){ valid = 0; return 0; }(), 63);
  tmp_tmpd = [&](){ 0; return SRLSI (ZEXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }())), ANDSI (tmp_cnt, 31)); }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lsrr.w-r: lsrr.w $Rs,$Rd

static int
cris_emu_lsrr_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt;
  tmp_cnt = ANDSI ([&valid](){ valid = 0; return 0; }(), 63);
  tmp_tmpd = [&](){ 0; return SRLSI (ZEXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }())), ANDSI (tmp_cnt, 31)); }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lsrr.d-r: lsrr.d $Rs,$Rd

static int
cris_emu_lsrr_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt;
  tmp_cnt = ANDSI ([&valid](){ valid = 0; return 0; }(), 63);
  tmp_tmpd = [&](){ 0; return SRLSI (ZEXTSISI (TRUNCSISI ([&valid](){ valid = 0; return 0; }())), ANDSI (tmp_cnt, 31)); }();
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lsrq: lsrq $c,${Rd}

static int
cris_emu_lsrq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = SRLSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lslr.b-r: lslr.b $Rs,$Rd

static int
cris_emu_lslr_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt;
  tmp_cnt = ANDSI ([&valid](){ valid = 0; return 0; }(), 63);
  tmp_tmpd = [&](){ 0; return SLLSI (ZEXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }())), ANDSI (tmp_cnt, 31)); }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 255), ANDSI (tmp_oldregval, 0xffffff00));
}
{
LTQI (tmp_tmpd, 0);
ANDIF (EQQI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lslr.w-r: lslr.w $Rs,$Rd

static int
cris_emu_lslr_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt;
  tmp_cnt = ANDSI ([&valid](){ valid = 0; return 0; }(), 63);
  tmp_tmpd = [&](){ 0; return SLLSI (ZEXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }())), ANDSI (tmp_cnt, 31)); }();
{
  SI tmp_oldregval;
  tmp_oldregval = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_tmpd, 65535), ANDSI (tmp_oldregval, 0xffff0000));
}
{
LTHI (tmp_tmpd, 0);
ANDIF (EQHI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lslr.d-r: lslr.d $Rs,$Rd

static int
cris_emu_lslr_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt;
  tmp_cnt = ANDSI ([&valid](){ valid = 0; return 0; }(), 63);
  tmp_tmpd = [&](){ 0; return SLLSI (ZEXTSISI (TRUNCSISI ([&valid](){ valid = 0; return 0; }())), ANDSI (tmp_cnt, 31)); }();
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** lslq: lslq $c,${Rd}

static int
cris_emu_lslq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = SLLSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** btst: $Rs,$Rd

static int
cris_emu_btst (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_cnt;
  tmp_tmpd = SLLSI ([&valid](){ valid = 0; return 0; }(), ((31) - (ANDSI ([&valid](){ valid = 0; return 0; }(), 31))));
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** btstq: btstq $c,${Rd}

static int
cris_emu_btstq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  tmp_tmpd = SLLSI ([&valid](){ valid = 0; return 0; }(), ((31) - (cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr)));
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** setf: setf ${list-of-flags}

static int
cris_emu_setf (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
1;
}
{
1;
}
{
1;
}
{
1;
}
{
1;
}
{
1;
}
{
1;
}
{
1;
}
0;
{
0;
}
}

  return 2;
}

// ********** clearf: clearf ${list-of-flags}

static int
cris_emu_clearf (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmp;
  tmp_tmp = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
{
0;
}
{
0;
}
{
0;
}
{
0;
}
{
0;
}
{
0;
}
{
0;
}
{
0;
}
{
0;
0;
}
}

  return 2;
}

// ********** rfe: rfe

static int
cris_emu_rfe (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  USI tmp_oldccs;
  USI tmp_samebits;
  USI tmp_shiftbits;
  USI tmp_keepmask;
  BI tmp_p1;
  tmp_oldccs = [&valid](){ valid = 0; return 0; }();
  tmp_keepmask = 0xc0000000;
  tmp_samebits = ANDSI (tmp_oldccs, tmp_keepmask);
  tmp_shiftbits = ANDSI (SRLSI (ANDSI (tmp_oldccs, 1073609728), 10), INVSI (tmp_keepmask));
  tmp_p1 = ((0) != (ANDSI (tmp_oldccs, 131072)));
ORSI (ORSI (tmp_samebits, tmp_shiftbits), [&](){ 0; return 128; }());
}

  return 2;
}

// ********** sfe: sfe

static int
cris_emu_sfe (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_oldccs;
  SI tmp_savemask;
  tmp_savemask = 0xc0000000;
  tmp_oldccs = [&valid](){ valid = 0; return 0; }();
ORSI (ANDSI (tmp_savemask, tmp_oldccs), ANDSI (INVSI (tmp_savemask), SLLSI (tmp_oldccs, 10)));
}

  return 2;
}

// ********** rfg: rfg

static int
cris_emu_rfg (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;


  return 2;
}

// ********** rfn: rfn

static int
cris_emu_rfn (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
  USI tmp_oldccs;
  USI tmp_samebits;
  USI tmp_shiftbits;
  USI tmp_keepmask;
  BI tmp_p1;
  tmp_oldccs = [&valid](){ valid = 0; return 0; }();
  tmp_keepmask = 0xc0000000;
  tmp_samebits = ANDSI (tmp_oldccs, tmp_keepmask);
  tmp_shiftbits = ANDSI (SRLSI (ANDSI (tmp_oldccs, 1073609728), 10), INVSI (tmp_keepmask));
  tmp_p1 = ((0) != (ANDSI (tmp_oldccs, 131072)));
ORSI (ORSI (tmp_samebits, tmp_shiftbits), [&](){ 0; return 128; }());
}
1;
}

  return 2;
}

// ********** halt: halt

static int
cris_emu_halt (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** bcc-b: b${cc} ${o-pcrel}

static int
cris_emu_bcc_b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  BI tmp_truthval;
  tmp_truthval = [&](){   SI tmp_tmpcond;
  BI tmp_condres;
  tmp_tmpcond = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
; {
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = ORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
  tmp_condres = NOTBI (ORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = NOTBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
  tmp_condres = NOTBI (ORBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = ORBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()), [&valid](){ valid = 0; return 0; }());
  tmp_condres = 1;
  tmp_condres = [&valid](){ valid = 0; return 0; }();
}
; return tmp_condres; }();
{
0;
0;
}
{
{
{ USI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 2;
}

// ********** ba-b: ba ${o-pcrel}

static int
cris_emu_ba_b (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{ USI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bcc-w: b${cc} ${o-word-pcrel}

static int
cris_emu_bcc_w (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  BI tmp_truthval;
  tmp_truthval = [&](){   SI tmp_tmpcond;
  BI tmp_condres;
  tmp_tmpcond = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
; {
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = ORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
  tmp_condres = NOTBI (ORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = NOTBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
  tmp_condres = NOTBI (ORBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = ORBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()), [&valid](){ valid = 0; return 0; }());
  tmp_condres = 1;
  tmp_condres = [&valid](){ valid = 0; return 0; }();
}
; return tmp_condres; }();
{
0;
0;
}
{
{
{ USI val = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 4;
}

// ********** ba-w: ba ${o-word-pcrel}

static int
cris_emu_ba_w (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{ USI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 4;
}

// ********** jas-r: jas ${Rs},${Pd}

static int
cris_emu_jas_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
}
{
{
ADDSI (pc, 4);
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 2;
}

// ********** jas-c: jas ${const32},${Pd}

static int
cris_emu_jas_c (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{
ADDSI (pc, 8);
{ USI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 6;
}

// ********** jump-p: jump ${Ps}

static int
cris_emu_jump_p (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}

  return 2;
}

// ********** bas-c: bas ${const32},${Pd}

static int
cris_emu_bas_c (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{
ADDSI (pc, 8);
{ USI val = cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 6;
}

// ********** jasc-r: jasc ${Rs},${Pd}

static int
cris_emu_jasc_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{
ADDSI (pc, 8);
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 2;
}

// ********** jasc-c: jasc ${const32},${Pd}

static int
cris_emu_jasc_c (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{
ADDSI (pc, 12);
{ USI val = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 6;
}

// ********** basc-c: basc ${const32},${Pd}

static int
cris_emu_basc_c (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{
{
ADDSI (pc, 12);
{ USI val = cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr; if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}
}
}

  return 6;
}

// ********** break: break $n

static int
cris_emu_break (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
{
0;
0;
}
{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }
}

  return 2;
}

// ********** bound-r.b-r: bound-r.b ${Rs},${Rd}

static int
cris_emu_bound_r_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI (TRUNCSIQI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_newval = [&](){ tmp_tmpops; return tmp_tmpopd; }();
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** bound-r.w-r: bound-r.w ${Rs},${Rd}

static int
cris_emu_bound_r_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = ZEXTHISI (TRUNCSIHI ([&valid](){ valid = 0; return 0; }()));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_newval = [&](){ tmp_tmpops; return tmp_tmpopd; }();
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** bound-r.d-r: bound-r.d ${Rs},${Rd}

static int
cris_emu_bound_r_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = TRUNCSISI ([&valid](){ valid = 0; return 0; }());
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_newval = [&](){ tmp_tmpops; return tmp_tmpopd; }();
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** bound-cb: bound.b [PC+],${Rd}

static int
cris_emu_bound_cb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = ZEXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr));
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_newval = [&](){ tmp_tmpops; return tmp_tmpopd; }();
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** bound-cw: bound.w [PC+],${Rd}

static int
cris_emu_bound_cw (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = ZEXTSISI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr);
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_newval = [&](){ tmp_tmpops; return tmp_tmpopd; }();
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 4;
}

// ********** bound-cd: bound.d [PC+],${Rd}

static int
cris_emu_bound_cd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpopd;
  SI tmp_tmpops;
  SI tmp_newval;
  tmp_tmpops = cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr;
  tmp_tmpopd = [&valid](){ valid = 0; return 0; }();
  tmp_newval = [&](){ tmp_tmpops; return tmp_tmpopd; }();
tmp_newval;
{
LTSI (tmp_newval, 0);
ANDIF (EQSI (tmp_newval, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 6;
}

// ********** scc: s${cc} ${Rd-sfield}

static int
cris_emu_scc (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  BI tmp_truthval;
  tmp_truthval = [&](){   SI tmp_tmpcond;
  BI tmp_condres;
  tmp_tmpcond = cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr;
; {
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = NOTBI ([&valid](){ valid = 0; return 0; }());
  tmp_condres = [&valid](){ valid = 0; return 0; }();
  tmp_condres = ORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
  tmp_condres = NOTBI (ORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = NOTBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }());
  tmp_condres = NOTBI (ORBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()), [&valid](){ valid = 0; return 0; }()));
  tmp_condres = ORBI (XORBI ([&valid](){ valid = 0; return 0; }(), [&valid](){ valid = 0; return 0; }()), [&valid](){ valid = 0; return 0; }());
  tmp_condres = 1;
  tmp_condres = [&valid](){ valid = 0; return 0; }();
}
; return tmp_condres; }();
ZEXTBISI (tmp_truthval);
{
0;
0;
}
}

  return 2;
}

// ********** lz: lz ${Rs},${Rd}

static int
cris_emu_lz (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmpd;
  SI tmp_tmp;
  tmp_tmp = [&valid](){ valid = 0; return 0; }();
  tmp_tmpd = 0;
{
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
{
{
  tmp_tmp = SLLSI (tmp_tmp, 1);
  tmp_tmpd = ADDSI (tmp_tmpd, 1);
}
}
}
tmp_tmpd;
{
LTSI (tmp_tmpd, 0);
ANDIF (EQSI (tmp_tmpd, 0), [&](){ [&valid](){ valid = 0; return 0; }(); return 1; }());
0;
0;
{
0;
0;
}
}
}

  return 2;
}

// ********** addoq: addoq $o,$Rs,ACR

static int
cris_emu_addoq (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op1.type == o_imm ? cmd.Op1.value : cmd.Op1.addr);
1;
}

  return 2;
}

// ********** addo-m.b-m: addo-m.b [${Rs}${inc}],$Rd,ACR

static int
cris_emu_addo_m_b_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  QI tmp_tmps;
  tmp_tmps = [&](){   SI tmp_addr;
  QI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ QI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 1);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
ADDSI ([&valid](){ valid = 0; return 0; }(), EXTQISI (tmp_tmps));
1;
}

  return 2;
}

// ********** addo-m.w-m: addo-m.w [${Rs}${inc}],$Rd,ACR

static int
cris_emu_addo_m_w_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  HI tmp_tmps;
  tmp_tmps = [&](){   SI tmp_addr;
  HI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ HI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 2);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
ADDSI ([&valid](){ valid = 0; return 0; }(), EXTHISI (tmp_tmps));
1;
}

  return 2;
}

// ********** addo-m.d-m: addo-m.d [${Rs}${inc}],$Rd,ACR

static int
cris_emu_addo_m_d_m (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
  SI tmp_tmps;
  tmp_tmps = [&](){   SI tmp_addr;
  SI tmp_tmp_mem;
  BI tmp_postinc;
  tmp_postinc = cmd.Op2.type == o_imm ? cmd.Op2.value : cmd.Op2.addr;
;   tmp_addr = [&](){ [&valid](){ valid = 0; return 0; }(); return [&valid](){ valid = 0; return 0; }(); }();
;   tmp_tmp_mem = [&valid](){ SI val = tmp_addr; if (valid) ua_add_dref(0, val, dr_R); return 0; }()
;
; {
{
{
  tmp_addr = ADDSI (tmp_addr, 4);
}
tmp_addr;
}
}
; return tmp_tmp_mem; }();
ADDSI ([&valid](){ valid = 0; return 0; }(), tmp_tmps);
1;
}

  return 2;
}

// ********** addo-cb: addo.b [PC+],$Rd,ACR

static int
cris_emu_addo_cb (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), EXTQISI (TRUNCSIQI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr)));
1;
}

  return 4;
}

// ********** addo-cw: addo.w [PC+],$Rd,ACR

static int
cris_emu_addo_cw (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), EXTHISI (TRUNCSIHI (cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr)));
1;
}

  return 4;
}

// ********** addo-cd: addo.d [PC+],$Rd,ACR

static int
cris_emu_addo_cd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), cmd.Op0.type == o_imm ? cmd.Op0.value : cmd.Op0.addr);
1;
}

  return 6;
}

// ********** addi-acr.b-r: addi-acr.b ${Rs-dfield}.m,${Rd-sfield},ACR

static int
cris_emu_addi_acr_b_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), MULSI ([&valid](){ valid = 0; return 0; }(), 1));
1;
}

  return 2;
}

// ********** addi-acr.w-r: addi-acr.w ${Rs-dfield}.m,${Rd-sfield},ACR

static int
cris_emu_addi_acr_w_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), MULSI ([&valid](){ valid = 0; return 0; }(), 2));
1;
}

  return 2;
}

// ********** addi-acr.d-r: addi-acr.d ${Rs-dfield}.m,${Rd-sfield},ACR

static int
cris_emu_addi_acr_d_r (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{
ADDSI ([&valid](){ valid = 0; return 0; }(), MULSI ([&valid](){ valid = 0; return 0; }(), 4));
1;
}

  return 2;
}

// ********** fidxi: fidxi [$Rs]

static int
cris_emu_fidxi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** ftagi: fidxi [$Rs]

static int
cris_emu_ftagi (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** fidxd: fidxd [$Rs]

static int
cris_emu_fidxd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}

// ********** ftagd: ftagd [$Rs]

static int
cris_emu_ftagd (void)
{
  ea_t pc = cmd.ea;
  int valid = 1;

{ USI val = [&valid](){ valid = 0; return 0; }(); if (valid) ua_add_cref(0, val, InstrIsSet(cmd.itype, CF_CALL) ? fl_CN : fl_JN); }

  return 2;
}


// Emulator entry
int idaapi emu(void)
{
  int len;  switch (cmd.itype)
  {
    case CRIS_INSN_X_INVALID: len = cris_emu_x_invalid(); break;
    case CRIS_INSN_MOVE_B_R: len = cris_emu_move_b_r(); break;
    case CRIS_INSN_MOVE_W_R: len = cris_emu_move_w_r(); break;
    case CRIS_INSN_MOVE_D_R: len = cris_emu_move_d_r(); break;
    case CRIS_INSN_MOVEQ: len = cris_emu_moveq(); break;
    case CRIS_INSN_MOVS_B_R: len = cris_emu_movs_b_r(); break;
    case CRIS_INSN_MOVS_W_R: len = cris_emu_movs_w_r(); break;
    case CRIS_INSN_MOVU_B_R: len = cris_emu_movu_b_r(); break;
    case CRIS_INSN_MOVU_W_R: len = cris_emu_movu_w_r(); break;
    case CRIS_INSN_MOVECBR: len = cris_emu_movecbr(); break;
    case CRIS_INSN_MOVECWR: len = cris_emu_movecwr(); break;
    case CRIS_INSN_MOVECDR: len = cris_emu_movecdr(); break;
    case CRIS_INSN_MOVSCBR: len = cris_emu_movscbr(); break;
    case CRIS_INSN_MOVSCWR: len = cris_emu_movscwr(); break;
    case CRIS_INSN_MOVUCBR: len = cris_emu_movucbr(); break;
    case CRIS_INSN_MOVUCWR: len = cris_emu_movucwr(); break;
    case CRIS_INSN_ADDQ: len = cris_emu_addq(); break;
    case CRIS_INSN_SUBQ: len = cris_emu_subq(); break;
    case CRIS_INSN_CMP_R_B_R: len = cris_emu_cmp_r_b_r(); break;
    case CRIS_INSN_CMP_R_W_R: len = cris_emu_cmp_r_w_r(); break;
    case CRIS_INSN_CMP_R_D_R: len = cris_emu_cmp_r_d_r(); break;
    case CRIS_INSN_CMP_M_B_M: len = cris_emu_cmp_m_b_m(); break;
    case CRIS_INSN_CMP_M_W_M: len = cris_emu_cmp_m_w_m(); break;
    case CRIS_INSN_CMP_M_D_M: len = cris_emu_cmp_m_d_m(); break;
    case CRIS_INSN_CMPCBR: len = cris_emu_cmpcbr(); break;
    case CRIS_INSN_CMPCWR: len = cris_emu_cmpcwr(); break;
    case CRIS_INSN_CMPCDR: len = cris_emu_cmpcdr(); break;
    case CRIS_INSN_CMPQ: len = cris_emu_cmpq(); break;
    case CRIS_INSN_CMPS_M_B_M: len = cris_emu_cmps_m_b_m(); break;
    case CRIS_INSN_CMPS_M_W_M: len = cris_emu_cmps_m_w_m(); break;
    case CRIS_INSN_CMPSCBR: len = cris_emu_cmpscbr(); break;
    case CRIS_INSN_CMPSCWR: len = cris_emu_cmpscwr(); break;
    case CRIS_INSN_CMPU_M_B_M: len = cris_emu_cmpu_m_b_m(); break;
    case CRIS_INSN_CMPU_M_W_M: len = cris_emu_cmpu_m_w_m(); break;
    case CRIS_INSN_CMPUCBR: len = cris_emu_cmpucbr(); break;
    case CRIS_INSN_CMPUCWR: len = cris_emu_cmpucwr(); break;
    case CRIS_INSN_MOVE_M_B_M: len = cris_emu_move_m_b_m(); break;
    case CRIS_INSN_MOVE_M_W_M: len = cris_emu_move_m_w_m(); break;
    case CRIS_INSN_MOVE_M_D_M: len = cris_emu_move_m_d_m(); break;
    case CRIS_INSN_MOVS_M_B_M: len = cris_emu_movs_m_b_m(); break;
    case CRIS_INSN_MOVS_M_W_M: len = cris_emu_movs_m_w_m(); break;
    case CRIS_INSN_MOVU_M_B_M: len = cris_emu_movu_m_b_m(); break;
    case CRIS_INSN_MOVU_M_W_M: len = cris_emu_movu_m_w_m(); break;
    case CRIS_INSN_MOVE_R_SPRV32: len = cris_emu_move_r_sprv32(); break;
    case CRIS_INSN_MOVE_SPR_RV32: len = cris_emu_move_spr_rv32(); break;
    case CRIS_INSN_MOVE_M_SPRV32: len = cris_emu_move_m_sprv32(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P2: len = cris_emu_move_c_sprv32_p2(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P3: len = cris_emu_move_c_sprv32_p3(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P5: len = cris_emu_move_c_sprv32_p5(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P6: len = cris_emu_move_c_sprv32_p6(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P7: len = cris_emu_move_c_sprv32_p7(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P9: len = cris_emu_move_c_sprv32_p9(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P10: len = cris_emu_move_c_sprv32_p10(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P11: len = cris_emu_move_c_sprv32_p11(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P12: len = cris_emu_move_c_sprv32_p12(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P13: len = cris_emu_move_c_sprv32_p13(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P14: len = cris_emu_move_c_sprv32_p14(); break;
    case CRIS_INSN_MOVE_C_SPRV32_P15: len = cris_emu_move_c_sprv32_p15(); break;
    case CRIS_INSN_MOVE_SPR_MV32: len = cris_emu_move_spr_mv32(); break;
    case CRIS_INSN_MOVE_SS_R: len = cris_emu_move_ss_r(); break;
    case CRIS_INSN_MOVE_R_SS: len = cris_emu_move_r_ss(); break;
    case CRIS_INSN_MOVEM_R_M_V32: len = cris_emu_movem_r_m_v32(); break;
    case CRIS_INSN_MOVEM_M_R_V32: len = cris_emu_movem_m_r_v32(); break;
    case CRIS_INSN_ADD_B_R: len = cris_emu_add_b_r(); break;
    case CRIS_INSN_ADD_W_R: len = cris_emu_add_w_r(); break;
    case CRIS_INSN_ADD_D_R: len = cris_emu_add_d_r(); break;
    case CRIS_INSN_ADD_M_B_M: len = cris_emu_add_m_b_m(); break;
    case CRIS_INSN_ADD_M_W_M: len = cris_emu_add_m_w_m(); break;
    case CRIS_INSN_ADD_M_D_M: len = cris_emu_add_m_d_m(); break;
    case CRIS_INSN_ADDCBR: len = cris_emu_addcbr(); break;
    case CRIS_INSN_ADDCWR: len = cris_emu_addcwr(); break;
    case CRIS_INSN_ADDCDR: len = cris_emu_addcdr(); break;
    case CRIS_INSN_ADDS_B_R: len = cris_emu_adds_b_r(); break;
    case CRIS_INSN_ADDS_W_R: len = cris_emu_adds_w_r(); break;
    case CRIS_INSN_ADDS_M_B_M: len = cris_emu_adds_m_b_m(); break;
    case CRIS_INSN_ADDS_M_W_M: len = cris_emu_adds_m_w_m(); break;
    case CRIS_INSN_ADDSCBR: len = cris_emu_addscbr(); break;
    case CRIS_INSN_ADDSCWR: len = cris_emu_addscwr(); break;
    case CRIS_INSN_ADDU_B_R: len = cris_emu_addu_b_r(); break;
    case CRIS_INSN_ADDU_W_R: len = cris_emu_addu_w_r(); break;
    case CRIS_INSN_ADDU_M_B_M: len = cris_emu_addu_m_b_m(); break;
    case CRIS_INSN_ADDU_M_W_M: len = cris_emu_addu_m_w_m(); break;
    case CRIS_INSN_ADDUCBR: len = cris_emu_adducbr(); break;
    case CRIS_INSN_ADDUCWR: len = cris_emu_adducwr(); break;
    case CRIS_INSN_SUB_B_R: len = cris_emu_sub_b_r(); break;
    case CRIS_INSN_SUB_W_R: len = cris_emu_sub_w_r(); break;
    case CRIS_INSN_SUB_D_R: len = cris_emu_sub_d_r(); break;
    case CRIS_INSN_SUB_M_B_M: len = cris_emu_sub_m_b_m(); break;
    case CRIS_INSN_SUB_M_W_M: len = cris_emu_sub_m_w_m(); break;
    case CRIS_INSN_SUB_M_D_M: len = cris_emu_sub_m_d_m(); break;
    case CRIS_INSN_SUBCBR: len = cris_emu_subcbr(); break;
    case CRIS_INSN_SUBCWR: len = cris_emu_subcwr(); break;
    case CRIS_INSN_SUBCDR: len = cris_emu_subcdr(); break;
    case CRIS_INSN_SUBS_B_R: len = cris_emu_subs_b_r(); break;
    case CRIS_INSN_SUBS_W_R: len = cris_emu_subs_w_r(); break;
    case CRIS_INSN_SUBS_M_B_M: len = cris_emu_subs_m_b_m(); break;
    case CRIS_INSN_SUBS_M_W_M: len = cris_emu_subs_m_w_m(); break;
    case CRIS_INSN_SUBSCBR: len = cris_emu_subscbr(); break;
    case CRIS_INSN_SUBSCWR: len = cris_emu_subscwr(); break;
    case CRIS_INSN_SUBU_B_R: len = cris_emu_subu_b_r(); break;
    case CRIS_INSN_SUBU_W_R: len = cris_emu_subu_w_r(); break;
    case CRIS_INSN_SUBU_M_B_M: len = cris_emu_subu_m_b_m(); break;
    case CRIS_INSN_SUBU_M_W_M: len = cris_emu_subu_m_w_m(); break;
    case CRIS_INSN_SUBUCBR: len = cris_emu_subucbr(); break;
    case CRIS_INSN_SUBUCWR: len = cris_emu_subucwr(); break;
    case CRIS_INSN_ADDC_R: len = cris_emu_addc_r(); break;
    case CRIS_INSN_ADDC_M: len = cris_emu_addc_m(); break;
    case CRIS_INSN_ADDC_C: len = cris_emu_addc_c(); break;
    case CRIS_INSN_LAPC_D: len = cris_emu_lapc_d(); break;
    case CRIS_INSN_LAPCQ: len = cris_emu_lapcq(); break;
    case CRIS_INSN_ADDI_B_R: len = cris_emu_addi_b_r(); break;
    case CRIS_INSN_ADDI_W_R: len = cris_emu_addi_w_r(); break;
    case CRIS_INSN_ADDI_D_R: len = cris_emu_addi_d_r(); break;
    case CRIS_INSN_NEG_B_R: len = cris_emu_neg_b_r(); break;
    case CRIS_INSN_NEG_W_R: len = cris_emu_neg_w_r(); break;
    case CRIS_INSN_NEG_D_R: len = cris_emu_neg_d_r(); break;
    case CRIS_INSN_TEST_M_B_M: len = cris_emu_test_m_b_m(); break;
    case CRIS_INSN_TEST_M_W_M: len = cris_emu_test_m_w_m(); break;
    case CRIS_INSN_TEST_M_D_M: len = cris_emu_test_m_d_m(); break;
    case CRIS_INSN_MOVE_R_M_B_M: len = cris_emu_move_r_m_b_m(); break;
    case CRIS_INSN_MOVE_R_M_W_M: len = cris_emu_move_r_m_w_m(); break;
    case CRIS_INSN_MOVE_R_M_D_M: len = cris_emu_move_r_m_d_m(); break;
    case CRIS_INSN_MULS_B: len = cris_emu_muls_b(); break;
    case CRIS_INSN_MULS_W: len = cris_emu_muls_w(); break;
    case CRIS_INSN_MULS_D: len = cris_emu_muls_d(); break;
    case CRIS_INSN_MULU_B: len = cris_emu_mulu_b(); break;
    case CRIS_INSN_MULU_W: len = cris_emu_mulu_w(); break;
    case CRIS_INSN_MULU_D: len = cris_emu_mulu_d(); break;
    case CRIS_INSN_MCP: len = cris_emu_mcp(); break;
    case CRIS_INSN_DSTEP: len = cris_emu_dstep(); break;
    case CRIS_INSN_ABS: len = cris_emu_abs(); break;
    case CRIS_INSN_AND_B_R: len = cris_emu_and_b_r(); break;
    case CRIS_INSN_AND_W_R: len = cris_emu_and_w_r(); break;
    case CRIS_INSN_AND_D_R: len = cris_emu_and_d_r(); break;
    case CRIS_INSN_AND_M_B_M: len = cris_emu_and_m_b_m(); break;
    case CRIS_INSN_AND_M_W_M: len = cris_emu_and_m_w_m(); break;
    case CRIS_INSN_AND_M_D_M: len = cris_emu_and_m_d_m(); break;
    case CRIS_INSN_ANDCBR: len = cris_emu_andcbr(); break;
    case CRIS_INSN_ANDCWR: len = cris_emu_andcwr(); break;
    case CRIS_INSN_ANDCDR: len = cris_emu_andcdr(); break;
    case CRIS_INSN_ANDQ: len = cris_emu_andq(); break;
    case CRIS_INSN_ORR_B_R: len = cris_emu_orr_b_r(); break;
    case CRIS_INSN_ORR_W_R: len = cris_emu_orr_w_r(); break;
    case CRIS_INSN_ORR_D_R: len = cris_emu_orr_d_r(); break;
    case CRIS_INSN_OR_M_B_M: len = cris_emu_or_m_b_m(); break;
    case CRIS_INSN_OR_M_W_M: len = cris_emu_or_m_w_m(); break;
    case CRIS_INSN_OR_M_D_M: len = cris_emu_or_m_d_m(); break;
    case CRIS_INSN_ORCBR: len = cris_emu_orcbr(); break;
    case CRIS_INSN_ORCWR: len = cris_emu_orcwr(); break;
    case CRIS_INSN_ORCDR: len = cris_emu_orcdr(); break;
    case CRIS_INSN_ORQ: len = cris_emu_orq(); break;
    case CRIS_INSN_XOR: len = cris_emu_xor(); break;
    case CRIS_INSN_SWAP: len = cris_emu_swap(); break;
    case CRIS_INSN_ASRR_B_R: len = cris_emu_asrr_b_r(); break;
    case CRIS_INSN_ASRR_W_R: len = cris_emu_asrr_w_r(); break;
    case CRIS_INSN_ASRR_D_R: len = cris_emu_asrr_d_r(); break;
    case CRIS_INSN_ASRQ: len = cris_emu_asrq(); break;
    case CRIS_INSN_LSRR_B_R: len = cris_emu_lsrr_b_r(); break;
    case CRIS_INSN_LSRR_W_R: len = cris_emu_lsrr_w_r(); break;
    case CRIS_INSN_LSRR_D_R: len = cris_emu_lsrr_d_r(); break;
    case CRIS_INSN_LSRQ: len = cris_emu_lsrq(); break;
    case CRIS_INSN_LSLR_B_R: len = cris_emu_lslr_b_r(); break;
    case CRIS_INSN_LSLR_W_R: len = cris_emu_lslr_w_r(); break;
    case CRIS_INSN_LSLR_D_R: len = cris_emu_lslr_d_r(); break;
    case CRIS_INSN_LSLQ: len = cris_emu_lslq(); break;
    case CRIS_INSN_BTST: len = cris_emu_btst(); break;
    case CRIS_INSN_BTSTQ: len = cris_emu_btstq(); break;
    case CRIS_INSN_SETF: len = cris_emu_setf(); break;
    case CRIS_INSN_CLEARF: len = cris_emu_clearf(); break;
    case CRIS_INSN_RFE: len = cris_emu_rfe(); break;
    case CRIS_INSN_SFE: len = cris_emu_sfe(); break;
    case CRIS_INSN_RFG: len = cris_emu_rfg(); break;
    case CRIS_INSN_RFN: len = cris_emu_rfn(); break;
    case CRIS_INSN_HALT: len = cris_emu_halt(); break;
    case CRIS_INSN_BCC_B: len = cris_emu_bcc_b(); break;
    case CRIS_INSN_BA_B: len = cris_emu_ba_b(); break;
    case CRIS_INSN_BCC_W: len = cris_emu_bcc_w(); break;
    case CRIS_INSN_BA_W: len = cris_emu_ba_w(); break;
    case CRIS_INSN_JAS_R: len = cris_emu_jas_r(); break;
    case CRIS_INSN_JAS_C: len = cris_emu_jas_c(); break;
    case CRIS_INSN_JUMP_P: len = cris_emu_jump_p(); break;
    case CRIS_INSN_BAS_C: len = cris_emu_bas_c(); break;
    case CRIS_INSN_JASC_R: len = cris_emu_jasc_r(); break;
    case CRIS_INSN_JASC_C: len = cris_emu_jasc_c(); break;
    case CRIS_INSN_BASC_C: len = cris_emu_basc_c(); break;
    case CRIS_INSN_BREAK: len = cris_emu_break(); break;
    case CRIS_INSN_BOUND_R_B_R: len = cris_emu_bound_r_b_r(); break;
    case CRIS_INSN_BOUND_R_W_R: len = cris_emu_bound_r_w_r(); break;
    case CRIS_INSN_BOUND_R_D_R: len = cris_emu_bound_r_d_r(); break;
    case CRIS_INSN_BOUND_CB: len = cris_emu_bound_cb(); break;
    case CRIS_INSN_BOUND_CW: len = cris_emu_bound_cw(); break;
    case CRIS_INSN_BOUND_CD: len = cris_emu_bound_cd(); break;
    case CRIS_INSN_SCC: len = cris_emu_scc(); break;
    case CRIS_INSN_LZ: len = cris_emu_lz(); break;
    case CRIS_INSN_ADDOQ: len = cris_emu_addoq(); break;
    case CRIS_INSN_ADDO_M_B_M: len = cris_emu_addo_m_b_m(); break;
    case CRIS_INSN_ADDO_M_W_M: len = cris_emu_addo_m_w_m(); break;
    case CRIS_INSN_ADDO_M_D_M: len = cris_emu_addo_m_d_m(); break;
    case CRIS_INSN_ADDO_CB: len = cris_emu_addo_cb(); break;
    case CRIS_INSN_ADDO_CW: len = cris_emu_addo_cw(); break;
    case CRIS_INSN_ADDO_CD: len = cris_emu_addo_cd(); break;
    case CRIS_INSN_ADDI_ACR_B_R: len = cris_emu_addi_acr_b_r(); break;
    case CRIS_INSN_ADDI_ACR_W_R: len = cris_emu_addi_acr_w_r(); break;
    case CRIS_INSN_ADDI_ACR_D_R: len = cris_emu_addi_acr_d_r(); break;
    case CRIS_INSN_FIDXI: len = cris_emu_fidxi(); break;
    case CRIS_INSN_FTAGI: len = cris_emu_ftagi(); break;
    case CRIS_INSN_FIDXD: len = cris_emu_fidxd(); break;
    case CRIS_INSN_FTAGD: len = cris_emu_ftagd(); break;
    default: len = 0; break;
  }
  if (len && !InstrIsSet(cmd.itype, CF_STOP))
  {
    ua_add_cref(0, cmd.ea+len, fl_F);
  }
  return 1;
}
