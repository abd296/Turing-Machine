#ifndef ENIGMA_H_INCLUDED
#define ENIGMA_H_INCLUDED

using namespace std;
class Enigma
{
private:
                                            // Static Pointer for Calling Constructor
    char ch, *ptr, *q  ,*RR2, *RR1, *RR3, *RF ;                     // random Variable
	int i = 0,  R1, R2, R3, plug, Ref, Rot1, Rot2, Rot3, g, t;
      string output;                                                    // Constructor

public:
    void SetRotor(int a, int b, int c)
    {
        R1 = a;
        R2 = b;
        R3 = c;
    }
    Enigma();
    void FileHandling(char *a, char *b, int c);                     // reading data from file
    string Cipher();                                                  // Encrypted the text
    ~Enigma();                                                      // Destructor


};

#endif // ENIGMA_H_INCLUDED
