#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);


int main(){
	int horses[] = {0, 0, 0, 0, 0}
	bool keepGoing = true;
	
	while (keepGoing){
		for (int hn = 0; hn < NUM_HORSES; hn++){
			advance(hn, horses);
			printLane(hn, horses);
			if (isWinner(hn, horses)){
				keepGoing = false;
			}
				
		}
		std::cout << "Press enter for another turn";
		std::cin.ignore();    
	}
	return 0;
}



void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		
		} else {
			std::cout << "."
		}
	}
	std::cout << std::endl;
}


void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] += coin;

}



bool isWinner(int horseNum, int* horses){
	result = false
	if (horses[horseNum] += TRACK_LENGTH){
		result = true
		std::cout << horseNum << "is the winner!" << "\n";
	}
	return 0; 
}



