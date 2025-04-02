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
