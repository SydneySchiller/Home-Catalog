//Programmer:Sydney Schiller
//ID: 1466911

#include "stdafx.h"
#include "Product.hpp"

#include <ostream>
using std::ostream;

#include <iostream>
using std::endl;
using std::cout;

#include <iomanip>
using std::setw;

void Product::expiredProduct() {
  int date1 = dayExp + (monthExp * 100) + (yearExp * 1000);
  int date2 = dayPur + (monthPur * 100) + (yearPur * 1000);
  if (date1 < date2)
    expired = true;
  else
    expired = false;
}

bool Product::operator==(const Product& p) const
{
  return (itemType == p.itemType
    /*&& monthPur == p.monthPur
    && dayPur == p.dayPur
    && yearPur == p.yearPur
    && dayExp == p.dayExp
    && monthExp == p.monthExp
    && yearExp == p.yearExp
    && rating == p.rating
    && expired == p.expired*/);
}

Product& Product::operator=(const Product& p)
{
  if (this == &p) return *this;

  itemType = p.itemType;
  monthPur = p.monthPur;
  dayPur = p.dayPur;
  yearPur = p.yearPur;
  dayExp = p.dayExp;
  monthExp = p.monthExp;
  yearExp = p.yearExp;
  rating = p.rating;
  expired = p.expired;

  return *this;
}

ostream& operator<<(ostream& out, const Product& p)
{
  out << "Item Type:       " << p.itemType << endl;
  out << "Consumer Rating: " << p.rating << " out of 10" << endl;
  out << "Purchase Date:   " << p.monthPur << "/" << p.dayPur << "/" << p.yearPur << endl;
  out << "Expiration Date: " << p.monthExp << "/" << p.dayExp << "/" << p.yearExp << endl;
  out << "Quality:         " << ((p.expired == true) ? "Product is Expired" : "Safe to Use") << endl;
  return out;
}

bool Makeup::operator==(const Makeup& p) const
{
  return (/*itemType == p.itemType
    && monthPur == p.monthPur
    && dayPur == p.dayPur
    && yearPur == p.yearPur
    && dayExp == p.dayExp
    && monthExp == p.monthExp
    && yearExp == p.yearExp
    && rating == p.rating
    && brandName == p.brandName
    &&*/ productLine == p.productLine
    /*&& crueltyFree == p.crueltyFree
    && expired == p.expired*/);
}

Makeup& Makeup::operator=(const Makeup& p)
{
  if (this == &p) return *this;

  itemType = p.itemType;
  monthPur = p.monthPur;
  dayPur = p.dayPur;
  yearPur = p.yearPur;
  dayExp = p.dayExp;
  monthExp = p.monthExp;
  yearExp = p.yearExp;
  rating = p.rating;
  brandName = p.brandName;
  productLine = p.productLine;
  crueltyFree = p.crueltyFree;
  expired = p.expired;

  return *this;
}

ostream& operator<<(ostream& out, const Makeup& p)
{
  out << "----------------------------------------------------" << endl;
  out << "Brand Name:      "  << p.brandName << endl;
  out << "Item:            "  << p.productLine << " " <<p.itemType << endl;
  out << "Animal Testing:  "  << ((p.crueltyFree == true) ? "Cruelty Free" : "Tested on Animals") << endl;
  out << "Consumer Rating: "  << p.rating << " out of 10" << endl;
  out << "Purchase Date:   "  << p.monthPur << "/" << p.dayPur << "/" << p.yearPur << endl;
  out << "Expiration Date: " << p.monthExp << "/" << p.dayExp << "/" << p.yearExp << endl;
  out << "Quality:         " << ((p.expired == true) ? "Product is Expired" : "Safe to Use") << endl;
  return out;
}