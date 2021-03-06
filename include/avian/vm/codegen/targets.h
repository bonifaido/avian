/* Copyright (c) 2008-2012, Avian Contributors

   Permission to use, copy, modify, and/or distribute this software
   for any purpose with or without fee is hereby granted, provided
   that the above copyright notice and this permission notice appear
   in all copies.

   There is NO WARRANTY for this software.  See license.txt for
   details. */

#ifndef AVIAN_CODEGEN_TARGETS_H
#define AVIAN_CODEGEN_TARGETS_H

#include <avian/vm/codegen/assembler.h>

namespace avian {
namespace codegen {

Assembler::Architecture* makeArchitectureNative(vm::System* system, bool useNativeFeatures);

Assembler::Architecture* makeArchitectureX86(vm::System* system, bool useNativeFeatures);
Assembler::Architecture* makeArchitectureArm(vm::System* system, bool useNativeFeatures);
Assembler::Architecture* makeArchitecturePowerpc(vm::System* system, bool useNativeFeatures);

} // namespace codegen
} // namespace avian

#endif // AVIAN_CODEGEN_TARGETS_H
