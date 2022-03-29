#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Shopping.h"
using namespace std;

class Recipe : public Shopping
{
private:
	string name;
	vector <Ingredient> ingredients;
public:
	void setName(string Name);
	string getName();
	void setIngredients(vector<Ingredient>ingredientsNeeded);
	vector <Ingredient> getIngredients();
	void selectFoods(vector<Ingredient> store);
};
