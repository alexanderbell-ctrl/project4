#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);

int main() {
	std::srand(std::time(NULL));

	int track_positions[5] ={0,0,0,0,0};
	for(int i = 0; i < 5; ++i) {
		printLane(i, track_positions);
	} //end for loop
	
	bool keepGoing = true;
	while(keepGoing) {
		for(int horse = 0; horse < 5; ++horse) {
			advance(horse, track_positions);
			printLane(horse, track_positions);
		} //end for loop	
		keepGoing = false;
	} //end while loop
} //end main

void advance(int horseNum, int* horse_position) {	
	int coin_flip = (std::rand() % 2) +1;
	std::cout << "coin flip: " << coin_flip << "\n";
	if(coin_flip == 2) {
		std::cout << "horse #" << horseNum << "advances 1\n";
		horse_position[horseNum] += 1;
	} //end if
} //end advance



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
