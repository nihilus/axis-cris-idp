/* CRIS IDP hardware defines

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef __CRIS_HPP
#define __CRIS_HPP

#include <ida.hpp>
#include <idp.hpp>
#include <ua.hpp>
#include <name.hpp>
#include <auto.hpp>
#include <bytes.hpp>
#include <frame.hpp>
#include <queue.hpp>
#include <lines.hpp>
#include <loader.hpp>
#include <offset.hpp>
#include <segment.hpp>
#include <kernwin.hpp>
#include "ins.hpp"

/* needed for cgen.h */
#define CGEN_ARCH cris
#define CGEN_SYM(s) cris##_cgen_##s

/* for referring to operand type in cmd */
#define cgen_optype specval_shorts.low

/* Offsets for register names by cgen hw name */

#define REGS_HW_H_V32_BASE 0
#define REGS_HW_H_PC_BASE 1
#define REGS_HW_H_GR_BASE 2
#define REGS_HW_H_GR_X_BASE 18
#define REGS_HW_H_RAW_GR_BASE 34
#define REGS_HW_H_SR_BASE 50
#define REGS_HW_H_SR_X_BASE 66
#define REGS_HW_H_SUPR_BASE 82
#define REGS_HW_H_CBIT_BASE 98
#define REGS_HW_H_CBIT_MOVE_BASE 99
#define REGS_HW_H_CBIT_MOVE_X_BASE 100
#define REGS_HW_H_VBIT_BASE 101
#define REGS_HW_H_VBIT_MOVE_BASE 102
#define REGS_HW_H_VBIT_MOVE_X_BASE 103
#define REGS_HW_H_ZBIT_BASE 104
#define REGS_HW_H_ZBIT_MOVE_BASE 105
#define REGS_HW_H_ZBIT_MOVE_X_BASE 106
#define REGS_HW_H_NBIT_BASE 107
#define REGS_HW_H_NBIT_MOVE_BASE 108
#define REGS_HW_H_NBIT_MOVE_X_BASE 109
#define REGS_HW_H_XBIT_BASE 110
#define REGS_HW_H_IBIT_BASE 111
#define REGS_HW_H_PBIT_BASE 112
#define REGS_HW_H_RBIT_BASE 113
#define REGS_HW_H_UBIT_BASE 114
#define REGS_HW_H_GBIT_BASE 115
#define REGS_HW_H_KERNEL_SP_BASE 116
#define REGS_HW_H_UBIT_X_BASE 117
#define REGS_HW_H_IBIT_X_BASE 118
#define REGS_HW_H_MBIT_BASE 119
#define REGS_HW_H_QBIT_BASE 120
#define REGS_HW_H_SBIT_BASE 121
#define REGS_HW_H_INSN_PREFIXED_P_BASE 122
#define REGS_HW_H_INSN_PREFIXED_P_X_BASE 123
#define REGS_HW_H_PREFIXREG_BASE 124
#define REGS_COUNT 125
/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* cgen_hw attribute accessor macros.  */
#define CGEN_ATTR_CGEN_HW_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_MACH-CGEN_HW_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_HW_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_HW_CACHE_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_CACHE_ADDR)) != 0)
#define CGEN_ATTR_CGEN_HW_PC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PC)) != 0)
#define CGEN_ATTR_CGEN_HW_PROFILE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PROFILE)) != 0)

/* Enum declaration for cris hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_INC, HW_H_CCODE, HW_H_SWAP
 , HW_H_FLAGBITS, HW_H_V32, HW_H_PC, HW_H_GR
 , HW_H_GR_X, HW_H_RAW_GR, HW_H_SR, HW_H_SR_X
 , HW_H_SUPR, HW_H_CBIT, HW_H_CBIT_MOVE, HW_H_CBIT_MOVE_X
 , HW_H_VBIT, HW_H_VBIT_MOVE, HW_H_VBIT_MOVE_X, HW_H_ZBIT
 , HW_H_ZBIT_MOVE, HW_H_ZBIT_MOVE_X, HW_H_NBIT, HW_H_NBIT_MOVE
 , HW_H_NBIT_MOVE_X, HW_H_XBIT, HW_H_IBIT, HW_H_PBIT
 , HW_H_RBIT, HW_H_UBIT, HW_H_GBIT, HW_H_KERNEL_SP
 , HW_H_UBIT_X, HW_H_IBIT_X, HW_H_MBIT, HW_H_QBIT
 , HW_H_SBIT, HW_H_INSN_PREFIXED_P, HW_H_INSN_PREFIXED_P_X, HW_H_PREFIXREG
 , HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH, CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* cgen_operand attribute accessor macros.  */
#define CGEN_ATTR_CGEN_OPERAND_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_MACH-CGEN_OPERAND_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_OPERAND_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_NEGATIVE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_NEGATIVE)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELAX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELAX)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SEM_ONLY_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SEM_ONLY)) != 0)

/* Enum declaration for cris operand types.  */
typedef enum cgen_operand_type {
  CRIS_OPERAND_PC, CRIS_OPERAND_CBIT, CRIS_OPERAND_CBIT_MOVE, CRIS_OPERAND_VBIT
 , CRIS_OPERAND_VBIT_MOVE, CRIS_OPERAND_ZBIT, CRIS_OPERAND_ZBIT_MOVE, CRIS_OPERAND_NBIT
 , CRIS_OPERAND_NBIT_MOVE, CRIS_OPERAND_XBIT, CRIS_OPERAND_IBIT, CRIS_OPERAND_UBIT
 , CRIS_OPERAND_PBIT, CRIS_OPERAND_RBIT, CRIS_OPERAND_SBIT, CRIS_OPERAND_MBIT
 , CRIS_OPERAND_QBIT, CRIS_OPERAND_PREFIX_SET, CRIS_OPERAND_PREFIXREG, CRIS_OPERAND_RS
 , CRIS_OPERAND_INC, CRIS_OPERAND_PS, CRIS_OPERAND_SS, CRIS_OPERAND_SD
 , CRIS_OPERAND_I, CRIS_OPERAND_J, CRIS_OPERAND_C, CRIS_OPERAND_QO
 , CRIS_OPERAND_RD, CRIS_OPERAND_SCONST8, CRIS_OPERAND_UCONST8, CRIS_OPERAND_SCONST16
 , CRIS_OPERAND_UCONST16, CRIS_OPERAND_CONST32, CRIS_OPERAND_CONST32_PCREL, CRIS_OPERAND_PD
 , CRIS_OPERAND_O, CRIS_OPERAND_O_PCREL, CRIS_OPERAND_O_WORD_PCREL, CRIS_OPERAND_CC
 , CRIS_OPERAND_N, CRIS_OPERAND_SWAPOPTION, CRIS_OPERAND_LIST_OF_FLAGS, CRIS_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS 43

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 6

/* cgen.h must be included after all that decls */
#include "cgen.h"

/* IDP exports */

int  idaapi ana( void );
int  idaapi emu( void );
void idaapi out( void );
bool idaapi outop( op_t &op );
void idaapi cris_data(ea_t ea);

#endif
