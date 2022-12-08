#include <iostream>
#include <thread>

#include "LangfordSeq.h"
using namespace std;
int main()
{
    cout << "Langford!\n";
    uint n;


    cout << "Bitte geben Sie eine Sequence zum berechnen an: \nL(2,n)\tn = ";
    cin >> n;

    //prüfen ob die Eingabe kongruent zu 3 4 ist
    while ((n % 4 != 0) && ((n+1) % 4 != 0)) {
        cout << "L(2," << n << ") nicht lösbar.\n Bitte geben Sie ein neues n an:\n";
        cin >> n;
    }

    auto seq = LangfordSeq(n);




    auto start_langford_seq = chrono::high_resolution_clock::now();
    seq.execute();
    auto end_langford_par = chrono::high_resolution_clock::now() - start_langford_seq;
    long long microseconds_langford = chrono::duration_cast<chrono::microseconds>(end_langford_par).count();
    cout << "Ausführungszeit sequentiell L(2," << to_string(n) << ") =  " << microseconds_langford << " Mikrosekunden" << endl;
    cout << "Gefundene Lösungen = " << seq.solutions << endl;
    return 0;
}