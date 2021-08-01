#include <iostream>
//#include "ticket.cpp"
using namespace std;

int Rabatwert;
string Rabatmotto;
float Rabattpreis;


int createRabatt(){
    cout <<"Rabatwert: ";
    cin >> Rabatwert;
    cout << "Rabatmotto: ";
    cin >> Rabatmotto;


}

int drawrabatcoupon(){


}

int Rabat(){

    Rabattpreis = gesammtpreis / 100 * Rabatwert;

    cout << "Preis: " << Rabattpreis ;
}