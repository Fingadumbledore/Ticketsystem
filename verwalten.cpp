#include <iostream>
#include "gutschein.cpp"
#include "ticket.cpp"
#include "hilfe.cpp"
#include "rabatt.cpp"
using namespace std;

int verwalten (){

 char(1) art;
 cout << "[G]utscheine verwalten [T]icket's verwalten [S]ystem verwalten [R]abatt [H]ilfe: ";
 cin >> art;
    
switch (art)
{
case "G" || "g":
    Gutscheinbearbeitung();
    break;

case "T" || "t":
    Ticketbearbeitung();
    break;

case "S" || "s":
    cout << "Ticketsystem bearbeiten";
    break;

case "H" || "h":
    bearbeitungshilfe();
    break;

case "R" || "r":
    createRabatt();
    break;

default:
    break;
}

}