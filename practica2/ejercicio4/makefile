OBJ=obj
BIN=bin
SRC=src
INC=include

all: $(BIN)/ejercicio4

# Ejecutables
$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(OBJ)/utilidades.o
	g++ -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o $(OBJ)/utilidades.o

# Objetos

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INC)

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio4.o $(SRC)/ejercicio4.cpp -I$(INC)
