#include <iostream>
using namespace std;

int TicketMaxAnzahl = 300;
int Personenanzahl = 0;
float Preiskind = 13;
float PreisFamilie = 50;
float PreisErwachsene = 20;
float Preiskleingruppe = 300;
float Preisgroßgruppe = 500;
string Ticketname;
string name;
float gesammtpreis;
string Ticketart;

int Rabatwert;
string Rabatmotto;
float Rabattpreis;
int Rabattanzahl;
int Rabattwert;
int f = 0;
string q;
string T;
string Ticketanzahl;
string Ticketarten;

int ticketform(){
    

    cout << " [G]ruppe [E]inzeln [F]amilie: ";

}

//Rabatt erstellen
int createRabatt(){
    int Rab = 0;
    string Rinput;
    

    cout <<"Rabatwert(%): ";
    cin >> Rabatwert;
    if (Rabatwert > 0)
    {
       
      cout << "Rabatmotto: ";
      cin >> Rabatmotto;
      cout << "Anzahl an Rabattcoupons: ";
      cin >> Rabattanzahl;
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

//Hilfe Dialog für den Bereich Ticket
void Tickethilfe(){


  cout << "Dies wird die Hilfe für Ticket's";
}

//nachträgliche bearbeitung von Rabatt coupons
int Rabattbearbeiten(){

    cout << "Rabattbearbeiten\n";
    cout << "Rabattwert: ";
    cin >> Rabatwert;
    cout << "Rabattmotto: ";
    cin >> Rabatmotto;
    cout << "Rabatanzahl: ";
    cin >> Rabattanzahl;
}

//Frage nach Rabatt coupon
int Rabattfrage(){
    string input;
    cout << "Besitzen sie einen Rabatt Coupon [J]a [N]ein: ";
    cin >> input;
    if (input == "J" || input == "j")
    {
     f = 1;
    }
    
}

//Ticket erstellen
int createTicket(){
    string zinpuz;
    do
    {
        cout << "Ticketname: ";
        cin >> Ticketname;
        cout << "Veranstaltung: ";
        cin >> veranstaltung;
        cout << "Maximale Anzahl Tickets: ";
        cin >> TicketMaxAnzahl;
        cout << "Datum: ";
        cin >> Datum;
        cout << "[P]reis einstellen [W]eiter: ";
        cin >> zinpuz;
        if (zinpuz == "P" || zinpuz == "p")
        {
            cout << "Was ist preis\n";
        }
        
        cout << "noch ein Ticket erstellen [J]a [N]ein: ";
        cin >> T;
    } while (T == "J" || T == "j");
    
           
}

//Rabattfunktion
int Rabat(){
    Rabattpreis = gesammtpreis / 100 * Rabatwert;
    cout << "Preis: " << Rabattpreis ;
}

//Bearbeitung im nachhinein  vom Ticket
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

//Ticket Ausgabe
int drawticket(){ 
    if (Ticketart == "G")
    {
        if (Ticketanzahl == "E" || Ticketanzahl == "e")
        {
            for (int i = 0; i < Personenanzahl; i++)
            {
                cout << "Gruppeneinzelticket Preis: " << gesammtpreis << "€\n";
                
            }
            
        }
        else if (Ticketanzahl == "G" || Ticketanzahl == "g")
        {
            cout << "Gruppenticket Preis: " << gesammtpreis << "€";
             
        }
        
        
        
    }
    else if (Ticketart == "F")
    {
        cout << "Familienticket Preis: " << gesammtpreis << "€";
        
    }
    else if (Ticketart == "E")
    {
        cout << "Einzelticket Preis: " << gesammtpreis <<"€";
        
    }
    
    
    
    
}


//Hauptteil für Familie
int Familie(){
    
    gesammtpreis = PreisFamilie; 
    Ticketart = "F";
   cout << "Namen Familienmitglieder durch Komma getrennt: ";
   cin >> name;
   if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   
   
   if (f = 1)
   {
       Rabat();
   }
   cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {
       ticketform();
   }
   else if (q == "N" || q == "n")
   {
        drawticket();
   }
   

}
 
 //Hauptteil für die Großgruppe
 int Grossgruppe() {

     Ticketart = "G";
     gesammtpreis = Preisgroßgruppe;
     if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   
   if (f = 1)
   {
       Rabat();
   }
   cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {
       ticketform();
   }
   else if (q == "N" || q == "n")
   {    
       cout << "Wollen sie " << Personenanzahl << " [E]inzel Tickets oder ein [G]roßes Gruppenticket: ";
       cin >> Ticketanzahl;
        drawticket();
   }

 }

//Hauptteil für die Kleingruppe
 int kleingruppe(){

     Ticketart = "G";
     gesammtpreis = Preiskleingruppe;
     if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   
   if (f = 1)
   {
       Rabat();
   }
   cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {
       ticketform();
   }
   else if (q == "N" || q == "n")
   {
        cout << "Wollen sie " << Personenanzahl << " [E]inzel Tickets oder ein [G]roßes Gruppenticket: ";
        cin >> Ticketanzahl;
        drawticket();
   }
   
   

 }

//Hauptteil für Kind
int Kind(){
    
    gesammtpreis = Preiskind;
    Ticketart = "E";
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
   cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {
       ticketform();
   }
   else if (q == "N" || q == "n")
   {
        drawticket();
   }



}

//Hauptteil für erwachsende
int erwachsende(){

    Ticketart = "E";
    gesammtpreis = PreisErwachsene; 
    cout << "Name: ";
    cin >> name;
    if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   
   
   if (f = 1)
   {
       Rabat();
   }
   
    cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {
       ticketform();
   }
   else if (q == "N" || q == "n")
   {
        drawticket();
   }
}


//Hauptteil Ticket
 int Ticket()
{string input;    
    ticketform();
    cin >> input; 

    if (input == " G" || input == "g")
    { 
        int entscheidung;
        cout << "anzahl der Personen:";
        cin >> Personenanzahl;
        
            if (Personenanzahl < '25')
            {
                kleingruppe();
            }
            else if (Personenanzahl > '25')
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


