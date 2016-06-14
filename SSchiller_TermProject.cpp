//Programmer:Sydney Schiller
//ID: 1466911

#include "stdafx.h"
#include "LinkedList.hpp"
#include "Product.hpp"

//testing
#include "HashTable.hpp"

#include <string>
using std::string;

#include <sstream>
using std::stringstream;

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//hash function prototypes
int hash(const Product &obj);
int hash(const Makeup &obj);

int main()
{
  // programmer's identification
  cout << "Programmer: Sydney Schiller\n";
  cout << "Programmer's ID: 1466911\n";
  cout << "File: " << __FILE__ << endl;
  cout << endl;

  string mystr;

  //variable declarations
  Makeup goods, goods1, goods2, goods3, goods4, goods5;
  Makeup goods6, goods7, goods8, goods9, goods10;
  LinkedList<Makeup> BeautyBox(hash);

  //preload some products in for demonstration of program
  goods.brandName = "Benton";
  goods.productLine = "Snail Bee";
  goods.itemType = "Essence";
  goods.monthPur = 5;
  goods.dayPur = 18;
  goods.yearPur = 2016;
  goods.monthExp = 6;
  goods.dayExp = 17;
  goods.yearExp = 2016;
  goods.rating = 8;
  goods.crueltyFree = false;

  goods1.brandName = "Nyx";
  goods1.productLine = "Ultra Matte";
  goods1.itemType = "Liquid eyeliner";
  goods1.monthPur = 3;
  goods1.dayPur = 1;
  goods1.yearPur = 2016;
  goods1.monthExp = 6;
  goods1.dayExp = 1;
  goods1.yearExp = 2016;
  goods1.rating = 6;
  goods1.crueltyFree = true;

  goods2.brandName = "It's Skin";
  goods2.productLine = "effectors";
  goods2.itemType = "Vit C";
  goods2.monthPur = 5;
  goods2.dayPur = 14;
  goods2.yearPur = 2015;
  goods2.monthExp = 8;
  goods2.dayExp = 14;
  goods2.yearExp = 2015;
  goods2.rating = 4;
  goods2.crueltyFree = true;

  goods3.brandName = "Missha";
  goods3.productLine = "Magic M";
  goods3.itemType = "BB Cushion";
  goods3.monthPur = 4;
  goods3.dayPur = 18;
  goods3.yearPur = 2016;
  goods3.monthExp = 4;
  goods3.dayExp = 18;
  goods3.yearExp = 2017;
  goods3.rating = 8;
  goods3.crueltyFree = true;

  goods4.brandName = "Tony Moly";
  goods4.productLine = "Pocket Bunny";
  goods4.itemType = "Sleek Mist";
  goods4.monthPur = 5;
  goods4.dayPur = 18;
  goods4.yearPur = 2015;
  goods4.monthExp = 12;
  goods4.dayExp = 18;
  goods4.yearExp = 2015;
  goods4.rating = 8;
  goods4.crueltyFree = false;

  goods5.brandName = "Sebamed";
  goods5.productLine = "Ph 5.5";
  goods5.itemType = "Cleanser";
  goods5.monthPur = 1;
  goods5.dayPur = 18;
  goods5.yearPur = 2015;
  goods5.monthExp = 6;
  goods5.dayExp = 17;
  goods5.yearExp = 2016;
  goods5.rating = 10;
  goods5.crueltyFree = true;

  goods6.brandName = "Klairs";
  goods6.productLine = "Charcoal";
  goods6.itemType = "bar soap";
  goods6.monthPur = 12;
  goods6.dayPur = 25;
  goods6.yearPur = 2015;
  goods6.monthExp = 12;
  goods6.dayExp = 25;
  goods6.yearExp = 2016;
  goods6.rating = 9;
  goods6.crueltyFree = true;

  goods7.brandName = "Hada Labo";
  goods7.productLine = "Toner";
  goods7.itemType = "Lotion";
  goods7.monthPur = 5;
  goods7.dayPur = 18;
  goods7.yearPur = 2014;
  goods7.monthExp = 6;
  goods7.dayExp = 17;
  goods7.yearExp = 2015;
  goods7.rating = 6;
  goods7.crueltyFree = false;

  goods8.brandName = "Urban Decay";
  goods8.productLine = "Vice 3";
  goods8.itemType = "Eyeshadow Palette";
  goods8.monthPur = 5;
  goods8.dayPur = 18;
  goods8.yearPur = 2013;
  goods8.monthExp = 6;
  goods8.dayExp = 17;
  goods8.yearExp = 2014;
  goods8.rating = 7;
  goods8.crueltyFree = true;

  goods9.brandName = "Origins";
  goods9.productLine = "Natural Charcoal";
  goods9.itemType = "Mask";
  goods9.monthPur = 4;
  goods9.dayPur = 3;
  goods9.yearPur = 2015;
  goods9.monthExp = 4;
  goods9.dayExp = 4;
  goods9.yearExp = 2014;
  goods9.rating = 3;
  goods9.crueltyFree = true;

  goods10.brandName = "Secret Key";
  goods10.productLine = "Milk";
  goods10.itemType = "Toner";
  goods10.monthPur = 5;
  goods10.dayPur = 18;
  goods10.yearPur = 2016;
  goods10.monthExp = 6;
  goods10.dayExp = 17;
  goods10.yearExp = 2016;
  goods10.rating = 8;
  goods10.crueltyFree = true;

  //calculate expirations
  goods.expiredProduct();
  goods1.expiredProduct();
  goods2.expiredProduct();
  goods3.expiredProduct();
  goods4.expiredProduct();
  goods5.expiredProduct();
  goods6.expiredProduct();
  goods7.expiredProduct();
  goods8.expiredProduct();
  goods9.expiredProduct();
  goods10.expiredProduct();

  //insert items
  BeautyBox.push(goods);
  BeautyBox.push(goods1);
  BeautyBox.push(goods2);
  BeautyBox.push(goods3);
  BeautyBox.push(goods4);
  BeautyBox.push(goods5);
  BeautyBox.push(goods6);
  BeautyBox.push(goods7);
  BeautyBox.push(goods8);
  BeautyBox.push(goods9);
  BeautyBox.push(goods10);


  //interface variables
  int choice = 0;


  int mE = 0, dE = 0, yE = 0, mP = 0, dP = 0, yP = 0, rating = 0;
  //Makeup item;

  do {
    cout << "  -------------------Welcome to your Home Catalog!------------------" << endl;
    cout << "  Enter in the number that is beside the task you'd like to complete" << endl;
    cout << "  ------------------------------------------------------------------" << endl;
    cout << "  -                     1. Add a new product                       -" << endl;
    cout << "  -                     2. remove a product                        -" << endl;
    cout << "  -                     3. search for a product                    -" << endl;
    cout << "  -                     4. sort products                           -" << endl;
    cout << "  -                     5. update a product                        -" << endl;
    cout << "  -                     6. view all products                       -" << endl;
    cout << "  -                     7. empty product catalog                   -" << endl;
    cout << "  -                     0. Exit Product Manager                    -" << endl;
    cout << "  ------------------------------------------------------------------" << endl;
    getline(cin, mystr);
    stringstream(mystr) >> choice;

    if (choice == 1) {
      // set local variables
      Makeup item;
      char C;
      bool cf;
      string brand, type, line;
      cout << "Enter Product Specifics below: " << endl;

      //set brand
      cout << "Brand Name: " << endl;
      getline(cin, brand);
      item.brandName = brand;

      //set product line
      cout << "Product Line: " << endl;
      getline(cin, line);
      item.productLine = line;

      //set item type
      cout << "Item Type: " << endl;
      getline(cin, type);
      item.itemType = type;

      //set rating
      cout << "Rating: " << endl;
      getline(cin, mystr);
      stringstream(mystr) >> rating;
      item.rating = rating;

      //set date purchased
      cout << "Date Purchased [mm/dd/yyyy]: " << endl;
      getline(cin, mystr);
      stringstream(mystr) >> mP >> C >> dP >> C >> yP;
      item.monthPur = mP;
      item.dayPur = dP;
      item.yearPur = yP;

      //set expiration date
      cout << "Expiration Date [mm/dd/yyyy]: " << endl;
      getline(cin, mystr);
      stringstream(mystr) >> mE >> C >> dE >> C >> yE;
      item.monthExp = mE;
      item.dayExp = dE;
      item.yearExp = yE;

      //set animal testing
      cout << "Cruelty Free [Y or N]: " << endl;
      getline(cin, mystr);
      if (mystr == "Y") {
        cf = true;
      }
      else if (mystr == "N") {
        cf = false;
      }
      else {
        cout << "Invalid Answer" << endl;
      }
      item.crueltyFree = cf;
      item.expiredProduct();
      BeautyBox.push(item);
    }

    else if (choice == 2) {

      //set local variables
      Makeup temp;
      string line;

      //remove item
      cout << "Enter the product line of the product you are trying to remove: " << endl;
      getline(cin, line);
      temp.productLine = line;
      BeautyBox.pop(temp);
    }

    else if (choice == 3) {

      //set product line
      Makeup temp;
      string linel;
      cout << "Enter the product line of the product you are trying to find: " << endl;
      getline(cin, linel);
      temp.productLine = linel;
      BeautyBox.search(temp);
    }

    else if (choice == 4) {

      int sortChoice = 0;
      string mystr1;
      cout << "Select Sorting Method" << endl;
      cout << "1. rating" << endl;
      cout << "2. brand name" << endl;
      cout << "3. expiration date" << endl;
      getline(cin, mystr1);
      stringstream(mystr1) >> sortChoice;
      if (sortChoice == 1) {
        BeautyBox.sortRating();
      }
      else if (sortChoice == 2) {
        BeautyBox.sortBrand();
      }
      else if (sortChoice == 3) {
        BeautyBox.sortExpiration();
      }
      else
        cout << "Sorting Method doesn't exist :(" << endl;
    }
    else if (choice == 5) {
      //declare local variables
      Makeup old, newM;
      string mystr, choice2, edit2;
      int edit;
      cout << "Enter the product line of the item you'd like to edit: " << endl;
      getline(cin, mystr);
      old.productLine = mystr;
      BeautyBox.retrieved(old);
      newM = old;
      do {
        cout << "would you like to edit: " << endl;
        cout << "1. Brand name" << endl;
        cout << "2. Product Line" << endl;
        cout << "3. Item Type" << endl;
        cout << "4. rating" << endl;
        cout << "0. nothing" << endl;
        cout << endl;
        getline(cin, choice2);
        if (choice2 == "1") {
          cout << "New Brand Name: " << endl;
          getline(cin, edit2);
          newM.brandName = edit2;

        }
        else if (choice2 == "2") {
          cout << "New Product Line: " << endl;
          getline(cin, edit2);
          newM.productLine = edit2;

        }
        else if (choice2 == "3") {
          cout << "New Item Type: " << endl;
          getline(cin, edit2);
          newM.itemType = edit2;

        }
        else if (choice2 == "4") {
          cout << "New Rating: " << endl;
          getline(cin, edit2);
          stringstream(edit2) >> edit;
          newM.rating = edit;
        }
      } while (choice2 != "0");
      BeautyBox.update(old, newM);
    }
    else if (choice == 6) {
      BeautyBox.displayArr();
    }
    else if (choice == 7) {
      BeautyBox.empty();
    }
    else if (choice == 0) {
      cout << "Goodbye!" << endl;
    }

  } while (choice != 0);


  getline(cin, mystr);
}


int hash(const Product &obj)
{
  int sum = 0;
  for (int i = 0; i < int(obj.itemType.length()) - 1; i++)
    sum += obj.itemType[i];
  return sum % 17;
}

int hash(const Makeup &obj)
{
  int sum = 0;
  for (int i = 0; i < int(obj.productLine.length()) - 1; i++)
    sum += obj.productLine[i];
  return sum % 17;
}