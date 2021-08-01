#include <iostream>
#include "rabatt.cpp"
using namespace std;

int GutscheinMaxAnzahl = 20;
string Gutscheineigentuemer;
float Gutscheinwert;
string Gutscheinspruch;


int Gutscheinbearbeitung (){

    cout << "neue Gutscheinanzahl: ";
    cin >> GutscheinMaxAnzahl;

}

int drawGutschein(){
    cout << "[Gutschein für]";
}

int creatGutschein(){
       cout << "Name Gutscheininhaber: ";
       cin >> Gutscheineigentuemer;
       cout << "Gutscheinwert: ";
       cin >> Gutscheinwert;
       cout << "[Optional] Spruch auf Gutschein: ";
       cin >> Gutscheinspruch;


}

int Gutscheinkauf(){



}


int einlösungGutschein(){

    cout << "Gutschein einlösen";

}

int Gutschein(){
string input;

cout << "Gutschein [E]inlösen oder Gutschein [K]aufen:  ";
cin >> input;
if (input == "E" || input == "e")
{
    einlösungGutschein();
}
else if (input == "K" || input == "k")
{
    Gutscheinkauf();
}




}