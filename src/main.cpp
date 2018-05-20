/*
Tema 2. La ora de Biologie, copiii din ciclul gimnazial învața ca regnul
animal se împarte în 2 grupuri: nevertebrate și vertebrate. La rândul lor,
vertebratele se împart în pesti, păsări, mamifere și reptile.
Cerinta suplimentara:
- Să se adauge toate campurile relevante pentru modelarea acestei
probleme.- Sa se construiasca clasa template AtlasZoologic care sa conțină un
număr de animale (incrementat automat la adaugarea unei noi file) și un
vector de pointeri la obiecte de tip Regn, alocat dinamic. Sa se
supraincarce operatorul += pentru inserarea unei fise de observație a unui
animal în lista, indiferent de tipul acestuia.
- Sa se construiasca o specializare a acestei clase pentru un tip de data
la alegere care sa conțină și sa afiseze doar numarul de nevertebrate.
*/
#include <iostream>
#include "Regn.h"
#include "Pesti.h"
#include "Pasari.h"
#include "Mamifere.h"
#include "Reptile.h"
#include "AtlasZoologic.h"
#include "Nevertebrate.h"

int main() {
  int n;
  cout << "Introdu un numar n de pagini: ";
  cin >> n;
  // Regn*[n] _pagini;
  AtlasZoologic<Regn*> atlas;
  while(n--) {
    int alegere;
    cout << "Au ramas " << n+1 << " pagini. Ce vrei sa adaugi?\n";
    cout << "1. Un barbat.\n";
    cout << "2. O femeie.\n";
    cout << "3. O maimuta.\n";
    cout << "4. O maimuta care a evoluat intr-un om.\n";
    cout << "5. O stiuca.\n";
    cout << "6. O nevertebrata.\n";
    cin >> alegere;

    try {
      switch (alegere) {
        case 1:
          atlas += (new Barbat);
          break;
        case 2:
          atlas += (new Femeie);
          break;
        case 3:
          atlas += (new Maimuta);
          break;
        case 4:
          atlas += ( dynamic_cast<Barbat*>(new Maimuta) );
          break;
        case 5:
          atlas += (new PesteGeneric("Stiuca"));
          break;
        case 6:
          Nevertebrate *aux = new Nevertebrate;
          cin >> *aux;
          atlas += aux;
          break;
      }
    } catch (exception &e) {
      cerr << "Catched: " << e.what() << endl;
    }
  }
  atlas.afisare();

  cout << "\n Numar de nevertebrate din atlas: " << Nevertebrate::getNrNevertebrate() << endl;
}
