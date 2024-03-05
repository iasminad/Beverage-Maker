#pragma once

#include <string>
using namespace std;

class CommandManager;

class CommandPanel
{
private:
	CommandManager* manager;

public:
	CommandPanel(CommandManager* manager);
	void showMenu();
	int takeCommand();
	~CommandPanel(){}
};