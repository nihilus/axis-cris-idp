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

#include "cris.hpp"

instruc_t Instructions[] = {
  { "", 0 }, // unknown
  { "--invalid--",    0 }, //--invalid--
  { "move.b",    CF_USE1 }, //move.b move.m ${Rs},${Rd}
  { "move.w",    CF_USE1 }, //move.w move.m ${Rs},${Rd}
  { "move.d",    CF_USE1 }, //move.d move.m ${Rs},${Rd}
  { "moveq",    CF_USE1|CF_CHG2 }, //moveq $i,$Rd
  { "movs.b",    CF_USE1|CF_CHG2 }, //movs.b movs.m ${Rs},${Rd}
  { "movs.w",    CF_USE1|CF_CHG2 }, //movs.w movs.m ${Rs},${Rd}
  { "movu.b",    CF_USE1|CF_CHG2 }, //movu.b movu.m ${Rs},${Rd}
  { "movu.w",    CF_USE1|CF_CHG2 }, //movu.w movu.m ${Rs},${Rd}
  { "move.b",    CF_USE1 }, //move.b ${sconst8},${Rd}
  { "move.w",    CF_USE1 }, //move.w ${sconst16},${Rd}
  { "move.d",    CF_USE1|CF_CHG2 }, //move.d ${const32},${Rd}
  { "movs.b",    CF_USE1|CF_CHG2 }, //movs.b ${sconst8},${Rd}
  { "movs.w",    CF_USE1|CF_CHG2 }, //movs.w ${sconst16},${Rd}
  { "movu.b",    CF_USE1|CF_CHG2 }, //movu.b ${uconst8},${Rd}
  { "movu.w",    CF_USE1|CF_CHG2 }, //movu.w ${uconst16},${Rd}
  { "addq",    CF_USE2|CF_USE1 }, //addq $j,$Rd
  { "subq",    CF_USE2|CF_USE1 }, //subq $j,$Rd
  { "cmp-r.b",    CF_USE2|CF_USE1 }, //cmp-r.b $Rs,$Rd
  { "cmp-r.w",    CF_USE2|CF_USE1 }, //cmp-r.w $Rs,$Rd
  { "cmp-r.d",    CF_USE2|CF_USE1 }, //cmp-r.d $Rs,$Rd
  { "cmp-m.b",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //cmp-m.b [${Rs}${inc}],${Rd}
  { "cmp-m.w",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //cmp-m.w [${Rs}${inc}],${Rd}
  { "cmp-m.d",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //cmp-m.d [${Rs}${inc}],${Rd}
  { "cmp.b",    CF_USE2|CF_USE1 }, //cmp.b $sconst8,$Rd
  { "cmp.w",    CF_USE2|CF_USE1 }, //cmp.w $sconst16,$Rd
  { "cmp.d",    CF_USE2|CF_USE1 }, //cmp.d $const32,$Rd
  { "cmpq",    CF_USE2|CF_USE1 }, //cmpq $i,$Rd
  { "cmps-m.b",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //cmps-m.b [${Rs}${inc}],$Rd
  { "cmps-m.w",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //cmps-m.w [${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "cmpu-m.b",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //cmpu-m.b [${Rs}${inc}],$Rd
  { "cmpu-m.w",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //cmpu-m.w [${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "move-m.b",    CF_USE1|CF_USE2|CF_CHG1 }, //move-m.b [${Rs}${inc}],${Rd}
  { "move-m.w",    CF_USE1|CF_USE2|CF_CHG1 }, //move-m.w [${Rs}${inc}],${Rd}
  { "move-m.d",    CF_USE1|CF_USE2|CF_CHG1 }, //move-m.d [${Rs}${inc}],${Rd}
  { "movs-m.b",    CF_USE1|CF_USE2|CF_CHG1|CF_CHG3 }, //movs-m.b [${Rs}${inc}],${Rd}
  { "movs-m.w",    CF_USE1|CF_USE2|CF_CHG1|CF_CHG3 }, //movs-m.w [${Rs}${inc}],${Rd}
  { "movu-m.b",    CF_USE1|CF_USE2|CF_CHG1|CF_CHG3 }, //movu-m.b [${Rs}${inc}],${Rd}
  { "movu-m.w",    CF_USE1|CF_USE2|CF_CHG1|CF_CHG3 }, //movu-m.w [${Rs}${inc}],${Rd}
  { "move",    CF_USE1|CF_CHG2 }, //move ${Rs},${Pd}
  { "move",    CF_USE1 }, //move ${Ps},${Rd-sfield}
  { "move",    CF_USE2|CF_USE1|CF_CHG3|CF_CHG1 }, //move [${Rs}${inc}],${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    CF_USE1 }, //move ${const32},${Pd}
  { "move",    |CF_USE1|CF_USE2| }, //move ${Ps},[${Rd-sfield}${inc}]
  { "move",    CF_USE1| }, //move ${Ss},${Rd-sfield}
  { "move",    CF_USE1|CF_CHG2 }, //move ${Rs},${Sd}
  { "movem",    CF_USE1||| }, //movem ${Rs-dfield},[${Rd-sfield}${inc}]
  { "movem",    CF_USE2|CF_USE1|CF_USE3|CF_CHG1 }, //movem [${Rs}${inc}],${Rd}
  { "add.b",    CF_USE2|CF_USE1 }, //add.b $Rs,$Rd
  { "add.w",    CF_USE2|CF_USE1 }, //add.w $Rs,$Rd
  { "add.d",    CF_USE2|CF_USE1 }, //add.d $Rs,$Rd
  { "add-m.b",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //add-m.b [${Rs}${inc}],${Rd}
  { "add-m.w",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //add-m.w [${Rs}${inc}],${Rd}
  { "add-m.d",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //add-m.d [${Rs}${inc}],${Rd}
  { "add.b",    CF_USE2|CF_USE1 }, //add.b ${sconst8}],${Rd}
  { "add.w",    CF_USE2|CF_USE1 }, //add.w ${sconst16}],${Rd}
  { "add.d",    CF_USE2|CF_USE1 }, //add.d ${const32}],${Rd}
  { "adds.b",    CF_USE2|CF_USE1 }, //adds.b $Rs,$Rd
  { "adds.w",    CF_USE2|CF_USE1 }, //adds.w $Rs,$Rd
  { "adds-m.b",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //adds-m.b [${Rs}${inc}],$Rd
  { "adds-m.w",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //adds-m.w [${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "addu.b",    CF_USE2|CF_USE1 }, //addu.b $Rs,$Rd
  { "addu.w",    CF_USE2|CF_USE1 }, //addu.w $Rs,$Rd
  { "addu-m.b",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //addu-m.b [${Rs}${inc}],$Rd
  { "addu-m.w",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //addu-m.w [${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "sub.b",    CF_USE2|CF_USE1 }, //sub.b $Rs,$Rd
  { "sub.w",    CF_USE2|CF_USE1 }, //sub.w $Rs,$Rd
  { "sub.d",    CF_USE2|CF_USE1 }, //sub.d $Rs,$Rd
  { "sub-m.b",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //sub-m.b [${Rs}${inc}],${Rd}
  { "sub-m.w",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //sub-m.w [${Rs}${inc}],${Rd}
  { "sub-m.d",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //sub-m.d [${Rs}${inc}],${Rd}
  { "sub.b",    CF_USE2|CF_USE1 }, //sub.b ${sconst8}],${Rd}
  { "sub.w",    CF_USE2|CF_USE1 }, //sub.w ${sconst16}],${Rd}
  { "sub.d",    CF_USE2|CF_USE1 }, //sub.d ${const32}],${Rd}
  { "subs.b",    CF_USE2|CF_USE1 }, //subs.b $Rs,$Rd
  { "subs.w",    CF_USE2|CF_USE1 }, //subs.w $Rs,$Rd
  { "subs-m.b",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //subs-m.b [${Rs}${inc}],$Rd
  { "subs-m.w",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //subs-m.w [${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "subu.b",    CF_USE2|CF_USE1 }, //subu.b $Rs,$Rd
  { "subu.w",    CF_USE2|CF_USE1 }, //subu.w $Rs,$Rd
  { "subu-m.b",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //subu-m.b [${Rs}${inc}],$Rd
  { "subu-m.w",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //subu-m.w [${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "[",    CF_USE3| }, //[${Rs}${inc}],$Rd
  { "addc",    CF_USE2|CF_USE1 }, //addc $Rs,$Rd
  { "addc",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //addc [${Rs}${inc}],${Rd}
  { "addc",    CF_USE2|CF_USE1 }, //addc ${const32},${Rd}
  { "lapc.d",    CF_USE1|CF_CHG2 }, //lapc.d ${const32-pcrel},${Rd}
  { "lapcq",    CF_USE1|CF_CHG2 }, //lapcq ${qo},${Rd}
  { "addi.b",    || }, //addi.b ${Rs-dfield}.m,${Rd-sfield}
  { "addi.w",    || }, //addi.w ${Rs-dfield}.m,${Rd-sfield}
  { "addi.d",    || }, //addi.d ${Rs-dfield}.m,${Rd-sfield}
  { "neg.b",    CF_USE1 }, //neg.b $Rs,$Rd
  { "neg.w",    CF_USE1 }, //neg.w $Rs,$Rd
  { "neg.d",    CF_USE1 }, //neg.d $Rs,$Rd
  { "test-m.b",    CF_USE1|CF_USE2|CF_CHG1 }, //test-m.b [${Rs}${inc}]
  { "test-m.w",    CF_USE1|CF_USE2|CF_CHG1 }, //test-m.w [${Rs}${inc}]
  { "test-m.d",    CF_USE1|CF_USE2|CF_CHG1 }, //test-m.d [${Rs}${inc}]
  { "move-r-m.b",    ||CF_USE1| }, //move-r-m.b ${Rs-dfield},[${Rd-sfield}${inc}]
  { "move-r-m.w",    ||CF_USE1| }, //move-r-m.w ${Rs-dfield},[${Rd-sfield}${inc}]
  { "move-r-m.d",    ||CF_USE1| }, //move-r-m.d ${Rs-dfield},[${Rd-sfield}${inc}]
  { "muls.b",    CF_USE2|CF_USE1|CF_CHG2 }, //muls.b $Rs,$Rd
  { "muls.w",    CF_USE2|CF_USE1|CF_CHG2 }, //muls.w $Rs,$Rd
  { "muls.d",    CF_USE2|CF_USE1|CF_CHG2 }, //muls.d $Rs,$Rd
  { "mulu.b",    CF_USE2|CF_USE1|CF_CHG2 }, //mulu.b $Rs,$Rd
  { "mulu.w",    CF_USE2|CF_USE1|CF_CHG2 }, //mulu.w $Rs,$Rd
  { "mulu.d",    CF_USE2|CF_USE1|CF_CHG2 }, //mulu.d $Rs,$Rd
  { "mcp",    CF_USE1| }, //mcp $Ps,$Rd
  { "dstep",    CF_USE2|CF_USE1|CF_CHG2 }, //dstep $Rs,$Rd
  { "abs",    CF_USE1|CF_CHG2 }, //abs $Rs,$Rd
  { "and.b",    CF_USE2|CF_USE1 }, //and.b $Rs,$Rd
  { "and.w",    CF_USE2|CF_USE1 }, //and.w $Rs,$Rd
  { "and.d",    CF_USE2|CF_USE1 }, //and.d $Rs,$Rd
  { "and-m.b",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //and-m.b [${Rs}${inc}],${Rd}
  { "and-m.w",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //and-m.w [${Rs}${inc}],${Rd}
  { "and-m.d",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //and-m.d [${Rs}${inc}],${Rd}
  { "and.b",    CF_USE2|CF_USE1 }, //and.b ${sconst8}],${Rd}
  { "and.w",    CF_USE2|CF_USE1 }, //and.w ${sconst16}],${Rd}
  { "and.d",    CF_USE2|CF_USE1 }, //and.d ${const32}],${Rd}
  { "andq",    CF_USE2|CF_USE1 }, //andq $i,$Rd
  { "orr.b",    CF_USE2|CF_USE1 }, //orr.b $Rs,$Rd
  { "orr.w",    CF_USE2|CF_USE1 }, //orr.w $Rs,$Rd
  { "orr.d",    CF_USE2|CF_USE1 }, //orr.d $Rs,$Rd
  { "or-m.b",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //or-m.b [${Rs}${inc}],${Rd}
  { "or-m.w",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //or-m.w [${Rs}${inc}],${Rd}
  { "or-m.d",    CF_USE1|CF_USE3|CF_USE2|CF_CHG1 }, //or-m.d [${Rs}${inc}],${Rd}
  { "or.b",    CF_USE2|CF_USE1 }, //or.b ${sconst8}],${Rd}
  { "or.w",    CF_USE2|CF_USE1 }, //or.w ${sconst16}],${Rd}
  { "or.d",    CF_USE2|CF_USE1 }, //or.d ${const32}],${Rd}
  { "orq",    CF_USE2|CF_USE1 }, //orq $i,$Rd
  { "xor",    CF_USE2|CF_USE1|CF_CHG2 }, //xor $Rs,$Rd
  { "swap",    CF_USE1|CF_USE2|CF_CHG2 }, //swap${swapoption} ${Rs}
  { "asrr.b",    CF_USE2|CF_USE1 }, //asrr.b $Rs,$Rd
  { "asrr.w",    CF_USE2|CF_USE1 }, //asrr.w $Rs,$Rd
  { "asrr.d",    CF_USE2|CF_USE1 }, //asrr.d $Rs,$Rd
  { "asrq",    CF_USE2|CF_USE1|CF_CHG2 }, //asrq $c,${Rd}
  { "lsrr.b",    CF_USE2|CF_USE1 }, //lsrr.b $Rs,$Rd
  { "lsrr.w",    CF_USE2|CF_USE1 }, //lsrr.w $Rs,$Rd
  { "lsrr.d",    CF_USE2|CF_USE1 }, //lsrr.d $Rs,$Rd
  { "lsrq",    CF_USE2|CF_USE1|CF_CHG2 }, //lsrq $c,${Rd}
  { "lslr.b",    CF_USE2|CF_USE1 }, //lslr.b $Rs,$Rd
  { "lslr.w",    CF_USE2|CF_USE1 }, //lslr.w $Rs,$Rd
  { "lslr.d",    CF_USE2|CF_USE1 }, //lslr.d $Rs,$Rd
  { "lslq",    CF_USE2|CF_USE1|CF_CHG2 }, //lslq $c,${Rd}
  { "",    CF_USE2|CF_USE1 }, //$Rs,$Rd
  { "btstq",    CF_USE2|CF_USE1 }, //btstq $c,${Rd}
  { "setf",    CF_USE1 }, //setf ${list-of-flags}
  { "clearf",    CF_USE1 }, //clearf ${list-of-flags}
  { "rfe",    0 }, //rfe
  { "sfe",    0 }, //sfe
  { "rfg",    0 }, //rfg
  { "rfn",    0 }, //rfn
  { "halt",    0 }, //halt
  { "b",    CF_USE1|CF_USE2 }, //b${cc} ${o-pcrel}
  { "ba",    CF_USE1 }, //ba ${o-pcrel}
  { "b",    CF_USE1|CF_USE2 }, //b${cc} ${o-word-pcrel}
  { "ba",    CF_USE1 }, //ba ${o-word-pcrel}
  { "jas",    CF_USE1|CF_CHG2 }, //jas ${Rs},${Pd}
  { "jas",    CF_USE1|CF_CHG2 }, //jas ${const32},${Pd}
  { "jump",    CF_USE1 }, //jump ${Ps}
  { "bas",    |CF_CHG2 }, //bas ${const32},${Pd}
  { "jasc",    CF_USE1|CF_CHG2 }, //jasc ${Rs},${Pd}
  { "jasc",    CF_USE1|CF_CHG2 }, //jasc ${const32},${Pd}
  { "basc",    |CF_CHG2 }, //basc ${const32},${Pd}
  { "break",    CF_USE1 }, //break $n
  { "bound-r.b",    CF_USE2|CF_USE1|CF_CHG2 }, //bound-r.b ${Rs},${Rd}
  { "bound-r.w",    CF_USE2|CF_USE1|CF_CHG2 }, //bound-r.w ${Rs},${Rd}
  { "bound-r.d",    CF_USE2|CF_USE1|CF_CHG2 }, //bound-r.d ${Rs},${Rd}
  { "bound.b",    CF_USE1||CF_CHG1 }, //bound.b [PC+],${Rd}
  { "bound.w",    CF_USE1||CF_CHG1 }, //bound.w [PC+],${Rd}
  { "bound.d",    CF_USE1||CF_CHG1 }, //bound.d [PC+],${Rd}
  { "s",    CF_USE1| }, //s${cc} ${Rd-sfield}
  { "lz",    CF_USE1|CF_CHG2 }, //lz ${Rs},${Rd}
  { "addoq",    |CF_USE1 }, //addoq $o,$Rs,ACR
  { "addo-m.b",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //addo-m.b [${Rs}${inc}],$Rd,ACR
  { "addo-m.w",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //addo-m.w [${Rs}${inc}],$Rd,ACR
  { "addo-m.d",    CF_USE3|CF_USE1|CF_USE2|CF_CHG1 }, //addo-m.d [${Rs}${inc}],$Rd,ACR
  { "addo.b",    CF_USE1| }, //addo.b [PC+],$Rd,ACR
  { "addo.w",    CF_USE1| }, //addo.w [PC+],$Rd,ACR
  { "addo.d",    CF_USE1| }, //addo.d [PC+],$Rd,ACR
  { "addi-acr.b",    | }, //addi-acr.b ${Rs-dfield}.m,${Rd-sfield},ACR
  { "addi-acr.w",    | }, //addi-acr.w ${Rs-dfield}.m,${Rd-sfield},ACR
  { "addi-acr.d",    | }, //addi-acr.d ${Rs-dfield}.m,${Rd-sfield},ACR
  { "fidxi",    CF_USE1 }, //fidxi [$Rs]
  { "fidxi",    CF_USE1 }, //fidxi [$Rs]
  { "fidxd",    CF_USE1 }, //fidxd [$Rs]
  { "ftagd",    CF_USE1 }, //ftagd [$Rs]
};
