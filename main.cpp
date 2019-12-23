#include <iostream>
using namespace std;
#include "Tape.h"
#include "Tape.cc"
#include "TuringMachine.h"
#include "TuringMachine.cc"



int main(int argc, char ** argv)
{
    TuringMachine R;
    R.Find(argv[1], argv[2], argc);
    return 0;
}
