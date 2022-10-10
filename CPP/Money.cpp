#include "Money.h"
void Money::setMoney(double num)
{
    money = num;
}

double Money::getMoney()
{
    return money;
}


void Money::subtractMoney(double value)
{
    money -= value;
}

void Money::makeMoney()
{
    srand(time(NULL));
    int answer = (rand() % 5) + 1;
    int guess;
    cout << "Guess a number 1 through 5! Guess correctly and you win $20!" << endl;
    cout << "Guess incorrectly you lose $5." << endl;
    cout << answer << endl;
    cin >> guess;
    if (guess == answer)
    {
        cout << "you won!! " << endl;
        cout << "added $20." << endl;
        money += 20;
    }
    else
    {
        cout << "You lost :(" << endl;
        cout << "$5 lost." << endl;
        money -= 5;
    }
}


