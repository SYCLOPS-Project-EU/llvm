//==- lsc_usm_prefetch_u64_scalar_off_pvc.cpp - DPC++ ESIMD on-device test-==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// REQUIRES: arch-intel_gpu_pvc
// RUN: %{build} -o %t.out
// RUN: %{run} %t.out

// PVC variant of the test

#define USE_SCALAR_OFFSET
#define USE_PVC

#include "lsc_usm_prefetch_u64.cpp"
