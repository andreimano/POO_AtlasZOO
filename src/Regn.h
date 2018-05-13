#pragma once

#include <string>

using namespace std;

class Regn { // interface
public:
  virtual string getGrup() const = 0;
  virtual string getFamilie() const = 0;
  virtual ~Regn() = 0;
};

inline Regn::~Regn() {}
