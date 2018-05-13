#include <iostream>
#include "Pasari.h"

Pasari::Pasari()
  : Vertebrate(),
    mFamilie(new string("Pasari"))
{}

Pasari::~Pasari() {
  delete mFamilie;
}

string Pasari::getFamilie() const {
  return *mFamilie;
}

void Pasari::afisare() const {
  Vertebrate::afisare();
  cout << getFamilie() << endl;
}
