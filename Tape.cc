#include "Tape.h"

map<string, Rotor> Tape::CreateOutput(char *p, char *q, int a)
{

    Rotor R;
    map<string, Rotor> Combination;

    string A;
    Enigma *E = new Enigma ;
    E->FileHandling(p, q, a);
    for(int r1=0; r1<26; r1++)
     {
       for(int r2=0; r2<26; r2++)
       {
        for(int r3=0; r3<26; r3++)
        {
            R.R3 = r3;
            R.R2 = r2;
            R.R1 = r1;
            E->SetRotor(r1,r2,r3);
            A = E->Cipher();
           // cout<<A<<endl;
            Combination.insert(pair<string, Rotor >(A, R));
        }
       }
     }
     return Combination;



}
