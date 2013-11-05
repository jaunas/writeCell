//
//  menu.cpp
//  writeCell
//
//  Created by Tomasz Kowalewski on 2013-11-05.
//  Copyright (c) 2013 Tomasz Kowalewski. All rights reserved.
//

#include "menu.h"

#include <string>
#include <vector>

menuItem::menuItem(string label) {
	this->label = label;
}

void menuItem::setLabel(string label) {
	this->label = label;
}

string menuItem::getLabel() {
	return label;
}

menu::menu(string label) {
	this->label = label;
}

void menu::addItem(menuItem item) {
	items.push_back(item);
}

void menuBar::addItem(menu item) {
	items.push_back(item);
}