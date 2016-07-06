/* CRIS IDP analysis

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

#include "cris.hpp"

 /* The size of an "int" needed to hold an instruction word.
   This is usually 32 bits, but some architectures needs 64 bits.  */
typedef CGEN_INSN_INT CGEN_INSN_WORD;
  
/* Split the instruction into chunks. stolen from binutils */

static inline uint64_t get_bits (const void *p, int bits, int big_p)
{
  const unsigned char *addr = (const unsigned char *) p;
  uint64_t data;
  int i;
  int bytes;

  if (bits % 8 != 0)
    abort ();

  data = 0;
  bytes = bits / 8;
  for (i = 0; i < bytes; i++)
    {
      int addr_index = big_p ? i : bytes - i - 1;

      data = (data << 8) | addr[addr_index];
    }

  return data;
}

static inline CGEN_INSN_WORD get_insn_value(unsigned char *buf, int length)
{
  int big_p = 0;
  int insn_chunk_bitsize = 0;
  CGEN_INSN_WORD value = 0;

  if (insn_chunk_bitsize != 0 && insn_chunk_bitsize < length)
    {
      /* We need to divide up the incoming value into insn_chunk_bitsize-length
   segments, and endian-convert them, one at a time. */
      int i;

      /* Enforce divisibility. */ 
      if ((length % insn_chunk_bitsize) != 0)
  abort ();

      for (i = 0; i < length; i += insn_chunk_bitsize) /* NB: i == bits */
  {
    int bit_index;
    uint64_t this_value;

    bit_index = i; /* NB: not dependent on endianness; opposite of cgen_put_insn_value! */
    this_value = get_bits (& buf[bit_index / 8], insn_chunk_bitsize, big_p);
    value = (value << insn_chunk_bitsize) | this_value;
  }
    }
  else
    {
      value = get_bits (buf, length, big_p);
    }

  return value;
}

/* Analyze the current instruction.  */

