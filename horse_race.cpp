#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);

int main() {
	int track_positions[5] ={0,0,0,0,0};
	for(int i = 0; i < 5; ++i) {
		printLane(i, track_positions);
	} //end for loop
} //end main

void printLane(int horseNum, int* horse_position) {
	for(int i = 0; i < horse_position[horseNum]; ++i) {
		std::cout << "*";
	} //end for loop
	std::cout << horseNum;
	for(int i = horse_position[horseNum]; i < 14; ++i) {
		std::cout << "*";
	} //end for loop
	std::cout << "\n";
} //end printLane
