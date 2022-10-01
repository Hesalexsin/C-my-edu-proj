#ifndef TOKEN_H
#define TOKEN_H

#endif // TOKEN_H

#include "std_lib_facilities.h"

struct Token
{
  char kind;
  double value;
  string name;

  Token (char ch);

  Token (char ch, double val);

  Token (char ch, string n);
};


class Token_stream
{
  bool full{ false };
  Token buffer{ '\0' };

public:
  Token_stream ()  { }

  Token get ();
  void putback (Token t);

  void ignore (char);
};

extern Token_stream ts;
