CC=g++

CPPFLAGS=-Wall -Wextra -Werror -c

OBJ=main.o menu.o Play.o

SRC=./src

BIN=./bin

TEST=./test

all : PROG clean

PROG : main menu Play BullsandCows Test clean

main :
	$(CC) $(CPPFLAGS) $(SRC)/main.cpp
	
menu :
	$(CC) $(CPPFLAGS) $(SRC)/menu.cpp
	
Play :
	$(CC) $(CPPFLAGS) $(SRC)/Play.cpp
	
Test :
	$(CC) $(CPPFLAGS) $(TEST)/Test.cpp
	
BullsandCows :
	$(CC) $(OBJ) -o $(BIN)/BullsandCows
	
clean :
	rm -rf *.o
