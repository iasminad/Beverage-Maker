#pragma once
#include "ResourceContainer.h"
#include "RecipeRepo.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

class ResourceContainer;

class ResourceHandler 
{
private:
    list<ResourceContainer> containers;

public:
    ResourceHandler();
    void grindCoffee(int quantity);
    void boilWater(int quantity);
    void heatMilk(int quantity);
    ~ResourceHandler() {}
};