#include <iostream>
//#include "ticket.cpp"
using namespace std;

int Rabatwert;
string Rabatmotto;
float Rabattpreis;
int Rabattanzahl;
int Rabattwert;
int Rab = 0;
string Rinput;


int createRabatt(){
    cout <<"Rabatwert: ";
    cin >> Rabatwert;
    cout << "Rabatmotto: ";
    cin >> Rabatmotto;
     cout << "Rabatt [M]it oder [O]hne Gutschein: ";
     cin >> Rinput;
     if (Rinput == "M" || Rinput == "m")
     {
        Rab = 1;
     }
     else if (Rinput == "O" || Rinput == "o")
     {
         Rab = 2;
     }
     else if (Rinput == "H" || Rinput == "h")
     {
         Rabatthilfe();
     }
     
     else
        cout << "Error!!! ";


}

int drawrabatcoupon(){


}

int Rabat(){

    Rabattpreis = gesammtpreis / 100 * Rabatwert;

    cout << "Preis: " << Rabattpreis ;
}