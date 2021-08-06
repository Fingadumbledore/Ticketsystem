#include <iostream>
using namespace std;

int TicketMaxAnzahl = 300;
int Personenanzahl = 0;
float Preiskind = 13;
float PreisFamilie = 50;
float PreisErwachsene = 20;
float Preiskleingruppe = 300;
float Preisgroßgruppe = 500;
string name;
float gesammtpreis;

int Rabatwert;
string Rabatmotto;
float Rabattpreis;
int Rabattanzahl;
int Rabattwert;
int f = 0;

int createRabatt(){
    int Rab = 0;
    string Rinput;

    cout <<"Rabatwert(%): ";
    cin >> Rabatwert;
    if (Rabatwert > 0)
    {
       
      cout << "Rabatmotto: ";
      cin >> Rabatmotto;
      cout << "Rabatt [M]it oder [O]hne Gutschein: ";
      cin >> Rinput;
      if (Rinput == "M" || Rinput == "m")
      {
        Rab = 1;
      }
      else if (Rinput == "O" || Rinput == "o")
      {
         Rab = 2;
      }
    }
    
    
    
}


string veranstaltung; 
string Datum;

void Tickethilfe(){


  cout << "Dies wird die Hilfe für Ticket's";
}

int Rabattfrage(){
    string input;
    cout << "Besitzen sie einen Rabatt Coupon [J]a [N]ein: ";
    cin >> input;
    if (input == "J" || input == "j")
    {
     f = 1;
    }
    
}

int createTicket(){

        cout << "Veranstaltung: ";
        cin >> veranstaltung;
        cout << "Datum: ";
        cin >> Datum;
    
}
int Rabat(){
    Rabattpreis = gesammtpreis / 100 * Rabatwert;
    cout << "Preis: " << Rabattpreis ;
}

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
    cout << "Ticket:";
}




int drawGruppenticket(){

    cout << "Gruppenticket:";
}




int Familie(){
    
   cout << "Namen Familienmitglieder durch Komma getrennt: ";
   cin >> name;
   if (f < 1)
   {
        Rabattfrage();Rabattfrage();
   }
   

  

}
 
 int Grossgruppe() {
     if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   gesammtpreis = Preisgroßgruppe;
   if (f = 1)
   {
       Rabat();
   }
   drawticket();

 }

 int kleingruppe(){
     if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   gesammtpreis = Preiskleingruppe;
   if (f = 1)
   {
       Rabat();
   }
   drawticket();

 }

int Kind(){
    
    cout << "Name: ";
    cin >> name;
    drawticket();
    if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   gesammtpreis = Preiskind;
   if (f = 1)
   {
       Rabat();
   }
   drawticket();



}
int erwachsende(){
    cout << "Name: ";
    cin >> name;
    if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   gesammtpreis = PreisErwachsene; 
   
   if (f = 1)
   {
       Rabat();
   }
   
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
