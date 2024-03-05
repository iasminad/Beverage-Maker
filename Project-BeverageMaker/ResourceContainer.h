#pragma once
#include "ResourceHandler.h"
#include <iostream>
#include <list>
using namespace std;

class ResourceContainer
{
private:
    string name;
    int quantity;

public:
    ResourceContainer(string name, int quantity) : name(name), quantity(quantity) {}

    int getQuantity(int quantity)
    {
        return quantity;
    }

    bool enoughResources(int amount) 
    {
        return quantity >= amount;
    }

    void consumeResources(int amount) 
    {
        if (enoughResources(amount)) 
        {
            quantity = quantity - amount;
            cout << "S-au consumat " << amount << " unitati!" << endl;
        }
        else
        {
            cout << "Nu sunt suficiente resurse!" << endl; 
        }    
    }
};