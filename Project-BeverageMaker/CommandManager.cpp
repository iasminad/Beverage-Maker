#include "CommandManager.h"
#include "RecipeRepo.h"
#include "ResourceHandler.h"
#include <iostream>
using namespace std;

CommandManager::CommandManager(RecipeRepo* recipeRepo, ResourceHandler* resourceHandler) : recipeRepo(recipeRepo), resourceHandler(resourceHandler) {}

void CommandManager::takeCommandFromPanel(int command) 
{
    string instructions = recipeRepo->instructions(command);
    string recipe = recipeRepo->getRecipe(command);
    if (command >= 0 && command < 7)
    {
        cout << instructions;
        cout << recipe << endl;
    }  
}

void CommandManager::reload(int amount)
{
    cout << "S-au adaugat  " << amount << "unitati!" << endl;
}
