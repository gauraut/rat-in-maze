//============================================================================
// Name        : ratmaze.cpp
// Author      : Gaurav Raut
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <queue>
#include <cmath>
#include "ratmaze.h"

using namespace std;

IntPair::IntPair(int l, int m)
{
	first = l;
	second = m;
}

/*Maze::Maze()
{

}

Maze::Maze(const int m)
{
	size = m;
	maze[m][m]={0};
}*/



bool Rat::validate_down(Maze &puzzle)
{
	if (puzzle.maze[this->current_pos[0]+1][this->current_pos[1]] == 1) {return true;}
	else {return false;}
}

bool Rat::validate_right(Maze &puzzle)
{
	if (puzzle.maze[this->current_pos[0]][this->current_pos[1]+1] == 1) {return true;}
	else {return false;}
}

void Rat::move_down(Maze &puzzle)
{
	if (validate_down(puzzle)){this->current_pos[0] +=1;}
}

void Rat::move_right(Maze &puzzle)
{
	if (validate_right(puzzle)){this->current_pos[1] +=1;}
}

void Rat::display_soln(Maze &puzzle){
	for (auto i : this->final_solution)
	{
		cout<<i;
	}
}

bool Rat::ismazevalid(Maze &puzzle){
	return false;//code to verify maze validity
}

void Rat::solve_maze(Maze &puzzle){
	//queue<IntPair> to;

	while ((current_pos[1] != puzzle.size-1) && (current_pos[0] != puzzle.size-1))
	{
		if (this->validate_down(puzzle)) {

			this->final_solution.push_back('D');
			this->move_down(puzzle);
			this->solve_maze(puzzle);
		}
		if (this->validate_right(puzzle)) {

			this->final_solution.push_back('R');
			this->move_right(puzzle);
			this->solve_maze(puzzle);
		}
		if ((this->validate_down(puzzle)) && (this->validate_right(puzzle)) && (current_pos[1] != puzzle.size-1) && (current_pos[0] != puzzle.size-1))
		{
			cout<<"Error: Cannot solve puzzle. Please check the maze."<<endl;
			break;
		}

	}
}

void Rat::whereisrat(){
	cout<<endl<<current_pos[0]<<","<<current_pos[1];
}
