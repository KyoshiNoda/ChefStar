#pragma once
#include <iostream>
using namespace std;
//////////////////
// class Name: Ingredient
// Description: this class will be each Ingredient used in recipe and shopping.
//  Just like in real life, each ingreident contains a name, calories and a price at the store
// Usage: This is used as a vector for the classes Recipe and Shopping
//////////////////
class Ingredient
{
private:
    string name;
    double price;
public:
    Ingredient();
    void setName(string ingredientName);
    string getName();
    void setPrice(double value);
    double getPrice();


};
