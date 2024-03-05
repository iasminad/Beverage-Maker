#include "CommandPanel.h"
#include "CommandManager.h"
#include <iostream>

CommandPanel::CommandPanel(CommandManager* manager) : manager(manager) {}

void CommandPanel::showMenu()
{
	cout << "----------MENIU:-----------" << endl;
	cout << "0.Iesire" << endl;
	cout << "1.Cafea Espresso" << endl;
	cout << "2.Cafea Lunga (Espresso Dublu)" << endl;
	cout << "3.Cappucino" << endl;
	cout << "4.Latte Macchiato" << endl;
	cout << "5.Apa" << endl;
	cout << "6.Ceai" << endl;
	cout << "---------------------------" << endl;
}

int CommandPanel::takeCommand()
{
	int command;
	cout << "Introduceti comanda: ";
	cin >> command;
	manager->takeCommandFromPanel(command);
	return command;
}