#pragma once

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

class Recipe 
{
public:
    virtual string getName() = 0;
    virtual void showInfo() = 0;
    virtual ~Recipe() {}
};

class Espresso : public Recipe
{
protected:
    int grindDuration;
    int coffeeQuantity;
    int waterQuantity;

public:
    Espresso(int _grindDuration, int _coffeeQuantity, int _waterQuantity)
    {
        grindDuration = _grindDuration;
        coffeeQuantity = _coffeeQuantity;
        waterQuantity = _waterQuantity;
    }
    string getName() override
    {
        return "Espresso";
    }
    int getGrindDuration()
    {
        cout << "Durata macinarii: 10 secunde\n";
        chrono::seconds duration(3);
        this_thread::sleep_for(duration);
        grindDuration = 3;
        return grindDuration;
    }
    int getCoffeeQuantity()
    {
        cout << "Cantitatea de cafea: 18ml\n";
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
        coffeeQuantity = 18;
        return coffeeQuantity;
    }
    int getWaterQuantity()
    {
        cout << "Cantitatea de apa: 36ml\n";
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
        waterQuantity = 36;
        return waterQuantity;
    }
    void showInfo() override
    {
        cout << "Durata macinarii: " << grindDuration << endl;
        cout << "Cantitatea de cafea: " << coffeeQuantity << endl;
        cout << "Cantitatea de apa: " << waterQuantity << endl;
    }
};

class LatteMacchiato : public Espresso
{
private:
    int boilMilk;
    int milkQuantity;

public:
    LatteMacchiato(int _grindDuration, int _coffeeQuantity, int _waterQuantity, int _boilMilk, int _milkQuantity) : Espresso(_grindDuration, _coffeeQuantity, _waterQuantity) 
    {
        boilMilk = _boilMilk;
        milkQuantity = _milkQuantity;
    }
    string getName() override
    {
        return "Latte Macchiato";
    }
    int getGrindDuration()
    {
        cout << "Durata macinarii: 10 secunde\n";
        chrono::seconds duration(3);
        this_thread::sleep_for(duration);
        grindDuration = 3;
        return grindDuration;
    }
    int getCoffeeQuantity()
    {
        cout << "Cantitatea de cafea: 18ml\n";
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
        coffeeQuantity = 18;
        return coffeeQuantity;
    }
    int getWaterQuantity()
    {
        cout << "Cantitatea de apa: 55 ml\n";
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
        waterQuantity = 55;
        return waterQuantity;
    }
    int getHeatMilkDuration()
    {
        cout << "Durata fierberii laptelui: 60 secunde\n";
        chrono::seconds duration(3);
        this_thread::sleep_for(duration);
        boilMilk = 60;
        return boilMilk;
    }
    int getMilkQuantity()
    {
        cout << "Cantitatea de lapte: 150ml\n";
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
        milkQuantity = 150;
        return milkQuantity;
    }
    void showInfo() override
    {
        cout << "Durata macinarii: " << grindDuration << endl;
        cout << "Cantitatea de cafea: " << coffeeQuantity << endl;
        cout << "Cantitatea de apa: " << waterQuantity << endl;
        cout << "Durata fierberii laptelui: " << boilMilk << endl;
        cout << "Cantitatea de lapte: " << milkQuantity << endl;
    }
};

class Cappucino : public Espresso
{
private:
    int boilMilk;
    int milkQuantity;

public:
    Cappucino(int _grindDuration, int _coffeeQuantity, int _waterQuantity, int _boilMilk, int _milkQuantity) : Espresso(_grindDuration, _coffeeQuantity, _waterQuantity)
    {
        boilMilk = _boilMilk;
        milkQuantity = _milkQuantity;
    }
    string getName() override
    {
        return "Cappucino";
    }
    int getGrindDuration()
    {
        cout << "Durata macinarii: 10 secunde\n";
        chrono::seconds duration(3);
        this_thread::sleep_for(duration);
        grindDuration = 3;
        return grindDuration;
    }
    int getCoffeeQuantity()
    {
        cout << "Cantitatea de cafea: 50ml\n";
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
        coffeeQuantity = 50;
        return coffeeQuantity;
    }
    int getWaterQuantity()
    {
        cout << "Cantitatea de apa: 0 ml\n";
        waterQuantity = 0;
        return waterQuantity;
    }
    int getHeatMilkDuration()
    {
        cout << "Durata fierberii laptelui: 60 secunde\n";
        chrono::seconds duration(3);
        this_thread::sleep_for(duration);
        boilMilk = 60;
        return boilMilk;
    }
    int getMilkQuantity()
    {
        cout << "Cantitatea de lapte: 100ml\n";
        chrono::seconds duration(2);
        this_thread::sleep_for(duration);
        milkQuantity = 100;
        return milkQuantity;
    }
    void showInfo() override
    {
        cout << "Durata macinarii: " << grindDuration << endl;
        cout << "Cantitatea de cafea: " << coffeeQuantity << endl;
        cout << "Cantitatea de apa: " << waterQuantity << endl;
        cout << "Durata fierberii laptelui: " << boilMilk << endl;
        cout << "Cantitatea de lapte: " << milkQuantity << endl;
    }
};