int idaapi ana( void )
{
  /* temporary buffer */
  unsigned char buffer[2];

  /* Result of decoder.  */
  MEP_INSN_TYPE itype;

  CGEN_INSN_WORD insn;
  CGEN_INSN_WORD entire_insn;
  ea_t pc;
  get_data_value(cmd.ea, (uval_t *)buffer, 2);
  insn = get_insn_value(buffer, 16);
  entire_insn = get_insn_value(buffer, 16);
  pc = cmd.ea;
  {

    {
      unsigned int val = (((insn >> 4) & (255 << 0)));
      switch (val)
      {
      case 0 : /* fall through */
      case 1 : /* fall through */
      case 2 : /* fall through */
      case 3 : /* fall through */
      case 4 : /* fall through */
      case 5 : /* fall through */
      case 6 : /* fall through */
      case 7 : /* fall through */
      case 8 : /* fall through */
      case 9 : /* fall through */
      case 10 : /* fall through */
      case 11 : /* fall through */
      case 12 : /* fall through */
      case 13 : /* fall through */
      case 14 : /* fall through */
      case 15 :
        {
          unsigned int val = (((insn >> 12) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 : itype = MEP_INSN_BCC_B; goto extract_sfmt_bcc_b;
          case 14 : itype = MEP_INSN_BA_B; goto extract_sfmt_ba_b;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 16 : /* fall through */
      case 17 : /* fall through */
      case 18 : /* fall through */
      case 19 : /* fall through */
      case 20 : /* fall through */
      case 21 : /* fall through */
      case 22 : /* fall through */
      case 23 : /* fall through */
      case 24 : /* fall through */
      case 25 : /* fall through */
      case 26 : /* fall through */
      case 27 : /* fall through */
      case 28 : /* fall through */
      case 29 : /* fall through */
      case 30 : /* fall through */
      case 31 : itype = MEP_INSN_ADDOQ; goto extract_sfmt_addoq;
      case 32 : /* fall through */
      case 33 : /* fall through */
      case 34 : /* fall through */
      case 35 : itype = MEP_INSN_ADDQ; goto extract_sfmt_addq;
      case 36 : /* fall through */
      case 37 : /* fall through */
      case 38 : /* fall through */
      case 39 : itype = MEP_INSN_MOVEQ; goto extract_sfmt_moveq;
      case 40 : /* fall through */
      case 41 : /* fall through */
      case 42 : /* fall through */
      case 43 : itype = MEP_INSN_SUBQ; goto extract_sfmt_addq;
      case 44 : /* fall through */
      case 45 : /* fall through */
      case 46 : /* fall through */
      case 47 : itype = MEP_INSN_CMPQ; goto extract_sfmt_cmpq;
      case 48 : /* fall through */
      case 49 : /* fall through */
      case 50 : /* fall through */
      case 51 : itype = MEP_INSN_ANDQ; goto extract_sfmt_andq;
      case 52 : /* fall through */
      case 53 : /* fall through */
      case 54 : /* fall through */
      case 55 : itype = MEP_INSN_ORQ; goto extract_sfmt_andq;
      case 56 : /* fall through */
      case 57 : itype = MEP_INSN_BTSTQ; goto extract_sfmt_btstq;
      case 58 : /* fall through */
      case 59 : itype = MEP_INSN_ASRQ; goto extract_sfmt_asrq;
      case 60 : /* fall through */
      case 61 : itype = MEP_INSN_LSLQ; goto extract_sfmt_asrq;
      case 62 : /* fall through */
      case 63 : itype = MEP_INSN_LSRQ; goto extract_sfmt_asrq;
      case 64 : itype = MEP_INSN_ADDU_B_R; goto extract_sfmt_add_d_r;
      case 65 : itype = MEP_INSN_ADDU_W_R; goto extract_sfmt_add_d_r;
      case 66 : itype = MEP_INSN_ADDS_B_R; goto extract_sfmt_add_d_r;
      case 67 : itype = MEP_INSN_ADDS_W_R; goto extract_sfmt_add_d_r;
      case 68 : itype = MEP_INSN_MOVU_B_R; goto extract_sfmt_movs_b_r;
      case 69 : itype = MEP_INSN_MOVU_W_R; goto extract_sfmt_movs_b_r;
      case 70 : itype = MEP_INSN_MOVS_B_R; goto extract_sfmt_movs_b_r;
      case 71 : itype = MEP_INSN_MOVS_W_R; goto extract_sfmt_movs_b_r;
      case 72 : itype = MEP_INSN_SUBU_B_R; goto extract_sfmt_add_d_r;
      case 73 : itype = MEP_INSN_SUBU_W_R; goto extract_sfmt_add_d_r;
      case 74 : itype = MEP_INSN_SUBS_B_R; goto extract_sfmt_add_d_r;
      case 75 : itype = MEP_INSN_SUBS_W_R; goto extract_sfmt_add_d_r;
      case 76 : itype = MEP_INSN_LSLR_B_R; goto extract_sfmt_lsrr_b_r;
      case 77 : itype = MEP_INSN_LSLR_W_R; goto extract_sfmt_lsrr_b_r;
      case 78 : itype = MEP_INSN_LSLR_D_R; goto extract_sfmt_lsrr_d_r;
      case 79 : itype = MEP_INSN_BTST; goto extract_sfmt_btst;
      case 80 : itype = MEP_INSN_ADDI_B_R; goto extract_sfmt_addi_b_r;
      case 81 : itype = MEP_INSN_ADDI_W_R; goto extract_sfmt_addi_b_r;
      case 82 : itype = MEP_INSN_ADDI_D_R; goto extract_sfmt_addi_b_r;
      case 83 : itype = MEP_INSN_SCC; goto extract_sfmt_scc;
      case 84 : itype = MEP_INSN_ADDI_ACR_B_R; goto extract_sfmt_addi_acr_b_r;
      case 85 : itype = MEP_INSN_ADDI_ACR_W_R; goto extract_sfmt_addi_acr_b_r;
      case 86 : itype = MEP_INSN_ADDI_ACR_D_R; goto extract_sfmt_addi_acr_b_r;
      case 87 : itype = MEP_INSN_ADDC_R; goto extract_sfmt_add_d_r;
      case 88 : itype = MEP_INSN_NEG_B_R; goto extract_sfmt_neg_b_r;
      case 89 : itype = MEP_INSN_NEG_W_R; goto extract_sfmt_neg_b_r;
      case 90 : itype = MEP_INSN_NEG_D_R; goto extract_sfmt_neg_d_r;
      case 91 : itype = MEP_INSN_SETF; goto extract_sfmt_setf;
      case 92 : itype = MEP_INSN_BOUND_R_B_R; goto extract_sfmt_dstep;
      case 93 : itype = MEP_INSN_BOUND_R_W_R; goto extract_sfmt_dstep;
      case 94 : itype = MEP_INSN_BOUND_R_D_R; goto extract_sfmt_dstep;
      case 95 : itype = MEP_INSN_CLEARF; goto extract_sfmt_setf;
      case 96 : itype = MEP_INSN_ADD_B_R; goto extract_sfmt_add_b_r;
      case 97 : itype = MEP_INSN_ADD_W_R; goto extract_sfmt_add_b_r;
      case 98 : itype = MEP_INSN_ADD_D_R; goto extract_sfmt_add_d_r;
      case 99 : itype = MEP_INSN_MOVE_R_SPRV32; goto extract_sfmt_move_r_sprv32;
      case 100 : itype = MEP_INSN_MOVE_B_R; goto extract_sfmt_move_b_r;
      case 101 : itype = MEP_INSN_MOVE_W_R; goto extract_sfmt_move_b_r;
      case 102 : itype = MEP_INSN_MOVE_D_R; goto extract_sfmt_move_d_r;
      case 103 : itype = MEP_INSN_MOVE_SPR_RV32; goto extract_sfmt_move_spr_rv32;
      case 104 : itype = MEP_INSN_SUB_B_R; goto extract_sfmt_add_b_r;
      case 105 : itype = MEP_INSN_SUB_W_R; goto extract_sfmt_add_b_r;
      case 106 : itype = MEP_INSN_SUB_D_R; goto extract_sfmt_add_d_r;
      case 107 : itype = MEP_INSN_ABS; goto extract_sfmt_movs_b_r;
      case 108 : itype = MEP_INSN_CMP_R_B_R; goto extract_sfmt_cmp_r_b_r;
      case 109 : itype = MEP_INSN_CMP_R_W_R; goto extract_sfmt_cmp_r_b_r;
      case 110 : itype = MEP_INSN_CMP_R_D_R; goto extract_sfmt_cmp_r_b_r;
      case 111 : itype = MEP_INSN_DSTEP; goto extract_sfmt_dstep;
      case 112 : itype = MEP_INSN_AND_B_R; goto extract_sfmt_and_b_r;
      case 113 : itype = MEP_INSN_AND_W_R; goto extract_sfmt_and_b_r;
      case 114 : itype = MEP_INSN_AND_D_R; goto extract_sfmt_and_d_r;
      case 115 : itype = MEP_INSN_LZ; goto extract_sfmt_movs_b_r;
      case 116 : itype = MEP_INSN_ORR_B_R; goto extract_sfmt_and_b_r;
      case 117 : itype = MEP_INSN_ORR_W_R; goto extract_sfmt_and_b_r;
      case 118 : itype = MEP_INSN_ORR_D_R; goto extract_sfmt_and_d_r;
      case 119 : itype = MEP_INSN_SWAP; goto extract_sfmt_swap;
      case 120 : itype = MEP_INSN_ASRR_B_R; goto extract_sfmt_and_b_r;
      case 121 : itype = MEP_INSN_ASRR_W_R; goto extract_sfmt_and_b_r;
      case 122 : itype = MEP_INSN_ASRR_D_R; goto extract_sfmt_and_d_r;
      case 123 : itype = MEP_INSN_XOR; goto extract_sfmt_dstep;
      case 124 : itype = MEP_INSN_LSRR_B_R; goto extract_sfmt_lsrr_b_r;
      case 125 : itype = MEP_INSN_LSRR_W_R; goto extract_sfmt_lsrr_b_r;
      case 126 : itype = MEP_INSN_LSRR_D_R; goto extract_sfmt_lsrr_d_r;
      case 127 : itype = MEP_INSN_MCP; goto extract_sfmt_mcp;
      case 128 : itype = MEP_INSN_ADDU_M_B_M; goto extract_sfmt_adds_m_b_m;
      case 129 : itype = MEP_INSN_ADDU_M_W_M; goto extract_sfmt_adds_m_w_m;
      case 130 : itype = MEP_INSN_ADDS_M_B_M; goto extract_sfmt_adds_m_b_m;
      case 131 : itype = MEP_INSN_ADDS_M_W_M; goto extract_sfmt_adds_m_w_m;
      case 132 : itype = MEP_INSN_MOVU_M_B_M; goto extract_sfmt_movs_m_b_m;
      case 133 : itype = MEP_INSN_MOVU_M_W_M; goto extract_sfmt_movs_m_w_m;
      case 134 : itype = MEP_INSN_MOVS_M_B_M; goto extract_sfmt_movs_m_b_m;
      case 135 : itype = MEP_INSN_MOVS_M_W_M; goto extract_sfmt_movs_m_w_m;
      case 136 : itype = MEP_INSN_SUBU_M_B_M; goto extract_sfmt_adds_m_b_m;
      case 137 : itype = MEP_INSN_SUBU_M_W_M; goto extract_sfmt_adds_m_w_m;
      case 138 : itype = MEP_INSN_SUBS_M_B_M; goto extract_sfmt_adds_m_b_m;
      case 139 : itype = MEP_INSN_SUBS_M_W_M; goto extract_sfmt_adds_m_w_m;
      case 140 : itype = MEP_INSN_CMPU_M_B_M; goto extract_sfmt_cmp_m_b_m;
      case 141 : itype = MEP_INSN_CMPU_M_W_M; goto extract_sfmt_cmp_m_w_m;
      case 142 : itype = MEP_INSN_CMPS_M_B_M; goto extract_sfmt_cmp_m_b_m;
      case 143 : itype = MEP_INSN_CMPS_M_W_M; goto extract_sfmt_cmp_m_w_m;
      case 144 : itype = MEP_INSN_MULU_B; goto extract_sfmt_muls_b;
      case 145 : itype = MEP_INSN_MULU_W; goto extract_sfmt_muls_b;
      case 146 : itype = MEP_INSN_MULU_D; goto extract_sfmt_muls_b;
      case 147 :
        {
          unsigned int val = (((insn >> 12) & (15 << 0)));
          switch (val)
          {
          case 2 :
            if ((base_insn & 0xffff) == 0x2930)
              { itype = MEP_INSN_RFE; goto extract_sfmt_rfe; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((base_insn & 0xffff) == 0x3930)
              { itype = MEP_INSN_SFE; goto extract_sfmt_sfe; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((base_insn & 0xffff) == 0x4930)
              { itype = MEP_INSN_RFG; goto extract_sfmt_rfg; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((base_insn & 0xffff) == 0x5930)
              { itype = MEP_INSN_RFN; goto extract_sfmt_rfn; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 14 : itype = MEP_INSN_BREAK; goto extract_sfmt_break;
          case 15 :
            if ((base_insn & 0xffff) == 0xf930)
              { itype = MEP_INSN_HALT; goto extract_sfmt_halt; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 148 : itype = MEP_INSN_ADDO_M_B_M; goto extract_sfmt_addo_m_b_m;
      case 149 : itype = MEP_INSN_ADDO_M_W_M; goto extract_sfmt_addo_m_w_m;
      case 150 : itype = MEP_INSN_ADDO_M_D_M; goto extract_sfmt_addo_m_d_m;
      case 151 : itype = MEP_INSN_LAPCQ; goto extract_sfmt_lapcq;
      case 154 : itype = MEP_INSN_ADDC_M; goto extract_sfmt_addc_m;
      case 155 : itype = MEP_INSN_JAS_R; goto extract_sfmt_jas_r;
      case 159 :
        if ((base_insn & 0xfff) == 0x9f0)
          { itype = MEP_INSN_JUMP_P; goto extract_sfmt_jump_p; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 160 : itype = MEP_INSN_ADD_M_B_M; goto extract_sfmt_add_m_b_m;
      case 161 : itype = MEP_INSN_ADD_M_W_M; goto extract_sfmt_add_m_w_m;
      case 162 : itype = MEP_INSN_ADD_M_D_M; goto extract_sfmt_add_m_d_m;
      case 163 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
      case 164 : itype = MEP_INSN_MOVE_M_B_M; goto extract_sfmt_move_m_b_m;
      case 165 : itype = MEP_INSN_MOVE_M_W_M; goto extract_sfmt_move_m_w_m;
      case 166 : itype = MEP_INSN_MOVE_M_D_M; goto extract_sfmt_move_m_d_m;
      case 167 : /* fall through */
      case 231 : itype = MEP_INSN_MOVE_SPR_MV32; goto extract_sfmt_move_spr_mv32;
      case 168 : itype = MEP_INSN_SUB_M_B_M; goto extract_sfmt_add_m_b_m;
      case 169 : itype = MEP_INSN_SUB_M_W_M; goto extract_sfmt_add_m_w_m;
      case 170 : itype = MEP_INSN_SUB_M_D_M; goto extract_sfmt_add_m_d_m;
      case 171 :
        {
          unsigned int val = (((insn >> 12) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((base_insn & 0xfff0) == 0xab0)
              { itype = MEP_INSN_FIDXD; goto extract_sfmt_fidxi; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((base_insn & 0xfff0) == 0x1ab0)
              { itype = MEP_INSN_FTAGD; goto extract_sfmt_fidxi; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 172 : itype = MEP_INSN_CMP_M_B_M; goto extract_sfmt_cmp_m_b_m;
      case 173 : itype = MEP_INSN_CMP_M_W_M; goto extract_sfmt_cmp_m_w_m;
      case 174 : itype = MEP_INSN_CMP_M_D_M; goto extract_sfmt_cmp_m_d_m;
      case 176 : itype = MEP_INSN_AND_M_B_M; goto extract_sfmt_and_m_b_m;
      case 177 : itype = MEP_INSN_AND_M_W_M; goto extract_sfmt_and_m_w_m;
      case 178 : itype = MEP_INSN_AND_M_D_M; goto extract_sfmt_and_m_d_m;
      case 179 : itype = MEP_INSN_JASC_R; goto extract_sfmt_jasc_r;
      case 180 : itype = MEP_INSN_OR_M_B_M; goto extract_sfmt_and_m_b_m;
      case 181 : itype = MEP_INSN_OR_M_W_M; goto extract_sfmt_and_m_w_m;
      case 182 : itype = MEP_INSN_OR_M_D_M; goto extract_sfmt_and_m_d_m;
      case 183 : itype = MEP_INSN_MOVE_R_SS; goto extract_sfmt_move_r_ss;
      case 184 : /* fall through */
      case 248 :
        if ((base_insn & 0xfbf0) == 0xb80)
          { itype = MEP_INSN_TEST_M_B_M; goto extract_sfmt_test_m_b_m; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 185 : /* fall through */
      case 249 :
        if ((base_insn & 0xfbf0) == 0xb90)
          { itype = MEP_INSN_TEST_M_W_M; goto extract_sfmt_test_m_w_m; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 186 : /* fall through */
      case 250 :
        if ((base_insn & 0xfbf0) == 0xba0)
          { itype = MEP_INSN_TEST_M_D_M; goto extract_sfmt_test_m_d_m; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 187 : /* fall through */
      case 251 : itype = MEP_INSN_MOVEM_M_R_V32; goto extract_sfmt_movem_m_r_v32;
      case 188 : /* fall through */
      case 252 : itype = MEP_INSN_MOVE_R_M_B_M; goto extract_sfmt_move_r_m_b_m;
      case 189 : /* fall through */
      case 253 : itype = MEP_INSN_MOVE_R_M_W_M; goto extract_sfmt_move_r_m_w_m;
      case 190 : /* fall through */
      case 254 : itype = MEP_INSN_MOVE_R_M_D_M; goto extract_sfmt_move_r_m_d_m;
      case 191 : /* fall through */
      case 255 : itype = MEP_INSN_MOVEM_R_M_V32; goto extract_sfmt_movem_r_m_v32;
      case 192 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDU_M_B_M; goto extract_sfmt_adds_m_b_m;
          case 15 : itype = MEP_INSN_ADDUCBR; goto extract_sfmt_addscbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 193 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDU_M_W_M; goto extract_sfmt_adds_m_w_m;
          case 15 : itype = MEP_INSN_ADDUCWR; goto extract_sfmt_addscwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 194 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDS_M_B_M; goto extract_sfmt_adds_m_b_m;
          case 15 : itype = MEP_INSN_ADDSCBR; goto extract_sfmt_addscbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 195 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDS_M_W_M; goto extract_sfmt_adds_m_w_m;
          case 15 : itype = MEP_INSN_ADDSCWR; goto extract_sfmt_addscwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 196 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_MOVU_M_B_M; goto extract_sfmt_movs_m_b_m;
          case 15 : itype = MEP_INSN_MOVUCBR; goto extract_sfmt_movucbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 197 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_MOVU_M_W_M; goto extract_sfmt_movs_m_w_m;
          case 15 : itype = MEP_INSN_MOVUCWR; goto extract_sfmt_movucwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 198 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_MOVS_M_B_M; goto extract_sfmt_movs_m_b_m;
          case 15 : itype = MEP_INSN_MOVSCBR; goto extract_sfmt_movscbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 199 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_MOVS_M_W_M; goto extract_sfmt_movs_m_w_m;
          case 15 : itype = MEP_INSN_MOVSCWR; goto extract_sfmt_movscwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 200 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_SUBU_M_B_M; goto extract_sfmt_adds_m_b_m;
          case 15 : itype = MEP_INSN_SUBUCBR; goto extract_sfmt_addscbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 201 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_SUBU_M_W_M; goto extract_sfmt_adds_m_w_m;
          case 15 : itype = MEP_INSN_SUBUCWR; goto extract_sfmt_addscwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 202 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_SUBS_M_B_M; goto extract_sfmt_adds_m_b_m;
          case 15 : itype = MEP_INSN_SUBSCBR; goto extract_sfmt_addscbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 203 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_SUBS_M_W_M; goto extract_sfmt_adds_m_w_m;
          case 15 : itype = MEP_INSN_SUBSCWR; goto extract_sfmt_addscwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 204 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_CMPU_M_B_M; goto extract_sfmt_cmp_m_b_m;
          case 15 : itype = MEP_INSN_CMPUCBR; goto extract_sfmt_cmpucbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 205 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_CMPU_M_W_M; goto extract_sfmt_cmp_m_w_m;
          case 15 : itype = MEP_INSN_CMPUCWR; goto extract_sfmt_cmpucwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 206 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_CMPS_M_B_M; goto extract_sfmt_cmp_m_b_m;
          case 15 : itype = MEP_INSN_CMPSCBR; goto extract_sfmt_cmpcbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 207 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_CMPS_M_W_M; goto extract_sfmt_cmp_m_w_m;
          case 15 : itype = MEP_INSN_CMPSCWR; goto extract_sfmt_cmpcwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 208 : itype = MEP_INSN_MULS_B; goto extract_sfmt_muls_b;
      case 209 : itype = MEP_INSN_MULS_W; goto extract_sfmt_muls_b;
      case 210 : itype = MEP_INSN_MULS_D; goto extract_sfmt_muls_b;
      case 211 :
        {
          unsigned int val = (((insn >> 12) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((base_insn & 0xfff0) == 0xd30)
              { itype = MEP_INSN_FIDXI; goto extract_sfmt_fidxi; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((base_insn & 0xfff0) == 0x1d30)
              { itype = MEP_INSN_FTAGI; goto extract_sfmt_fidxi; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 212 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDO_M_B_M; goto extract_sfmt_addo_m_b_m;
          case 15 : itype = MEP_INSN_ADDO_CB; goto extract_sfmt_addo_cb;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 213 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDO_M_W_M; goto extract_sfmt_addo_m_w_m;
          case 15 : itype = MEP_INSN_ADDO_CW; goto extract_sfmt_addo_cw;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 214 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDO_M_D_M; goto extract_sfmt_addo_m_d_m;
          case 15 : itype = MEP_INSN_ADDO_CD; goto extract_sfmt_addo_cd;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 215 :
        if ((base_insn & 0xfff) == 0xd7f)
          { itype = MEP_INSN_LAPC_D; goto extract_sfmt_lapc_d; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 218 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADDC_M; goto extract_sfmt_addc_m;
          case 15 : itype = MEP_INSN_ADDC_C; goto extract_sfmt_addcdr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 219 :
        if ((base_insn & 0xfff) == 0xdbf)
          { itype = MEP_INSN_JAS_C; goto extract_sfmt_jas_c; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 220 :
        if ((base_insn & 0xfff) == 0xdcf)
          { itype = MEP_INSN_BOUND_CB; goto extract_sfmt_bound_cb; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 221 :
        if ((base_insn & 0xfff) == 0xddf)
          { itype = MEP_INSN_BOUND_CW; goto extract_sfmt_bound_cw; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 222 :
        if ((base_insn & 0xfff) == 0xdef)
          { itype = MEP_INSN_BOUND_CD; goto extract_sfmt_bound_cd; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 223 :
        {
          unsigned int val = (((insn >> 12) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((base_insn & 0xfff) == 0xdff)
              { itype = MEP_INSN_BCC_W; goto extract_sfmt_bcc_w; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          case 14 :
            if ((base_insn & 0xffff) == 0xedff)
              { itype = MEP_INSN_BA_W; goto extract_sfmt_ba_w; }
            itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 224 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADD_M_B_M; goto extract_sfmt_add_m_b_m;
          case 15 : itype = MEP_INSN_ADDCBR; goto extract_sfmt_addcbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 225 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADD_M_W_M; goto extract_sfmt_add_m_w_m;
          case 15 : itype = MEP_INSN_ADDCWR; goto extract_sfmt_addcwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 226 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_ADD_M_D_M; goto extract_sfmt_add_m_d_m;
          case 15 : itype = MEP_INSN_ADDCDR; goto extract_sfmt_addcdr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 227 :
        {
          unsigned int val = (((insn >> 12) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 4 : /* fall through */
          case 8 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
          case 2 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P2; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 3 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P3; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 5 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P5; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 6 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P6; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 7 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P7; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 9 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P9; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 10 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P10; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 11 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P11; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 12 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P12; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 13 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P13; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 14 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P14; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 15 :
            {
              unsigned int val = (((insn >> 0) & (15 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 : itype = MEP_INSN_MOVE_M_SPRV32; goto extract_sfmt_move_m_sprv32;
              case 15 : itype = MEP_INSN_MOVE_C_SPRV32_P15; goto extract_sfmt_move_c_sprv32_p2;
              default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 228 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_MOVE_M_B_M; goto extract_sfmt_move_m_b_m;
          case 15 : itype = MEP_INSN_MOVECBR; goto extract_sfmt_movecbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 229 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_MOVE_M_W_M; goto extract_sfmt_move_m_w_m;
          case 15 : itype = MEP_INSN_MOVECWR; goto extract_sfmt_movecwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 230 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_MOVE_M_D_M; goto extract_sfmt_move_m_d_m;
          case 15 : itype = MEP_INSN_MOVECDR; goto extract_sfmt_movecdr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 232 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_SUB_M_B_M; goto extract_sfmt_add_m_b_m;
          case 15 : itype = MEP_INSN_SUBCBR; goto extract_sfmt_addcbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 233 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_SUB_M_W_M; goto extract_sfmt_add_m_w_m;
          case 15 : itype = MEP_INSN_SUBCWR; goto extract_sfmt_addcwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 234 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_SUB_M_D_M; goto extract_sfmt_add_m_d_m;
          case 15 : itype = MEP_INSN_SUBCDR; goto extract_sfmt_addcdr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 235 :
        if ((base_insn & 0xfff) == 0xebf)
          { itype = MEP_INSN_BAS_C; goto extract_sfmt_bas_c; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 236 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_CMP_M_B_M; goto extract_sfmt_cmp_m_b_m;
          case 15 : itype = MEP_INSN_CMPCBR; goto extract_sfmt_cmpcbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 237 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_CMP_M_W_M; goto extract_sfmt_cmp_m_w_m;
          case 15 : itype = MEP_INSN_CMPCWR; goto extract_sfmt_cmpcwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 238 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_CMP_M_D_M; goto extract_sfmt_cmp_m_d_m;
          case 15 : itype = MEP_INSN_CMPCDR; goto extract_sfmt_cmpcdr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 239 :
        if ((base_insn & 0xfff) == 0xeff)
          { itype = MEP_INSN_BASC_C; goto extract_sfmt_bas_c; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 240 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_AND_M_B_M; goto extract_sfmt_and_m_b_m;
          case 15 : itype = MEP_INSN_ANDCBR; goto extract_sfmt_andcbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 241 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_AND_M_W_M; goto extract_sfmt_and_m_w_m;
          case 15 : itype = MEP_INSN_ANDCWR; goto extract_sfmt_andcwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 242 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_AND_M_D_M; goto extract_sfmt_and_m_d_m;
          case 15 : itype = MEP_INSN_ANDCDR; goto extract_sfmt_andcdr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 243 :
        if ((base_insn & 0xfff) == 0xf3f)
          { itype = MEP_INSN_JASC_C; goto extract_sfmt_jas_c; }
        itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      case 244 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_OR_M_B_M; goto extract_sfmt_and_m_b_m;
          case 15 : itype = MEP_INSN_ORCBR; goto extract_sfmt_andcbr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 245 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_OR_M_W_M; goto extract_sfmt_and_m_w_m;
          case 15 : itype = MEP_INSN_ORCWR; goto extract_sfmt_andcwr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 246 :
        {
          unsigned int val = (((insn >> 0) & (15 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : itype = MEP_INSN_OR_M_D_M; goto extract_sfmt_and_m_d_m;
          case 15 : itype = MEP_INSN_ORCDR; goto extract_sfmt_andcdr;
          default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 247 : itype = MEP_INSN_MOVE_SS_R; goto extract_sfmt_move_ss_r;
      default : itype = MEP_INSN_X_INVALID; goto extract_sfmt_empty;
      }
    }
  }

  /* The instruction has been decoded, now extract the fields.  */

