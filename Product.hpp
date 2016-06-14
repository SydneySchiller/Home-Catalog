//Programmer:Sydney Schiller
//ID: 1466911

#pragma once

#include <string>
using std::string;

#include <ostream>
using std::ostream;

class Product
{
public:
  string itemType; // key
  int monthPur = 0;
  int dayPur = 0;
  int yearPur = 0;
  int dayExp = 0;
  int monthExp = 0;
  int yearExp = 0;
  int rating; // on a scale of 1 to 10
  bool expired;

  void expiredProduct();
  bool operator==(const Product& p) const;
  Product& operator=(const Product& p);
  friend ostream& operator<<(ostream& out, const Product& p);
};

class Makeup : public Product
{
public:
  string brandName;
  string productLine; //key
  bool crueltyFree;

  bool operator==(const Makeup& m) const;
  Makeup& operator=(const Makeup& p);
  friend ostream& operator<<(ostream& out, const Makeup& m);
};


