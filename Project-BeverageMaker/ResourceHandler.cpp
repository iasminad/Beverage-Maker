#include "ResourceHandler.h"
#include "ResourceContainer.h"
#include <list>
#include <string>
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

ResourceHandler::ResourceHandler() 
{
    containers.push_back(ResourceContainer("Water", 500));
    containers.push_back(ResourceContainer("Milk", 200));
    containers.push_back(ResourceContainer("Coffee", 300));
}

void ResourceHandler::boilWater(int quantity) 
{
    string opt;
    int quantityUser;
    if (quantity != 0)
    {
        if (containers.back().enoughResources(quantity))
        {
            cout << "Se fierbe apa..." << endl;
            chrono::seconds duration(3);
            this_thread::sleep_for(duration);
            containers.back().consumeResources(quantity);
        }
        else
        {
            cout << "Nu este suficienta apa pentru fierbere!" << endl;
            cout << "Doriti sa reincarcati containerele de resurse? yes/no:";
            cin >> opt;
            if (opt == "yes")
            {
                cout << "\Introduceti cantitatea: ";
                cin >> quantityUser;
                containers.push_back(ResourceContainer("Water", quantityUser));
            }
            else if (opt == "no")
            {
                cout << "Comanda nu se poate realiza!" << endl;
                exit(0);
            }     
        }
    }
}

void ResourceHandler::grindCoffee(int quantity) 
{
    string opt;
    int quantityUser;
    if (quantity != 0)
    {
        if (containers.back().enoughResources(quantity))
        {
            cout << "Se macina cafeaua..." << endl;
            chrono::seconds duration(3);
            this_thread::sleep_for(duration);
            containers.back().consumeResources(quantity);
        }
        else
        {
            cout << "Nu este suficienta cafea pentru fierbere!" << endl;
            cout << "Doriti sa reincarcati containerele de resurse? yes/no:";
            cin >> opt;
            if (opt == "yes")
            {
                cout << "\Introduceti cantitatea: ";
                cin >> quantityUser;
                containers.push_back(ResourceContainer("Coffee", quantityUser));
            }
            else if (opt == "no")
            {
                cout << "Comanda nu se poate realiza!" << endl;
                exit(0);
            }
        }
    }
}

void ResourceHandler::heatMilk(int quantity)
{
    string opt;
    int quantityUser;
    if (quantity != 0)
    {
        if (containers.back().enoughResources(quantity))
        {
            cout << "Se fierbe laptele..." << endl;
            chrono::seconds duration(3);
            this_thread::sleep_for(duration);
            containers.back().consumeResources(quantity);
        }
        else
        {
            cout << "Nu este suficient lapte pentru fierbere!" << endl;
            cout << "Doriti sa reincarcati containerele de resurse? yes/no: ";
            cin >> opt;
            if (opt == "yes")
            {
                cout << "\Introduceti cantitatea: ";
                cin >> quantityUser;
                containers.push_back(ResourceContainer("Milk", quantityUser));
            }
            else if (opt == "no")
            {
                cout << "Comanda nu se poate realiza!" << endl;
                exit(0);
            }
        }
    }
}
