#pragma once
#include <string>
#include "Vertebrate.h"

using namespace std;

class Pesti : public Vertebrate {
public:
  Pesti();
  virtual ~Pesti();
  string getFamilie() const;
  string getSunet() const;
  virtual string getSpecie() const = 0;
  virtual void afisare() const;
private:
  const string* const mFamilie;
  const string* const mSunet;
};

class PesteGeneric : public Pesti {
public:
  PesteGeneric();
  explicit PesteGeneric(string);
  virtual ~PesteGeneric();
  string getSpecie() const;
  virtual void afisare() const;
protected:
  string* mSpecie;
};
