#include <iostream>
#include "gutschein.cpp"
#include "ticket.cpp"
#include "menue.cpp"


using namespace std;

void hilfe(){

  cout << " Die Bedienung der Software ist simple sie müssen lediglich den Buchstagen der in den [] Klammern steht eigeben zum Navigieren.";
  cout << "sollten sie weiteres eingeben müssen dann wird dies dort stehen.";

}

int einstellungen(){

    createTicket();
    creatGutschein();
    createRabatt();
}

int main()
{ 
     start();
     cin.get();
     einstellungen();

  do
 {
    string finput;
    startmenue();

    cout << "input: ";
    cin >> finput;

    if (finput == "T" || finput == "t")
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
    else
     cout << "Wrong Input!!!";
     break;
    
         
   system ("clear");
   
 } while (true);


}