#include <iostream>
#include "Vertebrate.h"

Vertebrate::Vertebrate()
  : mGrup(new std::string("Vertebrate"))
{}

Vertebrate::~Vertebrate() {
  delete mGrup;
}

std::string Vertebrate::getGrup() const {
  return *mGrup;
}

void Vertebrate::afisare() const {
  cout << "Grup: " << getGrup() << endl;
}
