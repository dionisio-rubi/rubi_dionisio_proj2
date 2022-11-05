all: proj2

proj2: main.o AddingHex.o ANDHex.o ASRHex.o LSRHex.o LSLHex.o NOTHex.o ORRHex.o SUBHex.o XORHex.o FileManager.o
	g++ -o proj2 main.o AddingHex.o ANDHex.o ASRHex.o LSRHex.o LSLHex.o NOTHex.o ORRHex.o SUBHex.o XORHex.o FileManager.o

main.o: main.cpp
	g++ -c main.cpp

AddingHex.o: AddingHex.cpp AddingHex.h
	g++ -c AddingHex.cpp

ANDHex.o: ANDHex.cpp ANDHex.h
	g++ -c ANDHex.cpp

ASRHex.o: ASRHex.cpp ASRHex.h
	g++ -c ASRHex.cpp

LSRHex.o: LSRHex.cpp LSRHex.h
	g++ -c LSRHex.cpp

LSLHex.o: LSLHex.cpp LSLHex.h
	g++ -c LSLHex.cpp

NOTHex.o: NOTHex.cpp NOTHex.h
	g++ -c NOTHex.cpp

ORRHex.o: ORRHex.cpp ORRHex.h
	g++ -c ORRHex.cpp
	
SUBHex.o: SUBHex.cpp SUBHex.h
	g++ -c SUBHex.cpp

XORHex.o: XORHex.cpp XORHex.h
	g++ -c XORHex.cpp

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