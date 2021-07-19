#include <iostream>
using namespace std;

int GutscheinMaxAnzahl = 20;


int Gutscheinbearbeitung (){

    cout << "neue Gutscheinanzahl: ";
    cin >> GutscheinMaxAnzahl;

}

int drawGutschein(){
    
}

int creatGutschein(){
        cout << "Gutschein kaufen";

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
    creatGutschein();
}




}