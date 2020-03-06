OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio1

# Ejecutables
$(BIN)/ejercicio1: $(OBJ)/ejercicio1.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio1 $(OBJ)/ejercicio1.o $(OBJ)/utilidades.o

# Objetos

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INC)

$(OBJ)/ejercicio1.o: $(SRC)/ejercicio1.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio1.o $(SRC)/ejercicio1.cpp -I$(INC)
