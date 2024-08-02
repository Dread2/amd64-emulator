#ifndef REGISTERS_H
#define REGISTERS_H

#include "stdint.h"

// GPRs
typedef struct {
  uint64_t rax;
  uint64_t rbx;
  uint64_t rcx;
  uint64_t rdx;
  uint64_t rbp;
  uint64_t rsi;
  uint64_t rdi;
  uint64_t rsp;
  uint64_t r8;
  uint64_t r9;
  uint64_t r10;
  uint64_t r11;
  uint64_t r12;
  uint64_t r13;
  uint64_t r14;
  uint64_t r15;
} GPRs3;

// 256-Bit YMM Registers
typedef struct {
  uint64_t[4] ymm0;
  uint64_t[4] ymm1;
  uint64_t[4] ymm2;
  uint64_t[4] ymm3;
  uint64_t[4] ymm4;
  uint64_t[4] ymm5;
  uint64_t[4] ymm6;
  uint64_t[4] ymm7;
  uint64_t[4] ymm8;
  uint64_t[4] ymm9;
  uint64_t[4] ymm10;
  uint64_t[4] ymm11;
  uint64_t[4] ymm12;
  uint64_t[4] ymm13;
  uint64_t[4] ymm14;
  uint64_t[4] ymm15;
} YMMs; 

// 128-Bit XMM Registers
typedef struct {
  uint64_t[2] xmm0;
  uint64_t[2] xmm1;
  uint64_t[2] xmm2;
  uint64_t[2] xmm3;
  uint64_t[2] xmm4;
  uint64_t[2] xmm5;
  uint64_t[2] xmm6;
  uint64_t[2] xmm7;
  uint64_t[2] xmm8;
  uint64_t[2] xmm9;
  uint64_t[2] xmm10;
  uint64_t[2] xmm11;
  uint64_t[2] xmm12;
  uint64_t[2] xmm13;
  uint64_t[2] xmm14;
  uint64_t[2] xmm15;
} XMMs;

// 64-Bit MMX Registers
typedef struct {
  uint64_t mmx0;
  uint64_t mmx1;
  uint64_t mmx2;
  uint64_t mmx3;
  uint64_t mmx4;
  uint64_t mmx5;
  uint64_t mmx6;
  uint64_t mmx7;
} MMXs;

#endif REGISTERS_H
