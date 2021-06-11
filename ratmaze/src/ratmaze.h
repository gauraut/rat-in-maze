/*
 * ratmaze.h
 *
 *  Created on: 10-Jun-2021
 *      Author: Gaurav
 */

#ifndef RATMAZE_H_
#define RATMAZE_H_
#include <vector>
#pragma once

using namespace std;

class Maze{
public:
	const static int N = 5; //default value
	int size = N;
	int maze[N][N] = {{1,0,0,0,0},
						{1,0,0,0,0},
						{1,1,1,0,0},
						{0,0,1,1,0},
						{0,0,0,1,1}}; //by default the maze is not valid
	/*Maze(const int);
	Maze();*/
};

class Rat{
public:
	vector<char> final_solution; //will be used to populate all solution
	//std::vector<std::vector<char>>::iterator c = final_solution.begin();
	//int d = 0;

	bool ismazevalid(Maze&); //returns true if there is atleast one solution
	void solve_maze(Maze&);
	void move_down(Maze&);
	void move_right(Maze&);
	bool validate_down(Maze&);//will return 1 if move is allowed
	bool validate_right(Maze&);
	void display_soln(Maze&);
	void whereisrat();


private:
	int current_pos[2] = {0,0}; //will always start at 0,0
};

class IntPair{
public:
	IntPair(int,int);
	int first;
	int second;
};


#endif /* RATMAZE_H_ */
