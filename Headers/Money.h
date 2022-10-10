#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Shopping.h"
using namespace std;
//instead of makeMoney we can use the guessing game with ingredients
class Money
{
    //private:
protected:
    double money = 500.00;
    //    double totalSpent;
public:
    void setMoney(double num);
    double getMoney();
    //    void setTotalSpent(double num1);
    //    double getTotalSpent();
    void makeMoney();
    void subtractMoney(double value);
};

