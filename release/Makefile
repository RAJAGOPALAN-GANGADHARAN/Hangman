output: main.o randomWord.o
	g++ main.o randomWord.o -o output

main.o: main.cpp
	g++ -c main.cpp

randomWord.o: randomWord.cpp randomWord.h
	g++ -c randomWord.cpp

clean:
	rm *.o output

