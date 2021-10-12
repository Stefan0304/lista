
#include <iostream>
#include "Clista.h"
using namespace std;

int main()
{
    Clista L;
    L.AdaugInc(1);
    L.AdaugInc(21);
    L.AdaugInc(13);
    L.AdaugInc(213);
    L.List();
    Clista* Ld = new Clista;
    Ld->AdaugInc(343);
    Ld->AdaugInc(243);
    Ld->AdaugInc(143);
    Ld->List();
    cout << "\nElimin lista dinamica\n";
    delete Ld;
    std::cout << "\nElimin lista statica!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
