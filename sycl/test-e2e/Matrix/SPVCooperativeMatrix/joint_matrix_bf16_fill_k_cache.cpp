//==--- joint_matrix_bf16_fill_k_cache.cpp  - DPC++ joint_matrix----------==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// REQUIRES: aspect-ext_intel_matrix

// RUN: %{build} -D__SPIRV_USE_COOPERATIVE_MATRIX -o %t_vnni.out -DVNNI -ffp-model=precise
// RUN: %{run} %t_vnni.out

// RUN: %{build} -D__SPIRV_USE_COOPERATIVE_MATRIX -o %t.out -ffp-model=precise
// RUN: %{run} %t.out

// XFAIL: cpu

// -ffp-model=precise is added to not depend on compiler defaults.

#include "../common.hpp"
#include "../joint_matrix_bf16_fill_k_cache_impl.hpp"
