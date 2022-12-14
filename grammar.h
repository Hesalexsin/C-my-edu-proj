#ifndef GRAMMAR_H
#define GRAMMAR_H

#endif // GRAMMAR_H

#include "std_lib_facilities.h"

constexpr char quit = 'q';
constexpr char print = ';';
constexpr char number = '8';
constexpr char name = 'a';
constexpr char let = 'L';

const string prompt = "> ";
const string result = "= ";
const string declkey = "let";

double expression ();
double term ();
double primary ();
