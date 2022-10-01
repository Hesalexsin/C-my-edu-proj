

#include "std_lib_facilities.h"
#include "token.h"
#include "variable.h"
#include "grammar.h"




void clean_up_mess ()
{
  ts.ignore (print);
}


void calculate ()
{
  Token_stream ts;
  while (true)
  try
  {
    cout << prompt;
    Token t = ts.get();
    while (t.kind == print)
      t = ts.get();
    if (t.kind == quit) return;

    ts.putback(t);
    cout << result << statement() << endl;
  }
  catch (runtime_error& e)
  {
    cerr << e.what() << endl;
    clean_up_mess();
  }

}


int main () {
try
{
  define_name ("pi", 3.141592653589793);
  define_name ("e",  2.718281828459045);

  calculate();
}
catch (exception& e)
{
  cerr << "exception: " << e.what() << endl;
  return 1;
}
catch (...)
{
  cerr << "Oops, unknown exception" << endl;
  return 2;
}
}
