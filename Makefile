compile:
	g++ -std=c++2a *.cpp -o TextAdventure.exe

clean:
	rm -f *.exe
	rm -f *.o
	clear