all: genMino.o main.cpp Mino.o MinoO.o MinoI.o MinoS.o  MinoT.o MinoL.o MinoLL.o MinoSS.o
	g++ -o main genMino.o Mino.o MinoO.o MinoI.o MinoS.o  MinoT.o MinoL.o MinoLL.o MinoSS.o main.cpp

genMino.o: genMino.cpp genMino.h
	g++ -c genMino.cpp

Mino.o: Mino.h Mino.cpp
	g++ -c Mino.cpp

MinoO.o: MinoO.h MinoO.cpp
	g++ -c MinoO.cpp

MinoI.o: MinoI.h MinoI.cpp
	g++ -c MinoI.cpp

MinoS.o: MinoS.cpp MinoS.h
	g++ -c MinoS.cpp

MinoT.o: MinoT.cpp MinoT.h
	g++ -c MinoT.cpp -o MinoT.o

MinoL.o: MinoL.cpp MinoL.h
	g++ -c MinoL.cpp -o MinoL.o

MinoLL.o: MinoLL.cpp MinoLL.h
	g++ -c MinoLL.cpp -o MinoLL.o

MinoSS.o: MinoSS.cpp MinoSS.h
	g++ -c MinoSS.cpp -o MinoSS.o

clean:
	rm *.o main

