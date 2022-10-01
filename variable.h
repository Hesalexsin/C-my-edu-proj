#ifndef VARIABLE_H
#define VARIABLE_H

#endif // VARIABLE_H


#include "std_lib_facilities.h"

struct Variable
{
  string name;
  double value;

  Variable (string n, double v)
    : name{ n }, value{ v }
  { }
};

extern vector<Variable> var_table;

double get_value (string s);
void set_value (string s, double d);
double declaration ();
double statement ();
bool is_declared (string s);
double define_name (string var, double val);
