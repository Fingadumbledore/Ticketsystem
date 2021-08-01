#include <iostream>
#include "window.cpp"
#include "gutschein.cpp"
#include "ticket.cpp"
#include "menue.cpp"
#include "hilfe.cpp"
#include "verwalten.cpp"
using namespace std;

int main()
{ 
     start();

  do
 {
    string finput;
    startmenue();

    cout << "input: ";
    cin >> finput;

    switch (finput)
    {
    case 'V':
        verwalten();
        break;

    case 'T' :
        Ticket();
        break;

    case 'G' :
        Gutschein();
        break;

    case 'H' :
        hilfe();
        break;
        
    case 'O':
        GUI();
        break;
    
    default:
        break;
    }
     
   system ("clear");
   
 } while (true);



}