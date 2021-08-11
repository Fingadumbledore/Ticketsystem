#include <iostream>
using namespace std;

int TicketMaxAnzahl = 0;
int Personenanzahl = 0;
float Preiskind = 0;
float PreisFamilie = 0;
float PreisErwachsene = 0;
float Preiskleingruppe = 0;
float Preisgroßgruppe = 0;
float algemeinpreis = 0;
string Ticketname;
string name;
float gesammtpreis;
string Ticketart;
int kleingruppengroese;
int großgruppengroese;
int gruppenanzahl;
int Teilnehmer;
int e;
int zwisch;
string q;
string l;
int gru;
int Rabatwert;
string Rabatmotto;
float Rabattpreis;
int Rabattanzahl;
int Rabattwert;
int f = 0;
string a;
string T;
string m;
string Ticketanzahl;
string Ticketarten;
int ticketzahl;
string begrenzung;
string veranstaltung; 
string Datum;
string Rinput;

//Diese Funktion dient im Moment noch als Placeholder in zukunft soll über diese funktion das zurück gehen möglich sein
int ticketform(){
    

    cout << "TicketForm";

}

//Funktion zum löschen von Tickets
int removeticket(){

   
    
    cout << "Dieses Feature setzt im Moment die Werte der Variablen in den default modus";
    TicketMaxAnzahl = 0;
    Personenanzahl = 0;
    Preiskind = 0;
    PreisFamilie = 0;
    PreisErwachsene = 0;
    Preiskleingruppe = 0;
    Preisgroßgruppe = 0;
    algemeinpreis = 0;
}

