/* Copyright (c) 2010, Avian Contributors

   Permission to use, copy, modify, and/or distribute this software
   for any purpose with or without fee is hereby granted, provided
   that the above copyright notice and this permission notice appear
   in all copies.

   There is NO WARRANTY for this software.  See license.txt for
   details. */

#ifndef TOKENIZER_H
#define TOKENIZER_H

namespace vm {

class Tokenizer {
 public:
  class Token {
   public:
    Token(const char* s, unsigned length): s(s), length(length) { }

    const char* s;
    unsigned length;
  };

  Tokenizer(const char* s, char delimiter): s(s), delimiter(delimiter) { }

  bool hasMore() {
    while (*s == delimiter) ++s;
    return *s != 0;
  }

  Token next() {
    const char* p = s;
    while (*s and *s != delimiter) ++s;
    return Token(p, s - p);
  }

  const char* s;
  char delimiter;
};

} // namespace

#endif//TOKENIZER_H