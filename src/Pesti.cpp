#include <iostream>
#include "Pesti.h"

Pesti::Pesti()
  : Vertebrate(),
    mFamilie(new string("Pesti")),
    mSunet(new string("Wub Wub Wub..."))
{}

Pesti::~Pesti() {
  delete mFamilie;
  delete mSunet;
}

string Pesti::getFamilie() const {
  return *mFamilie;
}

string Pesti::getSunet() const {
  return *mSunet;
}

void Pesti::afisare() const {
  Vertebrate::afisare();
  cout << getFamilie() << endl << getSunet() << endl;
}

PesteGeneric::PesteGeneric()
  : Pesti::Pesti(),
    mSpecie(new string(""))
  {}

PesteGeneric::PesteGeneric(string specie)
  : Pesti::Pesti(),
    mSpecie(new string(specie))
  {}

PesteGeneric::~PesteGeneric() {
  delete mSpecie;
}

string PesteGeneric::getSpecie() const {
  return *mSpecie;
}

void PesteGeneric::afisare() const {
  Pesti::afisare();
  cout << getSpecie() << endl;
}
