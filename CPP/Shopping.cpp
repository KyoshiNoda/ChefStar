#include "Shopping.h"
using namespace std;
void Shopping::setTotalSpent(double spend) { totalSpent = spend; }
void Shopping::setAllIngredients(vector<Ingredient> cart) { allIngredients = cart; }
void Shopping::setVeggies(vector<Ingredient> Veggies) { veggies = Veggies; }
void Shopping::setMeats(vector<Ingredient> Meats) {}
void Shopping::setCondiments(vector<Ingredient> Condiments) { condiments = Condiments; }
void Shopping::setGrains(vector<Ingredient> Grains) { grains = Grains; }
void Shopping::setDairy(vector<Ingredient> Dairy) { condiments = Dairy; }
void Shopping::setSweets(vector<Ingredient> Sweets) { sweets = Sweets; }
void Shopping::setOther(vector<Ingredient> Other) { other = Other; }

double Shopping::getTotalSpent() { return totalSpent; }
vector <Ingredient> Shopping::getAllIngredients() { return allIngredients; }
vector <Ingredient> Shopping::getVeggies() { return veggies; }
vector <Ingredient> Shopping::getMeats() { return meats; }
vector <Ingredient> Shopping::getCondiments() { return condiments; }
vector <Ingredient> Shopping::getGrains() { return grains; }
vector <Ingredient> Shopping::getDairy() { return dairy; }
vector <Ingredient> Shopping::getSweets() { return sweets; }
vector <Ingredient> Shopping::getOther() { return other; }
vector <Ingredient> Shopping::getShoppingCart() { return shoppingCart; }
void Shopping::shoppingText()
{
    vector <Ingredient> allItems(33);
    vector <Ingredient> Veggies(8);
    vector <Ingredient> Meats(6);
    vector <Ingredient> Condiments(6);
    vector <Ingredient> Dairy(3);
    vector <Ingredient> Sweets(4);
    vector <Ingredient> Grains(5);
    vector <Ingredient> Other(1);
    ifstream shopTxt;
    string currentLine;
    shopTxt.open("Ingredient.txt");
    int a = 0;
    int v = 0;
    int m = 0;
    int c = 0;
    int s = 0;
    int g = 0;
    int d = 0;
    int o = 0;
    while (getline(shopTxt, currentLine))
    {
        string left = "(";
        string right = ")";
        string category;
        unsigned long leftIndex = currentLine.find(left);
        unsigned long rightIndex = currentLine.find(right) - 1;
        string name, stringPrice;
        double price;
        unsigned long dash = currentLine.find("-");
        name = currentLine.substr(0, dash);
        stringPrice = currentLine.substr(dash + 1);
        price = stod(stringPrice);
        category = currentLine.substr(leftIndex + 1, rightIndex);
        if (category == "veggies)")
        {
            allItems.at(a).setName(name);
            allItems.at(a).setPrice(price);
            Veggies.at(v).setName(name);
            Veggies.at(v).setPrice(price);
            v++;
            a++;
        }
        else if (category == "meats)")
        {
            allItems.at(a).setName(name);
            allItems.at(a).setPrice(price);
            Meats.at(m).setName(name);
            Meats.at(m).setPrice(price);
            m++;
            a++;
        }
        else if (category == "condiments)")
        {
            allItems.at(a).setName(name);
            allItems.at(a).setPrice(price);
            Condiments.at(c).setName(name);
            Condiments.at(c).setPrice(price);
            c++;
            a++;
        }
        else if (category == "dairy)")
        {
            allItems.at(a).setName(name);
            allItems.at(a).setPrice(price);
            Dairy.at(d).setName(name);
            Dairy.at(d).setPrice(price);
            d++;
            a++;
        }
        else if (category == "sweets)")
        {
            allItems.at(a).setName(name);
            allItems.at(a).setPrice(price);
            Sweets.at(s).setName(name);
            Sweets.at(s).setPrice(price);
            s++;
            a++;
        }
        else if (category == "grains)")
        {
            allItems.at(a).setName(name);
            allItems.at(a).setPrice(price);
            Grains.at(g).setName(name);
            Grains.at(g).setPrice(price);
            g++;
            a++;
        }
        else if (category == "other)")
        {
            allItems.at(a).setName(name);
            allItems.at(a).setPrice(price);
            Other.at(o).setName(name);
            Other.at(o).setPrice(price);
            o++;
            a++;
        }
    }
    allIngredients = allItems;
    veggies = Veggies;
    meats = Meats;
    dairy = Dairy;
    condiments = Condiments;
    sweets = Sweets;
    grains = Grains;
    other = Other;
}