//Rabatt erstellen
int createRabatt(){
    int Rab = 0;
    
    

    cout <<"Rabatwert(%): ";
    cin >> Rabatwert;
    if (Rabatwert > 0)
    {
       
      cout << "Rabatmotto: ";
      cin >> Rabatmotto;
      cout << "Anzahl an Rabattcoupons: ";
      cin >> Rabattanzahl;
      cout << "Rabatt [M]it oder [O]hne Gutschein: ";//Hier wird abgefragt ob ein Rabattcoupon mit oder ohne einen Gutschein verwendet werden darf
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

//Frage nach Rabatt coupon diese Funktion wird vollen allen ticketvarianten abgerufen sofern es Rabattcoupons gibt
int Rabattfrage(){
    string input;
    cout << "Besitzen sie einen Rabatt Coupon [J]a [N]ein: ";
    cin >> input;
    if (input == "J" || input == "j")
    {
     f = 1;
    }
    else if (input == "N" || input == "n")
    {
        f = 0;
    }
    
    
}

//Bearbeitung im nachhinein  vom Ticket
int Ticketbearbeitung(){
   string preis;
    
    //Hier werden die bisherigen werte angezeigt sofern man das will
    cout << "Bisherigen werte anzeigen [J]a [N]ein: ";
    cin >> a;
    if (a == "J" || a == "j")
    {
        cout << "Bisherige Werte: " << " Ticketanzahl " << TicketMaxAnzahl << " Preiskind " << Preiskind << " Preis Erwachsene " << PreisErwachsene << " Preis Famile " << PreisFamilie << " Preis Großgruppe " << Preisgroßgruppe << " Preis kleingruppe " << Preiskleingruppe;
    }
    //abhier können die Ticket Werte verändert werden 
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

//Ticket erstellen
int createTicket(){
    string zinpuz;
    do
    {
        cout << "Alle Einstellungen können im Nachhinein bearbeitet werden.\n";
        //auswahl zwichen 2 modi einfach oder advanced einfacher modus beinhaltet assistenten
        cout << "[E]infacher oder [V]ortgeschrittender einstellungs modus: ";
        cin >> l;
        if (l == "E" || l == "e")
        {
            cout << "Der einfache Modus befindet sich noch in der entwicklung";
            
        }
        else if (l == "V" || l == "v")
        {

        //hier kann wenn gewünscht eine Begrenzung von Tickets und Teilnehmern eingestellt werden
        cout << "Maximum für Ticket und Personen Anzahl [J]a [N]ein: ";
        cin >> begrenzung;
        if (begrenzung == "J" || begrenzung == "j")
        {
            cout << "Maximale Anzahl Tickets: ";
            cin >> TicketMaxAnzahl;
            cout << "Teilnehmer Anzahl: ";
            cin >> Teilnehmer;
        }
        
        //wenn bei der eingabe die anzahl an teilnehmer über der maximalenticket anzahl ist wird hier ein error ausgegeben
        if (Teilnehmer > TicketMaxAnzahl)
        {
            cout << "[error] Ups die Angegebende Teilnehmer Anzahl ist mehr als die Maximale anzal an tickets\n";
            createTicket();
        }
        //wenn die teilnehmerzahl unter der maximalen ticket zahl geht kann man ab hier die tickets normal weiter erstellen
        else if (Teilnehmer < TicketMaxAnzahl || begrenzung == "N" || begrenzung == "n")
        {
           
        cout << "Ticket feinheiten einstellen [J]a [N]ein: ";
        cin >> l;
        if (l == "J" || l == "j")
        {
            cout << "Ticketname: ";
            cin >> Ticketname;
            cout << "Veranstaltung: ";
            cin >> veranstaltung;
            cout << "Datum: ";
            cin >> Datum;
            if (Datum == "0")
            {
               m = "N";
            }
            
        }
        
        
        cout << "Anzahl Gruppen: ";
        cin >> gruppenanzahl;
        //hier ist eine vereinfachte bedienung wenn es keine gruppen tickets geben soll wird einfach hier der wert 0 eingegeben
        if (gruppenanzahl > 0)
        {
            cout << "Kleingruppengröße: ";
            cin >> kleingruppengroese;
            cout << "Großgruppengröße: ";
            cin >> großgruppengroese;  
            e == kleingruppengroese + großgruppengroese;//hier werden die gruppengrößen zusammen addiert und abgespeichert da diese dann nicht mehr von normalen genutzt werden kann
        }
        
        //hier kann man dann noch die preise einsetzen
        cout << "[P]reis einstellen [W]eiter(kostenlose Tickets erstellen): ";
        cin >> zinpuz;
        if (zinpuz == "P" || zinpuz == "p")
        {
            cout << "Preis Kind: ";
            cin >> Preiskind;
            cout << "Preis Erwachsene: ";
            cin >> PreisErwachsene;
            //wenn der preis von kind und erwachsenen gleich ist werden aus beiden ein algemein preis
            if (Preiskind == PreisErwachsene)
            {
                algemeinpreis = Preiskind;
            }
            cout << "Preis Familie: ";
            cin >> PreisFamilie;
            if (gruppenanzahl > 0)
            {
                cout << "Preis Kleingruppe: ";
                cin >> Preiskleingruppe;
                cout << "Preis Großgruppe: ";
                cin >> Preisgroßgruppe;
            }
            
            
        }
        else if (zinpuz == "W" || zinpuz == "w")
        {
            PreisFamilie = 0;
            Preisgroßgruppe = 0;
            Preiskleingruppe = 0;
            Preiskind = 0;
            PreisErwachsene = 0;
        }
        
        
        cout << "noch ein Ticket erstellen [J]a [N]ein [L]öschen [B]earbeiten : ";//ab hier ist noch ein kleiner dialog
        cin >> T;
        if (T == "L" || T == "l")
        {
            removeticket();
        }
        else if (T == "B" || T == "b")
        {
            Ticketbearbeitung();
        }
        
        }

        }
    } while (T == "J" || T == "j");//die ganze create ticket befindet sich in einer do while schleife sie läuft einmal min. durch und prüft dann ob sie noch einmal durchlaufen soll
    
           
}

//Rabattfunktion
int Rabat(){
    Rabattpreis = gesammtpreis / 100 * Rabatwert;
    cout << "Preis: " << Rabattpreis ;
}



//Ticket Ausgabe
int drawticket(){ 
    if (ticketzahl > TicketMaxAnzahl)
    {
        cout << "Tut uns leid es sind nicht mehr tickets möglich.";
    }
    
    else if (ticketzahl < TicketMaxAnzahl)
    {
        
    
    
    if (Ticketart == "G")
    {
        if (Ticketanzahl == "E" || Ticketanzahl == "e")
        {
            for (int i = 0; i < Personenanzahl; i++)
            {
                system ("clear");
                cout << "Gruppeneinzelticket Preis: " << gesammtpreis << "€\n";
                if (m == "0")
                {
                    cout <<"Datum nicht festgelegt";
                }
                cout << Datum;
                
                
            }
            
        }
        else if (Ticketanzahl == "G" || Ticketanzahl == "g")
        {
            system ("clear");
            cout << "Gruppenticket Preis: " << gesammtpreis << "€";
            if (m == "0")
                {
                    cout <<"Datum nicht festgelegt";
                }
                cout << Datum;
             
        }
        
        
        
    }
    else if (Ticketart == "F")
    {
        system ("clear");
        cout << "Familienticket Preis: " << gesammtpreis << "€";
        if (m == "0")
                {
                    cout <<"Datum nicht festgelegt";
                }
                cout << Datum;
        
    }
    else if (Ticketart == "E")
    {
        system ("clear");
        cout << "Einzelticket Preis: " << gesammtpreis <<"€";
        if (m == "0")
                {
                    cout <<"Datum nicht festgelegt";
                }
                cout << Datum;
        
    }
    
    
    }
    
}


//Hauptteil für Familie
int Familie(){
    
   gesammtpreis = PreisFamilie; 
   zwisch = e - Teilnehmer;
   Ticketart = "F";
   ticketzahl + 1;
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
   zwisch + 1;
   cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {

       if (zwisch > Teilnehmer )
       {
           cout << "Tut uns leid wir sind ausgebucht";
       }
       
        else if (zwisch < Teilnehmer)
        {
            ticketform();
        }
        

   }
   else if (q == "N" || q == "n")
   {
        drawticket();
   }
   

}
 
 //Hauptteil für die Großgruppe
 int Grossgruppe() {

     if (gru > gruppenanzahl)
     {
       cout << "Tut uns leid es sind keine weiteren Gruppentickets mehr möglich";
     }
     else if (gru < gruppenanzahl)
    {

     Ticketart = "G";
     gesammtpreis = Preisgroßgruppe;
     ticketzahl + 1;
     if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   
   if (f = 1)
   {
       Rabat();
   }
   gru + 1;
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

 }

//Hauptteil für die Kleingruppe
 int kleingruppe(){

     if (gru > gruppenanzahl)
     {
       cout << "Tut uns leid es sind keine weiteren Gruppentickets mehr möglich";
     }
     
    else if (gru < gruppenanzahl)
    {
        
    
    
     Ticketart = "G";
     gesammtpreis = Preiskleingruppe;
     ticketzahl + 1;
     if (Rabattwert > 0)
   {
        Rabattfrage();
   }
   
   if (f = 1)
   {
       Rabat();
   }
   gru + 1;
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

 }

//Hauptteil für Kind
int Kind(){
    
    zwisch = e -Teilnehmer;
    gesammtpreis = Preiskind;
    Ticketart = "E";
    ticketzahl + 1;
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
   zwisch + 1;
   cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {
       if (zwisch > Teilnehmer )
       {
           cout << "Tut uns leid wir sind ausgebucht";
       }
       
        else if (zwisch < Teilnehmer)
        {
            ticketform();
        }
   }
   else if (q == "N" || q == "n")
   {
        drawticket();
   }



}

//Hauptteil für erwachsende
int erwachsende(){

    zwisch = e -Teilnehmer;
    Ticketart = "E";
    gesammtpreis = PreisErwachsene; 
    ticketzahl + 1;
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
   zwisch + 1;
   cout << "\nweiteres Ticket kaufen [J]a [N]ein: ";
   cin >> q;
   if (q == "J" || q == "j")
   {
       if (zwisch > Teilnehmer )
       {
           cout << "Tut uns leid wir sind ausgebucht";
       }
       
        else if (zwisch < Teilnehmer)
        {
            ticketform();
        }
   }
   else if (q == "N" || q == "n")
   {
        drawticket();
   }
}


//Hauptteil Ticket
 int Ticket()
{string input;    
    cout << " [G]ruppe [E]inzeln [F]amilie\n";
    cout << "input: ";
    cin >> input; 

    if (input == " G" || input == "g")
    { 
        int entscheidung;
        cout << "anzahl der Personen:";
        cin >> Personenanzahl;
        
            if (Personenanzahl < kleingruppengroese)
            {
                kleingruppe();
            }
            else if (Personenanzahl > großgruppengroese)
            {
                Grossgruppe();
            }
            
    }

    else if (input == "E" || input == " e")
    {
        string typ;
        cout << "[K]ind oder [E]rwachsen\n";
        cout << "input: ";
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


