#include <iostream>
#include "CommandPanel.h"
#include "CommandManager.h"
#include "RecipeRepo.h"
#include "ResourceHandler.h"
using namespace std;

namespace Utils
{
	enum Resources
	{
		COFFEE, WATER, MILK
	};
}

int main() 
{
    ResourceHandler resourceHandler;
    RecipeRepo recipeRepo(&resourceHandler);

    CommandManager manager(&recipeRepo, &resourceHandler);
    CommandPanel panel(&manager);

    int command;
    do
    {
        panel.showMenu();
        command = panel.takeCommand();
        cout << "Introduceti urmatoarea comanda:\n";
    } while (command != 0);
    return 0;
}