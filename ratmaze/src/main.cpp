/*
 * main.cpp
 *
 *  Created on: 10-Jun-2021
 *      Author: Gaurav
 */


#include <iostream>
#include "ratmaze.h"

using namespace std;

int main(){
	Maze x5maze;

	//x5maze.maze = {1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0,0,1,1,0,0,0,0,1,1};

	Rat jerry;

	jerry.solve_maze(x5maze);
	jerry.display_soln(x5maze);
	jerry.whereisrat();
	return 0;
}

