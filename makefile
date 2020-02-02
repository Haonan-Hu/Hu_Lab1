list: main.o executive.o Linked_list.o Node.o
	g++ -std=c++11 -g -Wall main.o executive.o Linked_list.o Node.o -o list

main.o: main.cpp executive.h executive.cpp Linked_list.h Linked_list.cpp Node.h	Node.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

executive.o: executive.h executive.cpp Linked_list.h Linked_list.cpp Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c executive.cpp

Linked_list.o: Linked_list.h Linked_list.cpp Node.h Node.cpp
	g++ -std=c++11 -g -Wall -c Linked_list.cpp

Node.o: Node.h
	g++ -std=c++11 -g -Wall -c Node.cpp

clean:
	rm *.o list
