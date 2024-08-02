#ifndef X86_64_REGISTERS_H
#define X86_64_REGISTERS_H

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
} GPRs;

// 256-Bit YMM Registers
typedef struct {
  uint64_t ymm0[4];
  uint64_t ymm1[4];
  uint64_t ymm2[4];
  uint64_t ymm3[4];
  uint64_t ymm4[4];
  uint64_t ymm5[4];
  uint64_t ymm6[4];
  uint64_t ymm7[4];
  uint64_t ymm8[4];
  uint64_t ymm9[4];
  uint64_t ymm10[4];
  uint64_t ymm11[4];
  uint64_t ymm12[4];
  uint64_t ymm13[4];
  uint64_t ymm14[4];
  uint64_t ymm15[4];
} YMMs; 

// 128-Bit XMM Registers
typedef struct {
  uint64_t xmm0[2];
  uint64_t xmm1[2];
  uint64_t xmm2[2];
  uint64_t xmm3[2];
  uint64_t xmm4[2];
  uint64_t xmm5[2];
  uint64_t xmm6[2];
  uint64_t xmm7[2];
  uint64_t xmm8[2];
  uint64_t xmm9[2];
  uint64_t xmm10[2];
  uint64_t xmm11[2];
  uint64_t xmm12[2];
  uint64_t xmm13[2];
  uint64_t xmm14[2];
  uint64_t xmm15[2];
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

// x87 Registers
typedef struct {
  long double FPR0;
  long double FPR1;
  long double FPR2;
  long double FPR3;
  long double FPR4;
  long double FPR5;
  long double FPR6;
  long double FPR7;
} x87s;

typedef struct {
  uint64_t rip;
} RIP;

typedef struct {
  uint64_t rflags;
} RFLAGS;

#endif
