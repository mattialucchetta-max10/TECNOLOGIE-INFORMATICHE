#include <iostream>

using namespace std;

int main() {

    int numerosegreto = 27; 
    int numeroscelto;

    cout << "Scegli il tuo numero fortunato:";
    cin >> numeroscelto;
    if (numeroscelto == numerosegreto) { //se il numeroscelto è == al numero segreto stampa hai indovinato il numero fortunato//
        cout << "Hai indovinato il numero fortunato!" << endl;
    } else {//altrimenti è Sbagliatoe il numero fortunato era 27//
        cout << "Sbagliato Il numero fortunato era " << numerosegreto << endl;
    }

    return 0;
}




































