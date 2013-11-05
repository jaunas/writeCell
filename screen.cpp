//
//  screen.cpp
//  writeCell
//
//  Created by Tomasz Kowalewski on 2013-10-23.
//  Copyright (c) 2013 Tomasz Kowalewski. All rights reserved.
//

#include "screen.h"
#include <curses.h>

screen::screen(string title) {
	this->title = title;
}

screen::~screen() {
	echo();
	endwin();	
}

int screen::loop() {
	char key;
	
	refresh();
	
	while (true) {
		key = getKey();
		switch (key) {
			case 'a':
				return 0;
				break;
		}
	}
}

int screen::getWidth() {
	return width;
}

int screen::getHeight() {
	return height;
}

string screen::getTitle() {
	return title;
}

void screen::setTitle(string title) {
	this->title = title;
}

void screen::setMenu(menuBar* mainMenu) {
	this->mainMenu = mainMenu;
}

void screen::init() {
	initscr();
	noecho();
	raw();
	keypad(stdscr, true);
	curs_set(0);

	width = getmaxx(stdscr);
	height = getmaxy(stdscr);
}

void screen::showBar(int top, string text) {
	attron(A_REVERSE);
	for (int i=0; i<width/2 - (int)text.length()/2; i++) {
		mvprintw(top, i, " ");
	}
	mvprintw(top, width/2 - (int)text.length()/2, "%s", text.c_str());
	for (int i=width/2 + (int)text.length()/2 + (int)text.length()%2; i<width; i++) {
		mvprintw(top, i, " ");
	}
	attroff(A_REVERSE);
}

void screen::refresh() {
	if (showTitleBar) {
		showBar(0, title);
	}
	
	if (showStatusBar) {
		showBar(height-1);
	}
}

char screen::getKey() {
	return getch();
}

void screen::putChar(int top, int left, char ch) {
	mvprintw(top+1, left, "%c", ch);
}

void screen::putText(int top, int left, string text) {
	mvprintw(top+1, left, "%s", text.c_str());
}