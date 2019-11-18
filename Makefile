QueueDemo: main.o Test.o Queue.o
	g++ -g -Wall -std=c++11 main.o Test.o Queue.o -o QueueDemo

main.o: main.cpp Test.h
	g++ -g -std=c++11 -c main.cpp

Test.o: Test.cpp Test.h Queue.h
	g++ -g -std=c++11 -c Test.cpp

clean:
	rm main.o QueueDemo *~
