//
//  screen.h
//  writeCell
//
//  Created by Tomasz Kowalewski on 2013-10-23.
//  Copyright (c) 2013 Tomasz Kowalewski. All rights reserved.
//

#ifndef __writeCell__screen__
#define __writeCell__screen__

#include <iostream>
#include <string>

#include "menu.h"

using namespace std;

class screen {
private:
	int width;
	int height;
	string title;
	menuBar* mainMenu;
	void showBar(int top, string text = "");
	void refresh();
	
public:
	screen(string title = "");
	~screen();
	void init();
	int loop();
	int getWidth();
	int getHeight();
	string getTitle();
	void setTitle(string title);
	bool showTitleBar;
	bool showStatusBar;
	void setMenu(menuBar* mainMenu);
	
	char getKey();
	void putChar(int top, int left, char ch);
	void putText(int top, int left, string text);
};

#endif /* defined(__writeCell__screen__) */
