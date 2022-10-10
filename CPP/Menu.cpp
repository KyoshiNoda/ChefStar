#include "Menu.h"
void displayMenu()
{
    cout << "=================================" << endl;
    cout << "1) Go Shopping!" << endl;
    cout << "2) Recipe Book!" << endl;
    cout << "3) Make Money!" << endl;
    cout << "4) Back Pack" << endl;
    cout << "5) Quit the program" << endl;
    cout << "=================================" << endl;
}
void takeInput(int input)
{
    Money currentValue;
    Shopping all;
    vector <Ingredient> Bag;
    while (input != 5)
    {
        if (input == 1)
        {
            double total;
            Shopping display;
            vector <Ingredient> currBag;
            display.printShop();
            currBag = display.getShoppingCart();
            for (int i = 0; i < currBag.size(); i++)
            {
                Bag.push_back(currBag.at(i));
            }
            total = display.getTotalSpent();
            currentValue.subtractMoney(total);
            displayMenu();
            cin >> input;
        }
        else if (input == 2)
        {
            all.shoppingText();
            vector <Ingredient> AllItems1 = all.getAllIngredients();
            Recipe recipe;
            recipe.selectFoods(AllItems1);
            system("CLS");
            displayMenu();
            cin >> input;
        }
        else if (input == 3)
        {
            currentValue.makeMoney();
            cout << "You current have $" << currentValue.getMoney() << " left" << endl;
            displayMenu();
            cin >> input;
        }
        else if (input == 4)
        {
            if (Bag.size() == 0)
            {
                cout << "Your back pack is empty (Check out the store!)" << endl;
                displayMenu();
                cin >> input;
            }
            else
            {
                for (int i = 0; i < Bag.size(); i++)
                {
                    cout << Bag.at(i).getName() << " ";
                }
                cout << endl;
                displayMenu();
                cin >> input;
            }
        }
        else
        {
            cout << "Wrong input!" << endl;
            displayMenu();
            cin >> input;
        }
        system("CLS");
    }
}

