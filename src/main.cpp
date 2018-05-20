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

#include "Pesti.h"
#include "Pasari.h"

int main() {
  PesteGeneric fishy("Stiuca");
  fishy.afisare();
  PesteGeneric* fishy2 = new PesteGeneric(fishy);
  fishy2->afisare();
  PasareZburatoare cioara("cra cra", "cioara");
  cioara.afisare();
}
