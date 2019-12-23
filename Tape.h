#ifndef TAPE_H_INCLUDED
#define TAPE_H_INCLUDED
#include <map>

#include "Enigma.h"
#include "Enigma.cc"
struct Rotor
{
    int R1;
    int R2;
    int R3;
};
class Tape
{
private:

public:
   map<string, Rotor> CreateOutput(char *p, char *q, int a);
};


#endif // TAPE_H_INCLUDED
