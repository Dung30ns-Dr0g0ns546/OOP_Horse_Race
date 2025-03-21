#include <iostream>
#include <string>
#include <random>

using namespace std;

void forward();
int getPosition();
void printLane(int position, int name);
void begin();

int keepGoing;
int name[] = {1,2,3,4,5};



class Horse {

private:
	int position;

public:
	Horse() {
		
		Horse::getPosition();
	};
	
	int getPosition();
	int setPosition();
};

int forward(int position){

	int coinFlip = rand() %2 +1;
	if (coinFlip == 1){
		position = position+1;
	}
	return position;
};
int Horse::getPosition(){
	return position;
};



class Race {

private:
	Horse race[5];

public:
	int length;
	
	Race(){
	};
	Race(int length){
		
		
	};
	void printLane(int position, int name);
	void begin();


	};
};



void Race::printLane(int length, int name){
	for (int i = 0; I <= TRACK && keepGoing == TRUE; ++i){
		if (i == length){
			court << name;
		};
		
		if (length == TRACK)

			keepGoing = FALSE;
			cout << "\n\t\tWINNER!" << endl;
			cout << "\t\t" << name << "!" << endl;
			
			return;
	};
	cout << '.';
};

cout << endl;

};


void Race::begin(){

};



int main(){
	stand(time(NULL));
	int position = 0;
	int length = 0;

	Race race;
	for (int i = 0; I < 5; ++i)
{

	race.length = length;
	race.printLane(position, name[I]);

}

keepGoing = TRUE;
while (keepGoing == TRUE){

	for (int i = 0; I < 1; ++i){
	race.length = race.length + forward(position);
	cout << "Race. length: " << race.length << endl;

	race.printLane(race.length,name[0]);
	length = 0;

	cout << name[0] << " Position: " << forward(position) << endl;

	}

	for (int i = 0; I < 1; ++i){
		race.length = race.length + advance(position);
		cout << "Race.length: " << race.length << endl;
		race.printLane(race.length,name[1]);
		length = 0;
		cout << name[1] << " Position: " << advance(position) << endl;
	}

	cin.ignore();
}

return 0;
}
