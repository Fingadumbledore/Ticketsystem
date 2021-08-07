#include <iostream>
#include "gutschein.cpp"
#include "ticket.cpp"
#include "menue.cpp"

string einput;
string serveradresse;


using namespace std;

//hilfe
void hilfe(){

  cout << " Die Bedienung der Software ist simple sie müssen lediglich den Buchstagen der in den [] Klammern steht eigeben zum Navigieren.";
  cout << "sollten sie weiteres eingeben müssen dann wird dies dort stehen.";

}

int einstellungen(){

    createTicket();
    creatGutschein();
    createRabatt();
}

int verbindung(){
    cout << "Login\n";
    cout << "Server Adresse: ";
    cin >> serveradresse;
    
}

int starteinstellungen(){
    cout << "[N]eues Ticket erstellen\n" << "[T]icket laden\n" << "[A]lle Tickets anzeigen\n" << "[E]inlogen\n" << "Input: ";
    cin >> einput;
    if (einput == "N" || einput == "n")
    {
        einstellungen();
    }
    else if (einput == "T" || einput == "t")
    {
        cout << "noch nicht verfügbar";
    }
    else if (einput == "A" || einput == "a")
    {
        cout << "noch nicht verfügbar";
    }
    else if (einput == "E" || einput == "e")
    {
        verbindung();
    }
    
    
    
    

}









int main()
{     
     start();
     cin.get();
     starteinstellungen();
     

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
    else if (finput == "B" || finput == "b")
    {
        string e;
        cout << "[T]icket, [G]utschein, [R]abatt bearbeiten: ";
        cin >> e;
        if (e == "T" || e == "t")
        {
            Ticketbearbeitung();
        }
        else if (e == "G" || e == "g")
        {
            Gutscheinbearbeitung();
        }
        else if (e == "R" || e == "r")
        {
            Rabattbearbeiten();
        }
          
    }
    
    else
     cout << "Wrong Input!!!";
     break;
           
   system ("clear");
   
 } while (true);

}
