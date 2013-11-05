//
//  menu.h
//  writeCell
//
//  Created by Tomasz Kowalewski on 2013-11-05.
//  Copyright (c) 2013 Tomasz Kowalewski. All rights reserved.
//

#ifndef __writeCell__menu__
#define __writeCell__menu__

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class menuItem {
private:
	string label;
	
public:
	menuItem(string label);
	void setLabel(string label);
	string getLabel();
};

class menu {
private:
	string label;
	vector<menuItem> items;

public:
	menu(string label);
	void addItem(menuItem item);
};

class menuBar {
private:
	vector<menu> items;
	
public:
	void addItem(menu item);
};

#endif /* defined(__writeCell__menu__) */
