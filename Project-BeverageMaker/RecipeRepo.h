#pragma once
#include "Recipe.h"
#include "ResourceHandler.h"
#include <list>
#include <string>
#include <fstream>
using namespace std;

class ResourceHandler;

class RecipeRepo 
{
private:
    string filePath = "Recipes.txt";
    //list<Recipe*> recipes;
    ResourceHandler* resourceHandler;

public:
    RecipeRepo(ResourceHandler* resourceHandler);
    string getRecipe(int command);
    string instructions(int command);
    ~RecipeRepo() {}
};
