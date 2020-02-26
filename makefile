init : init.o
	ld -o init init.o
init.o : init.s
	as -o init.o init.s
init.s : init.ii
	g++ -o init.s -S init.ii
init.ii : init.cpp
	cpp init.cpp > init.ii
