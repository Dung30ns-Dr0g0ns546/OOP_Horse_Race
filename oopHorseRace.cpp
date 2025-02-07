#include <iostream>
#include <string>
#include <random>>

using namespace std;

void advance();
int getPosition();
void printLane(int position, int name);
void start();

int keepGoing;
int name[] = {1,2,3,4,5};

class Horse {

public:
	Horse(const std::string& name) : name(name), distance_traveled(0) {}	
