//
//  sheet.cpp
//  writeCell
//
//  Created by Tomasz Kowalewski on 2013-10-23.
//  Copyright (c) 2013 Tomasz Kowalewski. All rights reserved.
//

#include "sheet.h"

sheet::sheet(int rows, int columns)
:rowsNum(rows), columnsNum(columns) {
	tab = new int*[rows];
	for (int i=0; i<rows; i++) {
		tab[i] = new int[columns];
	}
}

sheet::~sheet() {
	for (int i=0; i<rowsNum; i++) {
		delete[] tab[i];
	}
	delete[] tab;
}