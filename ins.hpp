/* CRIS IDP instructions

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

#ifndef __INSTRS_HPP
#define __INSTRS_HPP

extern instruc_t Instructions[];

typedef enum nameNum ENUM_SIZE(uint16)
{
  CRIS_INSN_UNKNOWN = 0, 
  CRIS_INSN_X_INVALID, 
  CRIS_INSN_MOVE_B_R, 
  CRIS_INSN_MOVE_W_R, 
  CRIS_INSN_MOVE_D_R, 
  CRIS_INSN_MOVEQ, 
  CRIS_INSN_MOVS_B_R, 
  CRIS_INSN_MOVS_W_R, 
  CRIS_INSN_MOVU_B_R, 
  CRIS_INSN_MOVU_W_R, 
  CRIS_INSN_MOVECBR, 
  CRIS_INSN_MOVECWR, 
  CRIS_INSN_MOVECDR, 
  CRIS_INSN_MOVSCBR, 
  CRIS_INSN_MOVSCWR, 
  CRIS_INSN_MOVUCBR, 
  CRIS_INSN_MOVUCWR, 
  CRIS_INSN_ADDQ, 
  CRIS_INSN_SUBQ, 
  CRIS_INSN_CMP_R_B_R, 
  CRIS_INSN_CMP_R_W_R, 
  CRIS_INSN_CMP_R_D_R, 
  CRIS_INSN_CMP_M_B_M, 
  CRIS_INSN_CMP_M_W_M, 
  CRIS_INSN_CMP_M_D_M, 
  CRIS_INSN_CMPCBR, 
  CRIS_INSN_CMPCWR, 
  CRIS_INSN_CMPCDR, 
  CRIS_INSN_CMPQ, 
  CRIS_INSN_CMPS_M_B_M, 
  CRIS_INSN_CMPS_M_W_M, 
  CRIS_INSN_CMPSCBR, 
  CRIS_INSN_CMPSCWR, 
  CRIS_INSN_CMPU_M_B_M, 
  CRIS_INSN_CMPU_M_W_M, 
  CRIS_INSN_CMPUCBR, 
  CRIS_INSN_CMPUCWR, 
  CRIS_INSN_MOVE_M_B_M, 
  CRIS_INSN_MOVE_M_W_M, 
  CRIS_INSN_MOVE_M_D_M, 
  CRIS_INSN_MOVS_M_B_M, 
  CRIS_INSN_MOVS_M_W_M, 
  CRIS_INSN_MOVU_M_B_M, 
  CRIS_INSN_MOVU_M_W_M, 
  CRIS_INSN_MOVE_R_SPRV32, 
  CRIS_INSN_MOVE_SPR_RV32, 
  CRIS_INSN_MOVE_M_SPRV32, 
  CRIS_INSN_MOVE_C_SPRV32_P2, 
  CRIS_INSN_MOVE_C_SPRV32_P3, 
  CRIS_INSN_MOVE_C_SPRV32_P5, 
  CRIS_INSN_MOVE_C_SPRV32_P6, 
  CRIS_INSN_MOVE_C_SPRV32_P7, 
  CRIS_INSN_MOVE_C_SPRV32_P9, 
  CRIS_INSN_MOVE_C_SPRV32_P10, 
  CRIS_INSN_MOVE_C_SPRV32_P11, 
  CRIS_INSN_MOVE_C_SPRV32_P12, 
  CRIS_INSN_MOVE_C_SPRV32_P13, 
  CRIS_INSN_MOVE_C_SPRV32_P14, 
  CRIS_INSN_MOVE_C_SPRV32_P15, 
  CRIS_INSN_MOVE_SPR_MV32, 
  CRIS_INSN_MOVE_SS_R, 
  CRIS_INSN_MOVE_R_SS, 
  CRIS_INSN_MOVEM_R_M_V32, 
  CRIS_INSN_MOVEM_M_R_V32, 
  CRIS_INSN_ADD_B_R, 
  CRIS_INSN_ADD_W_R, 
  CRIS_INSN_ADD_D_R, 
  CRIS_INSN_ADD_M_B_M, 
  CRIS_INSN_ADD_M_W_M, 
  CRIS_INSN_ADD_M_D_M, 
  CRIS_INSN_ADDCBR, 
  CRIS_INSN_ADDCWR, 
  CRIS_INSN_ADDCDR, 
  CRIS_INSN_ADDS_B_R, 
  CRIS_INSN_ADDS_W_R, 
  CRIS_INSN_ADDS_M_B_M, 
  CRIS_INSN_ADDS_M_W_M, 
  CRIS_INSN_ADDSCBR, 
  CRIS_INSN_ADDSCWR, 
  CRIS_INSN_ADDU_B_R, 
  CRIS_INSN_ADDU_W_R, 
  CRIS_INSN_ADDU_M_B_M, 
  CRIS_INSN_ADDU_M_W_M, 
  CRIS_INSN_ADDUCBR, 
  CRIS_INSN_ADDUCWR, 
  CRIS_INSN_SUB_B_R, 
  CRIS_INSN_SUB_W_R, 
  CRIS_INSN_SUB_D_R, 
  CRIS_INSN_SUB_M_B_M, 
  CRIS_INSN_SUB_M_W_M, 
  CRIS_INSN_SUB_M_D_M, 
  CRIS_INSN_SUBCBR, 
  CRIS_INSN_SUBCWR, 
  CRIS_INSN_SUBCDR, 
  CRIS_INSN_SUBS_B_R, 
  CRIS_INSN_SUBS_W_R, 
  CRIS_INSN_SUBS_M_B_M, 
  CRIS_INSN_SUBS_M_W_M, 
  CRIS_INSN_SUBSCBR, 
  CRIS_INSN_SUBSCWR, 
  CRIS_INSN_SUBU_B_R, 
  CRIS_INSN_SUBU_W_R, 
  CRIS_INSN_SUBU_M_B_M, 
  CRIS_INSN_SUBU_M_W_M, 
  CRIS_INSN_SUBUCBR, 
  CRIS_INSN_SUBUCWR, 
  CRIS_INSN_ADDC_R, 
  CRIS_INSN_ADDC_M, 
  CRIS_INSN_ADDC_C, 
  CRIS_INSN_LAPC_D, 
  CRIS_INSN_LAPCQ, 
  CRIS_INSN_ADDI_B_R, 
  CRIS_INSN_ADDI_W_R, 
  CRIS_INSN_ADDI_D_R, 
  CRIS_INSN_NEG_B_R, 
  CRIS_INSN_NEG_W_R, 
  CRIS_INSN_NEG_D_R, 
  CRIS_INSN_TEST_M_B_M, 
  CRIS_INSN_TEST_M_W_M, 
  CRIS_INSN_TEST_M_D_M, 
  CRIS_INSN_MOVE_R_M_B_M, 
  CRIS_INSN_MOVE_R_M_W_M, 
  CRIS_INSN_MOVE_R_M_D_M, 
  CRIS_INSN_MULS_B, 
  CRIS_INSN_MULS_W, 
  CRIS_INSN_MULS_D, 
  CRIS_INSN_MULU_B, 
  CRIS_INSN_MULU_W, 
  CRIS_INSN_MULU_D, 
  CRIS_INSN_MCP, 
  CRIS_INSN_DSTEP, 
  CRIS_INSN_ABS, 
  CRIS_INSN_AND_B_R, 
  CRIS_INSN_AND_W_R, 
  CRIS_INSN_AND_D_R, 
  CRIS_INSN_AND_M_B_M, 
  CRIS_INSN_AND_M_W_M, 
  CRIS_INSN_AND_M_D_M, 
  CRIS_INSN_ANDCBR, 
  CRIS_INSN_ANDCWR, 
  CRIS_INSN_ANDCDR, 
  CRIS_INSN_ANDQ, 
  CRIS_INSN_ORR_B_R, 
  CRIS_INSN_ORR_W_R, 
  CRIS_INSN_ORR_D_R, 
  CRIS_INSN_OR_M_B_M, 
  CRIS_INSN_OR_M_W_M, 
  CRIS_INSN_OR_M_D_M, 
  CRIS_INSN_ORCBR, 
  CRIS_INSN_ORCWR, 
  CRIS_INSN_ORCDR, 
  CRIS_INSN_ORQ, 
  CRIS_INSN_XOR, 
  CRIS_INSN_SWAP, 
  CRIS_INSN_ASRR_B_R, 
  CRIS_INSN_ASRR_W_R, 
  CRIS_INSN_ASRR_D_R, 
  CRIS_INSN_ASRQ, 
  CRIS_INSN_LSRR_B_R, 
  CRIS_INSN_LSRR_W_R, 
  CRIS_INSN_LSRR_D_R, 
  CRIS_INSN_LSRQ, 
  CRIS_INSN_LSLR_B_R, 
  CRIS_INSN_LSLR_W_R, 
  CRIS_INSN_LSLR_D_R, 
  CRIS_INSN_LSLQ, 
  CRIS_INSN_BTST, 
  CRIS_INSN_BTSTQ, 
  CRIS_INSN_SETF, 
  CRIS_INSN_CLEARF, 
  CRIS_INSN_RFE, 
  CRIS_INSN_SFE, 
  CRIS_INSN_RFG, 
  CRIS_INSN_RFN, 
  CRIS_INSN_HALT, 
  CRIS_INSN_BCC_B, 
  CRIS_INSN_BA_B, 
  CRIS_INSN_BCC_W, 
  CRIS_INSN_BA_W, 
  CRIS_INSN_JAS_R, 
  CRIS_INSN_JAS_C, 
  CRIS_INSN_JUMP_P, 
  CRIS_INSN_BAS_C, 
  CRIS_INSN_JASC_R, 
  CRIS_INSN_JASC_C, 
  CRIS_INSN_BASC_C, 
  CRIS_INSN_BREAK, 
  CRIS_INSN_BOUND_R_B_R, 
  CRIS_INSN_BOUND_R_W_R, 
  CRIS_INSN_BOUND_R_D_R, 
  CRIS_INSN_BOUND_CB, 
  CRIS_INSN_BOUND_CW, 
  CRIS_INSN_BOUND_CD, 
  CRIS_INSN_SCC, 
  CRIS_INSN_LZ, 
  CRIS_INSN_ADDOQ, 
  CRIS_INSN_ADDO_M_B_M, 
  CRIS_INSN_ADDO_M_W_M, 
  CRIS_INSN_ADDO_M_D_M, 
  CRIS_INSN_ADDO_CB, 
  CRIS_INSN_ADDO_CW, 
  CRIS_INSN_ADDO_CD, 
  CRIS_INSN_ADDI_ACR_B_R, 
  CRIS_INSN_ADDI_ACR_W_R, 
  CRIS_INSN_ADDI_ACR_D_R, 
  CRIS_INSN_FIDXI, 
  CRIS_INSN_FTAGI, 
  CRIS_INSN_FIDXD, 
  CRIS_INSN_FTAGD, 
} CRIS_INSN_TYPE;
#endif