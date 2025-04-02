class Race {

private:
	Horse race[5];

public:
	int length;
	
	Race(){

	};

	Race(int length){
			
	}

	void printLane(int position, int name);
	void begin();

	void Race::printLane(int length, int name){
		for (int i = 0; I <= TRACK && keepGoing == TRUE; ++i){
			if (i == length){
				court << name;
			}
			
			if (length == TRACK){
	
				keepGoing = FALSE;
				cout << "\n\t\tWINNER!" << endl;
				cout << "\t\t" << name << "!" << endl;
				
				return;
			}
		}
		cout << '.';
	}
	
	cout << endl;

	
	
	void Race::begin(){
	
	};
}

	