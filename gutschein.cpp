#include <iostream>

using namespace std;

int GutscheinMaxAnzahl = 20;
string Gutscheineigentuemer;
float Gutscheinwert;
string Gutscheinspruch;
string Gutscheinspruch1;
string Gutscheinspruch2;
string Ginput;

//Gutscheinhilfe
void Gutscheinhilfe(){

  cout <<"Dies wird die hilfe für Gutscheine";

}

int Gutscheinbearbeitung (){

    cout << "neue Gutscheinanzahl: ";
    cin >> GutscheinMaxAnzahl;

}

int drawGutschein(){
    cout << "[Gutschein für]";
}

int creatGutschein(){
       cout << "Gutscheinwert [F]est [N]icht Fest: "; 
       cin >> Ginput;
       if (Ginput == "F" || Ginput == "f")
       {
           cout << "Gutscheinwert: ";
           cin >> Gutscheinwert;
       }
       
       
       
       
       if (Gutscheinwert > 0)
       {
          cout << "Spruch auf Gutschein: ";
          cin >> Gutscheinspruch;
       }
       
       


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
