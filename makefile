all: proj2

proj2: main.o CMDHex.o FileManager.o
	g++ -o proj2 main.o CMDHex.o FileManager.o

main.o: main.cpp
	g++ -c main.cpp

CMDHex.o: CMDHex.cpp CMDHex.h
	g++ -c CMDHex.cpp

FileManager.o: FileManager.cpp FileManager.h
	g++ -c FileManager.cpp

clean:
	rm -f *.o proj2


# # modify this makefile based on your requirement

# OUTPUT = proj2
# INCLIB= AddingHex.h FileManager.h #write your header file if you have any
# SOURCE = main.cpp #write your .cpp file name
# all: $(OUTPUT)


# $(OUTPUT): $(OUTPUT).o
# 	g++ -o $@ $@.o -std=c++11


# $(OUTPUT).o: $(SOURCE) $(INCLIB)
# 	g++ -c $< -std=c++11 -o $@

# clean:
# 	rm -f $(OUTPUT) $(OUTPUT).o