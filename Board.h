#define BOARD_H
#ifndef BOARD_H

#include "Point.h"

using namespace std;

class Board{
	public:
		Board(); // constructor
		void Display(){}

	private:
		Point P;
		static int mtr[100][100];
		const MAX = 100; //banyak makhluk maksimal dalam board

};



#endif