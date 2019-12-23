#include "TuringMachine.h"

void TuringMachine::Find(char *p, char *q, int a)
{
    Tape t;
    map<string, Rotor>::iterator itr;
    map<string, Rotor> Comb = t.CreateOutput(p,q,a);


    for (itr = Comb.begin(); itr != Comb.end(); ++itr)
        {
            //cout<<itr- <<" "<<itr->second.R1 << '\t' << itr->second.R2<< '\t' << itr->second.R3<< '\n';
            if(itr->first == "good morning")
            {
                cout<<"Key for this message is ...  "<<itr->second.R1 << '\t' << itr->second.R2<< '\t' << itr->second.R3<< '\n';
            }
        }
        cout << endl;
}
