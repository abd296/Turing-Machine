
# include "Plugboard.h"
Plugboard::Plugboard()
    {
       // cout<<"Hello Plugboard::Plugboard() called"<<endl;

    }

Plugboard::Plugboard(char *p, int plug)
    {
        char A[26] = {'a', 'b', 'c', 'n', 'l', 't', 'g', 'r', 'k', 'q', 'f', 'v', 'i', 'z', 'u', 'y', 'h', 'w', 'd', 's', 'o', 'e', 'x', 'm', 'j', 'p' };
        q = new char [26];
        if (plug == 1)
        {
            strcpy(q, p);
           // cout<<"Txt file array copied"<<endl;
        }
        else
         {
             strcpy(q, A);
            // cout<<"Default array copied"<<endl;
         }
    }

Plugboard::~Plugboard()             // Destructor
    {
        delete[] q;
    }

char Plugboard::swap( char z)       // swapping
{
    int x;
    for(int i=0; i<26;i++)
    {
        if(z == q[i])
        {
            x =i;
            break;
        }
    }

    x = 25 - x ;
    return q[x];

}


