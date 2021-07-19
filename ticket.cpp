#include <iostream>
using namespace std;

int TicketMaxAnzahl = 300;
int Personenanzahl = 0;
float Preiskind = 13;
float PreisFamilie = 50;
float PreisErwachsene = 20;
float Preiskleingruppe = 300 ;
float Preisgroßgruppe = 500;
string name;

int Ticketbearbeitung(){
   
    string preis;
    cout << "[T]icket anzahl ändern oder Preis [K]ind [E]rwachsene [F]amilie [G]roßgruppe [S]kleingruppe ändern";
    cin >> preis;
    if (preis == "T" || preis == "t")
    {
        cout << "Ticketanzahl: ";
        cin >> TicketMaxAnzahl;
    }
    else if (preis == "K" || preis == "k")
    {
        cout << "Preiskind: ";
        cin >> Preiskind;
    }
    else if (preis == "E" || preis == "e")
    {
        cout << "Preis Erwachsene: ";
        cin >> PreisErwachsene;
    }
    else if (preis == "F" || preis == "f" )
    {
        cout << "Preis Familie: ";
        cin >> PreisFamilie;
    }
    else if (preis == "G" || preis == "g")
    {
        cout << "Preis Großgruppe: ";
        cin >> Preisgroßgruppe;
    }
    else if (preis == "S" || preis == "s")
    {
        cout << "Preis Kleingruppe: ";
        cin >> Preiskleingruppe;
    }
    
    
    
}

int drawticket(){


}

int drawGruppenticket(){

}


int Familie(){
   cout << "Namen Familienmitglieder durch Komma getrennt: ";
   cin >> name;

}
 
 int Grossgruppe() {


 }

 int kleingruppe(){



 }

int Kind(){

    cout << "Name: ";
    cin >> name;
    drawticket();



}
int erwachsende(){
    cout << "Name: ";
    cin >> name;
    drawticket();

}



int Ticket()
{string input;
    cout << " [G]ruppe [E]inzeln [F]amilie: ";
    cin >> input; 

    if (input == " G" || input == "g")
    { 
        int entscheidung;
        cout << "anzahl der Personen:";
        cin >> entscheidung;
            if (entscheidung < '25')
            {
                kleingruppe();
            }
            else if (entscheidung > '25')
            {
                Grossgruppe();
            }
            
    }

    else if (input == "E" || input == " e")
    {
        string typ;
        cout << "[K]ind oder [E]rwachsen: ";
        cin >> typ;
        if (typ == "K" || typ == "k")
        {
            Kind();
        }
        else if (typ == "E" || typ == "e")
        {
            erwachsende();
        }
        
        
    }
    else if (input == "F" || input == "f")
    {
        Familie();
    }
    
    
    


}
