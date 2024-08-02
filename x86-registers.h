#ifndef X86_REGISTERS_H
#define X86_REGISTERS_H

#include "stdint.h"

// GPRs
typedef struct {
  uint32_t eax;
  uint32_t ebx;
  uint32_t ecx;
  uint32_t edx;
  uint32_t ebp;
  uint32_t esi;
  uint32_t edi;
  uint32_t esp;
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
  uint32_t eip;
} EIP;

typedef struct {
  uint32_t eflags;
} EFLAGS;

#endif
