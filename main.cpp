#include <iostream>
#include "window.cpp"
#include "gutschein.cpp"
#include "ticket.cpp"
#include "menue.cpp"
#include "hilfe.cpp"
#include "verwalten.cpp"
using namespace std;

int main()
{  start();
     do
 {
    
    system ("clear");

    string input;
    menue();

    cout << "input: ";
    cin >> input;

    if (input == "T" || input == "t") 
    {
        Ticket();
    }
    else if (input == "G" || input == "g")
    {
        Gutschein();
    }
    else if (input == "H" || input == "h")
    {
       hilfe();
    }
    else if (input == "O" || input == "o")
    {
        GUI();
    }
    else if (input == "V" || input == "v")
    {
        verwalten();
    }
    
    else { cout << "Error\n"; }
    
 } while (true);

}