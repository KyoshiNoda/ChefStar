#pragma once
#include <iostream>
#include "Ingredient.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Name: Shopping
// Description: this class will be simulating a person shopping at the store,
//     -there are private members for the "catergories" of foods you would find in at the store,
//     -a total price you spent each time you went the store
//     - all of the data is taken from the text file Ingredients.txt (parsed all the data into here)
//
//
// Usage: Used for shopping and putting it in your inventory/bag
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Shopping
{
private:
    double totalSpent;
    vector <Ingredient> veggies; //category
    vector <Ingredient> meats; //category
    vector <Ingredient> condiments; //category
    vector <Ingredient> grains; //category
    vector <Ingredient> dairy; //category
    vector <Ingredient> sweets; //category
    vector <Ingredient> other; //category
    vector <Ingredient> shoppingCart; // SHOPPING CART
protected:
    vector <Ingredient> allIngredients; // this is shared by Recipe class
public:
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                       SETTERS
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void setTotalSpent(double spend);
    void setAllIngredients(vector<Ingredient> cart);
    void setVeggies(vector<Ingredient> Veggies);
    void setMeats(vector<Ingredient> Meats);
    void setCondiments(vector<Ingredient> Condiments);
    void setGrains(vector<Ingredient> Grains);
    void setDairy(vector<Ingredient> Dairy);
    void setSweets(vector<Ingredient> Sweets);
    void setOther(vector<Ingredient> Other);
    void setShoppingCart(vector <Ingredient> cart);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                       GETTERS
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    double getTotalSpent();
    vector <Ingredient> getAllIngredients();
    vector <Ingredient> getVeggies();
    vector <Ingredient> getMeats();
    vector <Ingredient> getCondiments();
    vector <Ingredient> getGrains();
    vector <Ingredient> getDairy();
    vector <Ingredient> getSweets();
    vector <Ingredient> getOther();
    vector <Ingredient> getShoppingCart();

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Function Name: shoppingText()
    //
    //
    // Description: shoppingText will be used to parse all the information through the text file Ingredient.txt
    //  -the function collects the name,price and calories of EACH ingrident and passes each to the appopriate vector
    //
    // Usage: To parse the data from Ingredients
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void shoppingText();
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Function Name: printShop()
    //
    //
    // Description: printShop() actually takes all the vectors and gives you the information on what to buy. This is the print tool you see on the console
    //  -Each loop it will give you the list of categories to choose from (veggies,meats,grains,dairy,sweets etc.)
    // -After this it will give you the list of foods in that set category you chose.
    // After doing this, you can check out and deduct money from your account (This is from the money class)
    //
    // Usage: the user can now shop for items that will go towards their bagpack so they can start cooking! (This will be taken out of money)
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void printShop();
};
