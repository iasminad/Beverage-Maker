#pragma once
#include "RecipeRepo.h"
#include "ResourceHandler.h"

class CommandManager 
{
private:
    RecipeRepo* recipeRepo;
    ResourceHandler* resourceHandler;

public:
    CommandManager(RecipeRepo* recipeRepo, ResourceHandler* resourceHandler);
    void takeCommandFromPanel(int command);
    void reload(int amount);
    ~CommandManager() {}
};
