all: practice

practice: mmap.o Map.o Image.o House.o Place.o Dot.o
	g++ -o practice mmap.o Map.o Image.o House.o Place.o Dot.o

Map.o: Map.h Map.cpp
	g++ -c Map.cpp Map.h

Image.o: Image.cpp Image.h
	g++ -c Image.cpp Image.h

House.o: House.cpp House.h
	g++ -c House.cpp House.h

Place.o: Place.cpp Place.h
	g++ -c Place.cpp Place.h
	
Dot.o: Dot.h Dot.cpp
	g++ -c Dot.cpp Dot.h

mmap.o: mmap.cpp
	g++ -c mmap.cpp 
	
clear:
	rm *.o *.gch