void Shopping::printShop()
{
    vector <Ingredient> cart;
    int input = 0;
    Shopping object;
    object.shoppingText();
    while (input != 9)
    {
        if (input == 8 && cart.size() > 0)
        {
            break;
        }
        cout << "============================" << endl;
        cout << "    Welcome to the shop!    " << endl;
        cout << endl;
        cout << " 1)Vegetables               " << endl;
        cout << " 2)Meats                    " << endl;
        cout << " 3)Dairy                    " << endl;
        cout << " 4)Condiments               " << endl;
        cout << " 5)Sweets                   " << endl;
        cout << " 6)Grains                   " << endl;
        cout << " 7)Other                    " << endl;
        cout << " 8)View Cart                " << endl;
        cout << "============================" << endl;
        cout << "Enter input: ";
        cin >> input;
        while (input != 9)
        {
            int foodChoice = 0;
            if (input == 1)
            {
                cout << "============================" << endl;
                vector <Ingredient> vegetables = object.getVeggies();
                cout << "Vegetable Aile" << endl;
                for (int i = 0; i < object.getVeggies().size(); i++)
                {
                    cout << i + 1 << ")" << vegetables.at(i).getName() << " - $" << vegetables.at(i).getPrice() << endl;
                }
                cout << "===========================" << endl;
                cout << "Enter Choice:";
                cin >> foodChoice;
                cart.push_back(vegetables.at(foodChoice - 1));
                cout << vegetables.at(foodChoice - 1).getName() << " was added to the cart!" << endl;
                break;
            }
            else if (input == 2)
            {
                cout << "============================" << endl;
                vector <Ingredient> meats = object.getMeats();
                cout << "Meats Aile" << endl;
                for (int i = 0; i < object.getMeats().size(); i++)
                {
                    cout << i + 1 << ")" << meats.at(i).getName() << " - $" << meats.at(i).getPrice() << endl;
                }
                cout << "===========================" << endl;
                cout << "Enter Choice:";
                cin >> foodChoice;
                cart.push_back(meats.at(foodChoice - 1));
                cout << meats.at(foodChoice - 1).getName() << " was added to the cart!" << endl;
                break;
            }
            else if (input == 3)
            {
                cout << "============================" << endl;
                vector <Ingredient> dairy = object.getDairy();
                cout << "Dairy Aile" << endl;
                for (int i = 0; i < object.getDairy().size(); i++)
                {
                    cout << i + 1 << ")" << dairy.at(i).getName() << " - $" << dairy.at(i).getPrice() << endl;
                }
                cout << "===========================" << endl;
                cout << "Enter Choice:";
                cin >> foodChoice;
                cart.push_back(dairy.at(foodChoice - 1));
                cout << dairy.at(foodChoice - 1).getName() << " was added to the cart!" << endl;
                break;
            }
            else if (input == 4)
            {
                cout << "============================" << endl;
                vector <Ingredient> condiments = object.getCondiments();
                cout << "Condiments Aile" << endl;
                for (int i = 0; i < object.getCondiments().size(); i++)
                {
                    cout << i + 1 << ")" << condiments.at(i).getName() << " - $" << condiments.at(i).getPrice() << endl;
                }
                cout << "============================" << endl;
                cout << "Enter Choice:";
                cin >> foodChoice;
                cart.push_back(condiments.at(foodChoice - 1));
                cout << condiments.at(foodChoice - 1).getName() << " was added to the cart!" << endl;
                break;
            }
            else if (input == 5)
            {
                cout << "============================" << endl;
                vector <Ingredient> sweets = object.getSweets();
                cout << "Sweets Aile" << endl;
                for (int i = 0; i < object.getSweets().size(); i++)
                {
                    cout << i + 1 << ")" << sweets.at(i).getName() << " - $" << sweets.at(i).getPrice() << endl;
                }
                cout << "============================" << endl;
                cout << "Enter Choice:";
                cin >> foodChoice;
                cart.push_back(sweets.at(foodChoice - 1));
                cout << sweets.at(foodChoice - 1).getName() << " was added to the cart!" << endl;
                break;
            }
            else if (input == 6)
            {
                cout << "============================" << endl;
                vector <Ingredient> grains = object.getGrains();
                cout << "Grains Aile" << endl;
                for (int i = 0; i < object.getGrains().size(); i++)
                {
                    cout << i + 1 << ")" << grains.at(i).getName() << " - $" << grains.at(i).getPrice() << endl;
                }
                cout << "============================" << endl;
                cout << "Enter Choice:";
                cin >> foodChoice;
                cart.push_back(grains.at(foodChoice - 1));
                cout << grains.at(foodChoice - 1).getName() << " was added to the cart!" << endl;
                break;
            }
            else if (input == 7)
            {
                cout << "============================" << endl;
                vector <Ingredient> other = object.getOther();
                cout << "Other Aile" << endl;
                for (int i = 0; i < object.getOther().size(); i++)
                {
                    cout << i + 1 << ")" << other.at(i).getName() << " - $" << other.at(i).getPrice() << endl;
                }
                cout << "============================" << endl;
                cout << "Enter Choice:";
                cin >> foodChoice;
                cart.push_back(other.at(foodChoice - 1));
                cout << other.at(foodChoice - 1).getName() << " was added to the cart!" << endl;
                break;
            }
            else if (input == 8)
            {
                if (cart.size() > 0)
                {
                    double total = 0;
                    cout << "Current cart" << endl;
                    for (int i = 0; i < cart.size(); i++)
                    {
                        cout << cart.at(i).getName() << "-$" << cart.at(i).getPrice() << endl;
                    }
                    for (int i = 0; i < cart.size(); i++)
                    {
                        total += cart.at(i).getPrice();
                    }
                    cout << "=======================" << endl;
                    cout << "Total Spending: $" << total << endl;
                    totalSpent = total;
                    break;
                }
                else
                {
                    cout << "Cart is empty!" << endl;
                    break;
                }
            }
        }
        shoppingCart = cart;
    }
}

