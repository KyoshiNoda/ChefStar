#include "Ingredient.h"
Ingredient::Ingredient()
{
	name = "None";
	price = 0.0;
}

void Ingredient::setName(string ingredientName)
{
	name = ingredientName;
}

void Ingredient::setPrice(double value)
{
	price = value;
}

string Ingredient::getName()
{
	return name;
}

double Ingredient::getPrice()
{
	return price;
}
