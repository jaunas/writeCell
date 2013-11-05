//
//  main.cpp
//  writeCell
//
//  Created by Tomasz Kowalewski on 2013-10-23.
//  Copyright (c) 2013 Tomasz Kowalewski. All rights reserved.
//

#define _XOPEN_SOURCE_EXTENDED

#include <locale.h>
#include "screen.h"
#include "menu.h"


int main()
{
	setlocale(LC_CTYPE, "pl_PL.UTF-8");
	
	screen term("writeCell");
	term.init();

	term.showTitleBar = true;
	term.showStatusBar = true;
	
	menuBar mainMenu;
	menu fileMenu("Plik");
	menuItem newFile("Nowy plik");
	menuItem endProgram("Zakończ program");
	fileMenu.addItem(newFile);
	fileMenu.addItem(endProgram);
	mainMenu.addItem(fileMenu);
	
	term.setMenu(&mainMenu);

	return term.loop();
}