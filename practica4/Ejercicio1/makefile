OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio1

# Ejecutables
$(BIN)/ejercicio1: $(OBJ)/ejercicio1.o  $(OBJ)/bigint.o
	g++ -o $(BIN)/ejercicio1 $(OBJ)/ejercicio1.o $(OBJ)/bigint.o

#Objetos

$(OBJ)/ejercicio1.o: $(SRC)/ejercicio1.cpp $(INC)/bigint.h
	g++ -c -o $(OBJ)/ejercicio1.o -I$(INC) $(SRC)/ejercicio1.cpp

$(OBJ)/bigint.o:$(SRC)/bigint.cpp $(INC)/bigint.h
	g++ -c -o $(OBJ)/bigint.o -I$(INC) $(SRC)/bigint.cpp

clean:
	rm $(OBJ)/* $(BIN)/*
