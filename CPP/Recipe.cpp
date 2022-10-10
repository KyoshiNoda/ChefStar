#include "Recipe.h"
void Recipe::setName(string Name)
{
    name = Name;
}
string  Recipe::getName()
{
    return name;
}
void Recipe::setIngredients(vector<Ingredient> ingredientsNeeded)
{
    ingredients = ingredientsNeeded;
}
vector <Ingredient> Recipe::getIngredients()
{
    return ingredients;
}

void Recipe::selectFoods(vector <Ingredient> store)
{
    vector <Recipe> foodList(10);
    vector <string> thingsNeeded;
    vector <Ingredient> currentFood;
    ifstream recipeBook;
    recipeBook.open("recipe.txt");
    string currentLine;
    int k = 0;
    while (getline(recipeBook, currentLine))
    {
        unsigned long index = currentLine.find("|");
        string foodName = currentLine.substr(0, index);
        unsigned long space = currentLine.find(" ");
        string ingredient = currentLine.substr(index + 1, space - index - 1);
        thingsNeeded.push_back(ingredient);
        foodList.at(k).setName(foodName);
        for (int i = 0; i < 10; i++)
        {
            unsigned long nextWordIndex = currentLine.find(ingredient) + ingredient.size() + 1;
            string nextWord;
            unsigned long nextSpace = currentLine.find(" ", nextWordIndex);
            nextWord = currentLine.substr(nextWordIndex, nextSpace - nextWordIndex);
            ingredient = nextWord;
            if (ingredient == "end")
            {
                break;
            }
            thingsNeeded.push_back(ingredient);
        }
        for (int i = 0; i < thingsNeeded.size(); i++)
        {
            for (int z = 0; z < store.size(); z++)
            {
                if (store.at(z).getName() == thingsNeeded.at(i))
                {
                    currentFood.push_back(store.at(z));
                    break;
                }
            }
        }
        foodList.at(k).setIngredients(currentFood);
        currentFood.clear();
        thingsNeeded.clear();
        k++;
    }
    cout << "===============================================================" << endl;
    cout << "                  Recipe Book!                                 " << endl;
    for (int i = 0; i < foodList.size(); i++)
    {
        vector <Ingredient> currentFood = foodList.at(i).getIngredients();

        cout << foodList.at(i).getName() << "- ";
        for (int j = 0; j < currentFood.size(); j++)
        {
            cout << currentFood.at(j).getName() << " ";
        }
        cout << endl;
        cout << endl;
    }
    cout << "Press a number to go back!" << endl;
    cout << "===============================================================" << endl;
    int next;
    cin >> next;
}

