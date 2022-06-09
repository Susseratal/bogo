## CXXFLAGS = -std=c++0x ## presently commented out because makefiles are hard

bogo: bogo.o
	g++ bogo.o -o bogo
	@ls

bogo.o: bogo.cpp
	g++ -c bogo.cpp

clean:
	@rm *.o bogo
	@ls
