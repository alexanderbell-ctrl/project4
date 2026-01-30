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
	std::cout << "\n\n";

	bool keepGoing = true;
	while(keepGoing) {
		std::cout << "Press enter to continue to next round...";
		std::cin.get();
		std::cout << "\n\n";

		for(int horse = 0; horse < 5; ++horse) {
			advance(horse, track_positions);
			printLane(horse, track_positions);
		} //end for loop

		for(int horse = 0; horse < 5; ++horse) {
			if(isWinner(horse, track_positions)) {
				keepGoing = false;
				std::cout << "Horse " << horse << " won!";
			} //end if
		} //end for loop


	} //end while loop
} //end main


bool isWinner(int horseNum, int* horse_position) {
	if(horse_position[horseNum] == 14) {
		return true;
	} //end if
	else {
		return false;
	} //end else
} //end isWinner


void advance(int horseNum, int* horse_position) {	
	int coin_flip = (std::rand() % 2) +1;
	//std::cout << "coin flip: " << coin_flip << "\n";
	if(coin_flip == 2) {
		//std::cout << "horse #" << horseNum << "advances 1\n";
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
