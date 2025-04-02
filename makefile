HorseRace: Race.o Horse.o OOPHorseRace.o
	g++ Race.o Horse.o OOPHorseRace.o

Race.o: Race.cpp Race.h
	g++ -g -c Race.cpp

Horse.o: Horse.cpp Horse.h
	g++ -g -c Horse.cpp

OOPHorseRace.o: OOPHorseRace.cpp OOPHorseRace.h
	g++ -g -c OOPHorseRace.cpp

clean:
	rm *.class
