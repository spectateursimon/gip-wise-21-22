#include <iostream>
using namespace std;

int main() {
    //Ausgabe des Satzes „Hallo Welt!“

    // endl ist eine weitere Option für „\n“
    cout << "Hallo Welt!" << endl;
    
    //system("PAUSE"); ist keine gültige Funktion fuer Mac, daher nachfolgender Code:
    system( "read -n 1 -s -p \"Drücken Sie eine beliebige Taste...\"" );

    //Rückgabewert 0: Programm wurde fehlerfrei ausgeführt 
    return 0;

    /* 01.04 Werden system("PAUSE") und return 0; als Blockkommentar gesetzt,
    so beendet das Termial das Programm direkt und wartet nicht auf User-input.
    Das Terminal gibt Code „Process exited with status 0“ aus.*/

    /* 01.05 Wird der komplette Code innerhalb des Main auskommentiert, so kompiliert das Terminal
    zwar das Programm, führt jedoch logischerweise nichts aus.*/  

    /* 01.06: Wird die “0“ in “return 0;" per Zeilenumbruch nach unten gesetzt,
    läuft das Programm problemlos wie zuvor.*/

    // 01.07 Das Programm kompiliert nicht mehr. Fehlermeldung: "Es wurde ein ";" erwartet."

    /* 01.08 Stehen mehrere Anweisungen in einer Zeile, so kompiliert und läuft das Programm fehlerfrei.
    Voraussetzung hier bei ist, dass jede Anweisung jeweils mit einem Semikolon endet.*/

    /* 01.09 Auch wenn alle Anweisungen in geschweiften Klammern sind, kompiliert und funktioniert
    das Programm fehlerfrei.*/
}
