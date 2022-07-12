CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all:emp

emp.cpp: $(OBJ)/emp.o
	$(CC) $(LFLAGS) $(BIN)/emp $(OBJ)/emp.o

$(OBJ)/emp.o: $(SRC)/emp.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/emp.cpp
	mv *.o $(OBJ)




clean:
	@echo "Cleaning is in Progress"
	rm -f a.out emp
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/emp
	@echo "Done!"

