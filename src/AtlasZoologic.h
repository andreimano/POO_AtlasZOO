#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Regn.h"

using namespace std;

template <class T>
class AtlasZoologic {
public:
  // AtlasZoologic();
  void operator += (const T&);
  bool gol() const;
  void afisare() const;
private:
  static unsigned int nrAnimale;
  vector<Regn*> Pagini;
};

template<class T>
unsigned int AtlasZoologic<T>::nrAnimale = 0;

template<class T>
void AtlasZoologic<T>::operator += (const T& o) {
  Pagini.push_back(o);
  ++nrAnimale;
  // try {
  //   Pagini.push_back(o);
  // } catch(exception e) {
  //   cerr << "Catched: " << e.what() << endl;
  // }
}

template<class T>
bool AtlasZoologic<T>::gol() const {
  return (nrAnimale == 0);
}

template<class T>
void AtlasZoologic<T>::afisare() const {
  for(unsigned int i = 0; i < nrAnimale; ++i) {
    cout << endl;
    Pagini[i] -> afisare();
  }
}
