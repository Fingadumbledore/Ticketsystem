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

    if (finput == "V" || finput == "v" )
    {
         verwalten();
    }
    else if (finput == "T" || finput == "t")
    {
        Ticket();
    }
    else if (finput == "G" || finput == "g")
    {
        Gutschein();
    }
     else if (finput == "H" || finput == "h")
    {
        hilfe();
    }
     else if (finput == "O" || finput == "o")
    {
        GUI();
    }
    else
     cout << "Wrong Input!!!";
    
    
     
   system ("clear");
   
 } while (true);



}