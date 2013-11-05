//
//  sheet.h
//  writeCell
//
//  Created by Tomasz Kowalewski on 2013-10-23.
//  Copyright (c) 2013 Tomasz Kowalewski. All rights reserved.
//

#ifndef __writeCell__sheet__
#define __writeCell__sheet__

#include <iostream>

class sheet {
private:
	int **tab;
	int rowsNum;
	int columnsNum;
	
public:
	sheet(int rows, int columns);
	~sheet();
};

#endif /* defined(__writeCell__sheet__) */
