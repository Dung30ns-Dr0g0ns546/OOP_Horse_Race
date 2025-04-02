class Horse {

private:
	int position;

public:
	Horse() {
		
		Horse::getPosition();
	};
	
	int getPosition();
	int setPosition();

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

bool isWinner(int hn, int* horses){
    bool output = false;

    if(horses[hn] >= RACE_LENGTH){
      output = true;
    }
    return output;
}
};

