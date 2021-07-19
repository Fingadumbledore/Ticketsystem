#include <iostream>
#include "gutschein.cpp"
#include "ticket.cpp"
#include "hilfe.cpp"
using namespace std;

int verwalten (){

 string art;
 cout << "[G]utscheine verwalten [T]icket's verwalten [S]ystem verwalten [H]ilfe: ";
 cin >> art;
if (art == "G" || art == "g")
{
    cout << "Gutscheine Verwalten";
    Ticketbearbeitung();
}

else if (art == "T" || art == "t")
{
    cout << "Ticket's verwalten";
    Ticketbearbeitung();
}
else if (art == "S" || art == "s")
{
    cout << "Ticket system verwalten";
}
else if (art == "H" || art == "h")
{
    bearbeitungshilfe();
}


}