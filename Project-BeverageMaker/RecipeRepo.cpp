#include "RecipeRepo.h"

RecipeRepo::RecipeRepo(ResourceHandler* resourceHandler) : resourceHandler(resourceHandler) {}

string RecipeRepo::instructions(int command)
{
    if (command == 1 || command == 2)
    {
        cout << "Reteta este:\n";
        ifstream f("Espresso.txt");
        string recipe;
        if (f.is_open())
        {
            while (getline(f, recipe)) 
            {
                cout << recipe << endl;
            }
            f.close();
        }
        return "Comanda obtinuta: ";
    }
    if (command == 3)
    {
        cout << "Reteta este:\n";
        ifstream f("Cappucino.txt");
        string recipe;
        if (f.is_open())
        {
            while (getline(f, recipe)) 
            {
                cout << recipe << endl;
            }
            f.close();
        }
        return "Comanda obtinuta: ";
    }
    if (command == 4)
    {
        cout << "Reteta este:\n";
        ifstream f("LatteMacchiato.txt");
        string recipe;
        if (f.is_open())
        {
            while (getline(f, recipe))
            {
                cout << recipe << endl;
            }
            f.close();
        }
        return "Comanda obtinuta: ";
    }
    if (command == 6)
    {
        cout << "Reteta este:\n";
        ifstream f("Ceai.txt");
        string recipe;
        if (f.is_open())
        {
            while (getline(f, recipe))
            {
                cout << recipe << endl;
            }
            f.close();
        }
        return "Comanda obtinuta: ";
    }
    try
    {
        ifstream f(filePath);
        if (!f.is_open())
        {
            throw
                runtime_error("Nu s-a putut deschide fisierul!");
        }
        f.close();
    }
    catch (const exception& e)
    {
        cerr << "Eroare la deschiderea fisierului!" << e.what() << endl;
    }
}

string RecipeRepo::getRecipe(int command)
{
    Espresso* espresso = new Espresso(0,0,0);
    LatteMacchiato* latteMacchiato = new LatteMacchiato(0,0,0,0,0);
    Cappucino* cappucino = new Cappucino(0,0,0,0,0);

    switch (command)
    {
        int quantity;
    case 0: 
        exit(0);
        break;

    case 1:
        quantity = espresso->getCoffeeQuantity();
        resourceHandler->grindCoffee(quantity);

        espresso->getGrindDuration();

        quantity = espresso->getWaterQuantity();
        resourceHandler->boilWater(quantity);
        //espresso->showInfo();
        return "Cafea Espresso";
        break;

    case 2:
        quantity = espresso->getCoffeeQuantity();
        resourceHandler->grindCoffee(quantity);

        espresso->getGrindDuration();

        quantity = espresso->getWaterQuantity();
        resourceHandler->boilWater(quantity);
        //espresso->showInfo();
        return "Cafea Lunga (Espresso Dublu)";
        break;

    case 3:
        quantity = cappucino->getCoffeeQuantity();
        resourceHandler->grindCoffee(quantity);

        cappucino->getGrindDuration();

        quantity = cappucino->getMilkQuantity();
        resourceHandler->heatMilk(quantity);

        cappucino->getHeatMilkDuration();

        quantity = cappucino->getWaterQuantity();
        resourceHandler->boilWater(quantity);
        //cappuccino->showInfo();
        return "Cappuccino";
        break;

    case 4:
        quantity = latteMacchiato->getCoffeeQuantity();
        resourceHandler->grindCoffee(quantity);

        latteMacchiato->getGrindDuration();

        quantity = latteMacchiato->getMilkQuantity();
        resourceHandler->heatMilk(quantity);

        latteMacchiato->getHeatMilkDuration();

        quantity = latteMacchiato->getWaterQuantity();
        resourceHandler->boilWater(quantity);
        //latteMacchiato->showInfo();
        return "Latte Macchiato";
        break;

    case 5:
        quantity= latteMacchiato->getWaterQuantity();
        resourceHandler->boilWater(quantity);
        return "Apa";
        break;

    case 6:
        quantity = latteMacchiato->getWaterQuantity();
        resourceHandler->boilWater(quantity);
        return "Ceai";
        break;

    default:
        return "Reteta nu a fost gasita!";
        break;
    }
}